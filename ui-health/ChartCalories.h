#pragma once
#include <string>
#include <vector>

struct CaloriesChartPoint
{
    int day;
    double eatenCalories;
    double burnedCalories;
};

class CaloriesChartLogic
{
public:
    CaloriesChartLogic(const std::string& calendarPath);

    std::vector<CaloriesChartPoint> getMonthlyCalories(int month, int year) const;

private:
    std::string calendarPath_;

    static std::string makeDateString(int day, int month, int year);
    static int getDaysInMonth(int month, int year);

    static void calculateCaloriesForDate(
        const std::string& calendarPath,
        const std::string& date,
        double& eatenCalories,
        double& burnedCalories
    );

    static double getCaloriesPer100g(const std::string& name);
    static double parseGramsFromFoodPayload(const std::string& payload);
    static double parseDoubleValue(const std::string& text);
};
