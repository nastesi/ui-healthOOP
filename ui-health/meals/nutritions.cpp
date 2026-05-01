#include "nutritions.h"
#include <fstream>
#include <iostream>

Dishes Dishes::Dish(const std::string& dish_find) {
    std::ifstream file("meals_list.txt");
    std::string line;
    if (dish_find == "Water")
        return Dishes("Water", 0, 0, 0);
    while (std::getline(file, line)) {
        size_t p1 = line.find(';');
        size_t p2 = line.find(';', p1 + 1);
        size_t p3 = line.find(';', p2 + 1);
        if (p1 == std::string::npos || p2 == std::string::npos || p3 == std::string::npos) {
            continue;
        }
        std::string name = line.substr(0, p1);
        double proteins = std::stod(line.substr(p1 + 1, p2 - p1 - 1));
        double fats = std::stod(line.substr(p2 + 1, p3 - p2 - 1));
        double carbs = std::stod(line.substr(p3 + 1));
        if (name == dish_find) {
            return Dishes(name, proteins, fats, carbs);
        }
    }
    return Dishes("Blank", 0, 0, 0);
}

Dishes Dishes::Ingredient(const std::string& ingredient_find) {
    std::ifstream file("ingredients_list.txt");
    std::string name;
    double proteins, fats, carbs;
    while (file >> name >> proteins >> fats >> carbs) {
        if (name == ingredient_find) {
            return Dishes(name, proteins, fats, carbs);
        }
    }
    return Dishes("Blank", 0, 0, 0);
}

void Self_Cook::add_ingredient(const std::string& ingredient_name, double grams) {
    Dishes ing = Dishes::Ingredient(ingredient_name);
    components.push_back({ ing, grams });
}

double Self_Cook::get_proteins() const {
    double sum = 0;
    for (auto& c : components)
        sum += c.ingredient.get_proteins() * c.grams / 100.0;
    return sum;
}

double Self_Cook::get_fats() const {
    double sum = 0;
    for (auto& c : components)
        sum += c.ingredient.get_fats() * c.grams / 100.0;
    return sum;
}

double Self_Cook::get_carbs() const {
    double sum = 0;
    for (auto& c : components)
        sum += c.ingredient.get_carbs() * c.grams / 100.0;
    return sum;
}
