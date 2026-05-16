#pragma once

using namespace System;

namespace uihealth
{
    public ref class UserData
    {
    public:
        static String^ Name;

        static int Steps;
        static double Weight;
        static double GoalWeight;
        static String^ ActivityLevel;

        static int ConsumedCalories;
        static int BurnedCalories;
        static double Water;
        static String^ Mood;
    };
}