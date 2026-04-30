#pragma once
#include <string>

class MealEntry {
public:
    std::string date;
    std::string mealType;
    std::string name;
    double grams;
    double proteins;
    double fats;
    double carbs;
    double calories;

    MealEntry(
        const std::string& d,
        const std::string& type,
        const std::string& n,
        double g,
        double p,
        double f,
        double c,
        double kcal
    ) : date(d), mealType(type), name(n), grams(g),
        proteins(p), fats(f), carbs(c), calories(kcal) {
    }
};

class ActivityEntry {
public:
    std::string date;
    std::string name;
    double durationMin;
    double weightKg;
    double burnedCalories;

    ActivityEntry(
        const std::string& d,
        const std::string& n,
        double duration,
        double weight,
        double burned
    ) : date(d), name(n), durationMin(duration),
        weightKg(weight), burnedCalories(burned) {
    }
};