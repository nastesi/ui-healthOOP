#pragma once

using namespace System;

namespace uihealth
{
    public ref class UserData1
    {
    public:
        String^ Name = "Max";
        int Steps = 8000;
        double Weight = 76;
        double GoalWeight = 85;
        String^ ActivityLevel = "Medium";
        int ConsumedCalories = 2300;
        int BurnedCalories = 500;
        double Water = 1.5;
        String^ Mood = "Good";
    };
}