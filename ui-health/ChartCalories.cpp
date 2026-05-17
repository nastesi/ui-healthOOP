#include "ChartCalories.h"

#include <sstream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <cctype>

CaloriesChartLogic::CaloriesChartLogic(const std::string& calendarPath)
    : calendarPath_(calendarPath)
{
}

std::vector<CaloriesChartPoint> CaloriesChartLogic::getMonthlyCalories(int month, int year) const
{
    std::vector<CaloriesChartPoint> result;

    int daysInMonth = getDaysInMonth(month, year);

    for (int day = 1; day <= daysInMonth; day++)
    {
        std::string date = makeDateString(day, month, year);

        double kcalIn = 0.0;
        double kcalOut = 0.0;

        calculateCaloriesForDate(calendarPath_, date, kcalIn, kcalOut);

        if (kcalIn > 0.0 || kcalOut > 0.0)
        {
            CaloriesChartPoint point;
            point.day = day;
            point.eatenCalories = kcalIn;
            point.burnedCalories = kcalOut;

            result.push_back(point);
        }
    }

    return result;
}

std::string CaloriesChartLogic::makeDateString(int day, int month, int year)
{
    std::ostringstream ss;

    ss << std::setw(2) << std::setfill('0') << day
        << "-"
        << std::setw(2) << std::setfill('0') << month
        << "-"
        << year;

    return ss.str();
}

int CaloriesChartLogic::getDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
        return 31;

    case 2:
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            return 29;
        }
        return 28;

    case 3:
        return 31;

    case 4:
        return 30;

    case 5:
        return 31;

    case 6:
        return 30;

    case 7:
        return 31;

    case 8:
        return 31;

    case 9:
        return 30;

    case 10:
        return 31;

    case 11:
        return 30;

    case 12:
        return 31;

    default:
        return 30;
    }
}

static std::string trimChartString(const std::string& s)
{
    std::size_t start = 0;
    std::size_t end = s.size();

    while (start < end && (unsigned char)s[start] <= ' ')
    {
        start++;
    }

    while (end > start && (unsigned char)s[end - 1] <= ' ')
    {
        end--;
    }

    return s.substr(start, end - start);
}

static bool startsWithChartString(const std::string& s, const std::string& prefix)
{
    return s.size() >= prefix.size()
        && std::equal(prefix.begin(), prefix.end(), s.begin());
}

void CaloriesChartLogic::calculateCaloriesForDate(
    const std::string& calendarPath,
    const std::string& date,
    double& eatenCalories,
    double& burnedCalories
)
{
    eatenCalories = 0.0;
    burnedCalories = 0.0;

    std::ifstream in(calendarPath);

    if (!in)
    {
        return;
    }

    std::string line;
    std::string currentSection;

    while (std::getline(in, line))
    {
        std::string s = trimChartString(line);

        if (s.empty())
        {
            continue;
        }

        if (s.front() == '[' && s.back() == ']')
        {
            currentSection = s;
            continue;
        }

        if (!startsWithChartString(s, date))
        {
            continue;
        }

        std::string payload = s.size() > 11 ? s.substr(11) : std::string();

        if (currentSection == "[food]")
        {
            std::istringstream ss(payload);

            std::string foodName;
            ss >> foodName;

            double grams = parseGramsFromFoodPayload(payload);
            double kcalPer100g = getCaloriesPer100g(foodName);

            eatenCalories += grams * kcalPer100g / 100.0;
        }
        else if (currentSection == "[activity]")
        {
            std::istringstream ss(payload);

            std::string activityName;
            std::string durationText;
            std::string burnedText;

            ss >> activityName >> durationText >> burnedText;

            double burned = parseDoubleValue(burnedText);

            if (burned > 0.0)
            {
                burnedCalories += burned;
            }
        }
    }
}

double CaloriesChartLogic::getCaloriesPer100g(const std::string& name)
{
    if (name == "Banana")
    {
        return 89.0;
    }

    if (name == "Borsh" || name == "Borscht")
    {
        return 57.0;
    }

    if (name == "Apple")
    {
        return 52.0;
    }

    if (name == "Rice")
    {
        return 130.0;
    }

    if (name == "Chicken")
    {
        return 165.0;
    }

    if (name == "Egg")
    {
        return 155.0;
    }

    if (name == "Bread")
    {
        return 265.0;
    }

    return 0.0;
}

double CaloriesChartLogic::parseGramsFromFoodPayload(const std::string& payload)
{
    std::istringstream ss(payload);

    std::string foodName;
    std::string gramsText;

    ss >> foodName;
    ss >> gramsText;

    if (gramsText.empty())
    {
        return 0.0;
    }

    std::string number;

    for (char c : gramsText)
    {
        if (std::isdigit((unsigned char)c) || c == '.' || c == ',')
        {
            number += c;
        }
        else
        {
            break;
        }
    }

    std::replace(number.begin(), number.end(), ',', '.');

    if (number.empty())
    {
        return 0.0;
    }

    try
    {
        double grams = std::stod(number);

        if (grams > 1000.0)
        {
            grams = grams / 10.0;
        }

        return grams;
    }
    catch (...)
    {
        return 0.0;
    }
}

double CaloriesChartLogic::parseDoubleValue(const std::string& text)
{
    if (text.empty())
    {
        return 0.0;
    }

    std::string fixedText = text;

    std::replace(fixedText.begin(), fixedText.end(), ',', '.');

    try
    {
        return std::stod(fixedText);
    }
    catch (...)
    {
        return 0.0;
    }
}