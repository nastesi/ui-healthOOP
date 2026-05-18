#pragma once
#include "MealsControl.h"
#include "ExcerciseControl.h"
#include "UserData1.h"
#include "calendar.h"
#include "mood.h"
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uihealth {

	/// <summary>
	/// Summary for DashboardControl
	/// </summary>
	public ref class DashboardControl : public System::Windows::Forms::UserControl
	{
	public:
		DashboardControl(void)
		{
			InitializeComponent();
			userData = gcnew UserData1();
			RefreshDashboard();
		}
	private: System::Windows::Forms::Button^ buttonMoodSave;
	private:
		UserData1^ userData;
	public:
	public:
		System::EventHandler^ MealsRequested;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelGreeting;
	protected:
	private: System::Windows::Forms::Label^ labelGreeting;
	private: System::Windows::Forms::Panel^ panelSummary;
	private: System::Windows::Forms::Label^ labelMoodoption;
	private: System::Windows::Forms::Label^ labelWaternumber;
	private: System::Windows::Forms::Label^ labelBurnednumber;
	private: System::Windows::Forms::Label^ labelConsumednumber;
	private: System::Windows::Forms::Label^ labelMood;
	private: System::Windows::Forms::Label^ labelwater;
	private: System::Windows::Forms::Label^ labelBurned;
	private: System::Windows::Forms::Label^ labelConsumed;
	private: System::Windows::Forms::Label^ labelSummary;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelActivityoption;
	private: System::Windows::Forms::Label^ labelWeightgoal;
	private: System::Windows::Forms::Label^ labelWeightnumber;
	private: System::Windows::Forms::Label^ labelStepsnumber;
	private: System::Windows::Forms::Label^ labelActivity;
	private: System::Windows::Forms::Label^ labelGoal;
	private: System::Windows::Forms::Label^ labelWeight;
	private: System::Windows::Forms::Label^ labelSteps;
	private: System::Windows::Forms::Label^ labelProgresspanel;
	private: System::Windows::Forms::Panel^ panelQuickactions;


	private: System::Windows::Forms::Button^ buttonAddActivity;
	private: System::Windows::Forms::Button^ buttonAddMeal;
	private: System::Windows::Forms::Label^ labelQuickActions;
	private: System::Windows::Forms::Panel^ panelAddMood;
	private: System::Windows::Forms::RadioButton^ radioTerrible;

	private: System::Windows::Forms::RadioButton^ radioPoor;

	private: System::Windows::Forms::RadioButton^ radioGood;

	private: System::Windows::Forms::RadioButton^ radioPerfect;

	private: System::Windows::Forms::Label^ labelHowDoTouFeel;
	private: System::Windows::Forms::Panel^ panelContent;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		void RefreshDashboard()
		{
			labelGreeting->Text = "Welcome " + userData->Name + "! Here is your daily health summary";

			labelConsumednumber->Text = userData->ConsumedCalories.ToString() + " kcal";
			labelBurnednumber->Text = userData->BurnedCalories.ToString() + " kcal";
			labelWaternumber->Text = userData->Water.ToString() + " l";
			labelMoodoption->Text = userData->Mood;

			labelStepsnumber->Text = userData->Steps.ToString();
			labelWeightnumber->Text = userData->Weight.ToString() + " kg";
			labelWeightgoal->Text = userData->GoalWeight.ToString() + " kg";
			labelActivityoption->Text = userData->ActivityLevel;
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelGreeting = (gcnew System::Windows::Forms::Panel());
			this->labelGreeting = (gcnew System::Windows::Forms::Label());
			this->panelSummary = (gcnew System::Windows::Forms::Panel());
			this->labelMoodoption = (gcnew System::Windows::Forms::Label());
			this->labelWaternumber = (gcnew System::Windows::Forms::Label());
			this->labelBurnednumber = (gcnew System::Windows::Forms::Label());
			this->labelConsumednumber = (gcnew System::Windows::Forms::Label());
			this->labelMood = (gcnew System::Windows::Forms::Label());
			this->labelwater = (gcnew System::Windows::Forms::Label());
			this->labelBurned = (gcnew System::Windows::Forms::Label());
			this->labelConsumed = (gcnew System::Windows::Forms::Label());
			this->labelSummary = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelActivityoption = (gcnew System::Windows::Forms::Label());
			this->labelWeightgoal = (gcnew System::Windows::Forms::Label());
			this->labelWeightnumber = (gcnew System::Windows::Forms::Label());
			this->labelStepsnumber = (gcnew System::Windows::Forms::Label());
			this->labelActivity = (gcnew System::Windows::Forms::Label());
			this->labelGoal = (gcnew System::Windows::Forms::Label());
			this->labelWeight = (gcnew System::Windows::Forms::Label());
			this->labelSteps = (gcnew System::Windows::Forms::Label());
			this->labelProgresspanel = (gcnew System::Windows::Forms::Label());
			this->panelQuickactions = (gcnew System::Windows::Forms::Panel());
			this->buttonAddActivity = (gcnew System::Windows::Forms::Button());
			this->buttonAddMeal = (gcnew System::Windows::Forms::Button());
			this->labelQuickActions = (gcnew System::Windows::Forms::Label());
			this->panelAddMood = (gcnew System::Windows::Forms::Panel());
			this->buttonMoodSave = (gcnew System::Windows::Forms::Button());
			this->radioTerrible = (gcnew System::Windows::Forms::RadioButton());
			this->radioPoor = (gcnew System::Windows::Forms::RadioButton());
			this->radioGood = (gcnew System::Windows::Forms::RadioButton());
			this->radioPerfect = (gcnew System::Windows::Forms::RadioButton());
			this->labelHowDoTouFeel = (gcnew System::Windows::Forms::Label());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->panelGreeting->SuspendLayout();
			this->panelSummary->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelQuickactions->SuspendLayout();
			this->panelAddMood->SuspendLayout();
			this->panelContent->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGreeting
			// 
			this->panelGreeting->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelGreeting->Controls->Add(this->labelGreeting);
			this->panelGreeting->Location = System::Drawing::Point(44, 29);
			this->panelGreeting->Name = L"panelGreeting";
			this->panelGreeting->Size = System::Drawing::Size(700, 60);
			this->panelGreeting->TabIndex = 0;
			// 
			// labelGreeting
			// 
			this->labelGreeting->AutoSize = true;
			this->labelGreeting->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGreeting->Location = System::Drawing::Point(7, 13);
			this->labelGreeting->Name = L"labelGreeting";
			this->labelGreeting->Size = System::Drawing::Size(686, 34);
			this->labelGreeting->TabIndex = 7;
			this->labelGreeting->Text = L"Welcome Max! Here is your daily health summary";
			this->labelGreeting->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelSummary
			// 
			this->panelSummary->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panelSummary->Controls->Add(this->labelMoodoption);
			this->panelSummary->Controls->Add(this->labelWaternumber);
			this->panelSummary->Controls->Add(this->labelBurnednumber);
			this->panelSummary->Controls->Add(this->labelConsumednumber);
			this->panelSummary->Controls->Add(this->labelMood);
			this->panelSummary->Controls->Add(this->labelwater);
			this->panelSummary->Controls->Add(this->labelBurned);
			this->panelSummary->Controls->Add(this->labelConsumed);
			this->panelSummary->Controls->Add(this->labelSummary);
			this->panelSummary->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelSummary->Location = System::Drawing::Point(44, 117);
			this->panelSummary->Name = L"panelSummary";
			this->panelSummary->Size = System::Drawing::Size(240, 200);
			this->panelSummary->TabIndex = 1;
			// 
			// labelMoodoption
			// 
			this->labelMoodoption->AutoSize = true;
			this->labelMoodoption->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelMoodoption->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMoodoption->Location = System::Drawing::Point(81, 154);
			this->labelMoodoption->Name = L"labelMoodoption";
			this->labelMoodoption->Size = System::Drawing::Size(59, 21);
			this->labelMoodoption->TabIndex = 16;
			this->labelMoodoption->Text = L"Good";
			this->labelMoodoption->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWaternumber
			// 
			this->labelWaternumber->AutoSize = true;
			this->labelWaternumber->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelWaternumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWaternumber->Location = System::Drawing::Point(79, 119);
			this->labelWaternumber->Name = L"labelWaternumber";
			this->labelWaternumber->Size = System::Drawing::Size(42, 21);
			this->labelWaternumber->TabIndex = 15;
			this->labelWaternumber->Text = L"1.5 l";
			this->labelWaternumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelBurnednumber
			// 
			this->labelBurnednumber->AutoSize = true;
			this->labelBurnednumber->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelBurnednumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBurnednumber->Location = System::Drawing::Point(90, 82);
			this->labelBurnednumber->Name = L"labelBurnednumber";
			this->labelBurnednumber->Size = System::Drawing::Size(80, 21);
			this->labelBurnednumber->TabIndex = 14;
			this->labelBurnednumber->Text = L"500 ccal";
			this->labelBurnednumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelConsumednumber
			// 
			this->labelConsumednumber->AutoSize = true;
			this->labelConsumednumber->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelConsumednumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConsumednumber->Location = System::Drawing::Point(127, 49);
			this->labelConsumednumber->Name = L"labelConsumednumber";
			this->labelConsumednumber->Size = System::Drawing::Size(89, 21);
			this->labelConsumednumber->TabIndex = 13;
			this->labelConsumednumber->Text = L"2300 ccal";
			this->labelConsumednumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMood
			// 
			this->labelMood->AutoSize = true;
			this->labelMood->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelMood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMood->Location = System::Drawing::Point(17, 154);
			this->labelMood->Name = L"labelMood";
			this->labelMood->Size = System::Drawing::Size(62, 19);
			this->labelMood->TabIndex = 12;
			this->labelMood->Text = L"Mood:";
			this->labelMood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelwater
			// 
			this->labelwater->AutoSize = true;
			this->labelwater->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelwater->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelwater->Location = System::Drawing::Point(17, 119);
			this->labelwater->Name = L"labelwater";
			this->labelwater->Size = System::Drawing::Size(60, 19);
			this->labelwater->TabIndex = 11;
			this->labelwater->Text = L"Water:";
			this->labelwater->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelBurned
			// 
			this->labelBurned->AutoSize = true;
			this->labelBurned->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelBurned->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBurned->Location = System::Drawing::Point(17, 83);
			this->labelBurned->Name = L"labelBurned";
			this->labelBurned->Size = System::Drawing::Size(71, 19);
			this->labelBurned->TabIndex = 10;
			this->labelBurned->Text = L"Burned:";
			this->labelBurned->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelConsumed
			// 
			this->labelConsumed->AutoSize = true;
			this->labelConsumed->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelConsumed->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConsumed->Location = System::Drawing::Point(16, 50);
			this->labelConsumed->Name = L"labelConsumed";
			this->labelConsumed->Size = System::Drawing::Size(104, 19);
			this->labelConsumed->TabIndex = 9;
			this->labelConsumed->Text = L"Consumed:";
			this->labelConsumed->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSummary
			// 
			this->labelSummary->AutoSize = true;
			this->labelSummary->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSummary->Location = System::Drawing::Point(51, 10);
			this->labelSummary->Name = L"labelSummary";
			this->labelSummary->Size = System::Drawing::Size(131, 19);
			this->labelSummary->TabIndex = 8;
			this->labelSummary->Text = L"Daily summary";
			this->labelSummary->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel1->Controls->Add(this->labelActivityoption);
			this->panel1->Controls->Add(this->labelWeightgoal);
			this->panel1->Controls->Add(this->labelWeightnumber);
			this->panel1->Controls->Add(this->labelStepsnumber);
			this->panel1->Controls->Add(this->labelActivity);
			this->panel1->Controls->Add(this->labelGoal);
			this->panel1->Controls->Add(this->labelWeight);
			this->panel1->Controls->Add(this->labelSteps);
			this->panel1->Controls->Add(this->labelProgresspanel);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(44, 356);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 200);
			this->panel1->TabIndex = 17;
			// 
			// labelActivityoption
			// 
			this->labelActivityoption->AutoSize = true;
			this->labelActivityoption->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelActivityoption->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityoption->Location = System::Drawing::Point(91, 154);
			this->labelActivityoption->Name = L"labelActivityoption";
			this->labelActivityoption->Size = System::Drawing::Size(78, 21);
			this->labelActivityoption->TabIndex = 16;
			this->labelActivityoption->Text = L"Medium";
			this->labelActivityoption->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeightgoal
			// 
			this->labelWeightgoal->AutoSize = true;
			this->labelWeightgoal->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelWeightgoal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeightgoal->Location = System::Drawing::Point(72, 120);
			this->labelWeightgoal->Name = L"labelWeightgoal";
			this->labelWeightgoal->Size = System::Drawing::Size(53, 21);
			this->labelWeightgoal->TabIndex = 15;
			this->labelWeightgoal->Text = L"85 kg";
			this->labelWeightgoal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeightnumber
			// 
			this->labelWeightnumber->AutoSize = true;
			this->labelWeightnumber->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelWeightnumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeightnumber->Location = System::Drawing::Point(89, 85);
			this->labelWeightnumber->Name = L"labelWeightnumber";
			this->labelWeightnumber->Size = System::Drawing::Size(53, 21);
			this->labelWeightnumber->TabIndex = 14;
			this->labelWeightnumber->Text = L"76 kg";
			this->labelWeightnumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelStepsnumber
			// 
			this->labelStepsnumber->AutoSize = true;
			this->labelStepsnumber->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelStepsnumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelStepsnumber->Location = System::Drawing::Point(79, 50);
			this->labelStepsnumber->Name = L"labelStepsnumber";
			this->labelStepsnumber->Size = System::Drawing::Size(46, 21);
			this->labelStepsnumber->TabIndex = 13;
			this->labelStepsnumber->Text = L"8000";
			this->labelStepsnumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelActivity
			// 
			this->labelActivity->AutoSize = true;
			this->labelActivity->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelActivity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivity->Location = System::Drawing::Point(17, 154);
			this->labelActivity->Name = L"labelActivity";
			this->labelActivity->Size = System::Drawing::Size(74, 19);
			this->labelActivity->TabIndex = 12;
			this->labelActivity->Text = L"Activity:";
			this->labelActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelGoal
			// 
			this->labelGoal->AutoSize = true;
			this->labelGoal->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelGoal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGoal->Location = System::Drawing::Point(17, 120);
			this->labelGoal->Name = L"labelGoal";
			this->labelGoal->Size = System::Drawing::Size(54, 19);
			this->labelGoal->TabIndex = 11;
			this->labelGoal->Text = L"Goal:";
			this->labelGoal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeight
			// 
			this->labelWeight->AutoSize = true;
			this->labelWeight->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelWeight->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeight->Location = System::Drawing::Point(18, 85);
			this->labelWeight->Name = L"labelWeight";
			this->labelWeight->Size = System::Drawing::Size(69, 19);
			this->labelWeight->TabIndex = 10;
			this->labelWeight->Text = L"Weight:";
			this->labelWeight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSteps
			// 
			this->labelSteps->AutoSize = true;
			this->labelSteps->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->labelSteps->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSteps->Location = System::Drawing::Point(16, 50);
			this->labelSteps->Name = L"labelSteps";
			this->labelSteps->Size = System::Drawing::Size(57, 19);
			this->labelSteps->TabIndex = 9;
			this->labelSteps->Text = L"Steps:";
			this->labelSteps->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelProgresspanel
			// 
			this->labelProgresspanel->AutoSize = true;
			this->labelProgresspanel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProgresspanel->Location = System::Drawing::Point(51, 9);
			this->labelProgresspanel->Name = L"labelProgresspanel";
			this->labelProgresspanel->Size = System::Drawing::Size(134, 19);
			this->labelProgresspanel->TabIndex = 8;
			this->labelProgresspanel->Text = L"Progress/Goals";
			this->labelProgresspanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelQuickactions
			// 
			this->panelQuickactions->BackColor = System::Drawing::Color::AliceBlue;
			this->panelQuickactions->Controls->Add(this->buttonAddActivity);
			this->panelQuickactions->Controls->Add(this->buttonAddMeal);
			this->panelQuickactions->Controls->Add(this->labelQuickActions);
			this->panelQuickactions->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelQuickactions->Location = System::Drawing::Point(331, 352);
			this->panelQuickactions->Name = L"panelQuickactions";
			this->panelQuickactions->Size = System::Drawing::Size(413, 199);
			this->panelQuickactions->TabIndex = 18;
			// 
			// buttonAddActivity
			// 
			this->buttonAddActivity->Location = System::Drawing::Point(19, 86);
			this->buttonAddActivity->Name = L"buttonAddActivity";
			this->buttonAddActivity->Size = System::Drawing::Size(151, 30);
			this->buttonAddActivity->TabIndex = 11;
			this->buttonAddActivity->Text = L"Add activity";
			this->buttonAddActivity->UseVisualStyleBackColor = true;
			this->buttonAddActivity->Click += gcnew System::EventHandler(this, &DashboardControl::buttonExcercise_Click);
			// 
			// buttonAddMeal
			// 
			this->buttonAddMeal->Location = System::Drawing::Point(18, 50);
			this->buttonAddMeal->Name = L"buttonAddMeal";
			this->buttonAddMeal->Size = System::Drawing::Size(151, 30);
			this->buttonAddMeal->TabIndex = 10;
			this->buttonAddMeal->Text = L"Add meal";
			this->buttonAddMeal->UseVisualStyleBackColor = true;
			this->buttonAddMeal->Click += gcnew System::EventHandler(this, &DashboardControl::buttonMeals_Click);
			// 
			// labelQuickActions
			// 
			this->labelQuickActions->AutoSize = true;
			this->labelQuickActions->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuickActions->Location = System::Drawing::Point(13, 9);
			this->labelQuickActions->Name = L"labelQuickActions";
			this->labelQuickActions->Size = System::Drawing::Size(122, 19);
			this->labelQuickActions->TabIndex = 9;
			this->labelQuickActions->Text = L"Quick actions";
			this->labelQuickActions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelAddMood
			// 
			this->panelAddMood->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panelAddMood->Controls->Add(this->buttonMoodSave);
			this->panelAddMood->Controls->Add(this->radioTerrible);
			this->panelAddMood->Controls->Add(this->radioPoor);
			this->panelAddMood->Controls->Add(this->radioGood);
			this->panelAddMood->Controls->Add(this->radioPerfect);
			this->panelAddMood->Controls->Add(this->labelHowDoTouFeel);
			this->panelAddMood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelAddMood->Location = System::Drawing::Point(322, 117);
			this->panelAddMood->Name = L"panelAddMood";
			this->panelAddMood->Size = System::Drawing::Size(421, 199);
			this->panelAddMood->TabIndex = 19;
			// 
			// buttonMoodSave
			// 
			this->buttonMoodSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMoodSave->Location = System::Drawing::Point(254, 145);
			this->buttonMoodSave->Name = L"buttonMoodSave";
			this->buttonMoodSave->Size = System::Drawing::Size(151, 30);
			this->buttonMoodSave->TabIndex = 14;
			this->buttonMoodSave->Text = L"Save mood";
			this->buttonMoodSave->UseVisualStyleBackColor = true;
			this->buttonMoodSave->Click += gcnew System::EventHandler(this, &DashboardControl::buttonMoodSave_Click);
			// 
			// radioTerrible
			// 
			this->radioTerrible->AutoSize = true;
			this->radioTerrible->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioTerrible->Location = System::Drawing::Point(28, 148);
			this->radioTerrible->Name = L"radioTerrible";
			this->radioTerrible->Size = System::Drawing::Size(89, 25);
			this->radioTerrible->TabIndex = 13;
			this->radioTerrible->TabStop = true;
			this->radioTerrible->Text = L"Terrible";
			this->radioTerrible->UseVisualStyleBackColor = true;
			this->radioTerrible->CheckedChanged += gcnew System::EventHandler(this, &DashboardControl::radioTerrible_CheckedChanged);
			// 
			// radioPoor
			// 
			this->radioPoor->AutoSize = true;
			this->radioPoor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioPoor->Location = System::Drawing::Point(28, 113);
			this->radioPoor->Name = L"radioPoor";
			this->radioPoor->Size = System::Drawing::Size(68, 25);
			this->radioPoor->TabIndex = 12;
			this->radioPoor->TabStop = true;
			this->radioPoor->Text = L"Poor";
			this->radioPoor->UseVisualStyleBackColor = true;
			// 
			// radioGood
			// 
			this->radioGood->AutoSize = true;
			this->radioGood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioGood->Location = System::Drawing::Point(28, 78);
			this->radioGood->Name = L"radioGood";
			this->radioGood->Size = System::Drawing::Size(80, 25);
			this->radioGood->TabIndex = 11;
			this->radioGood->TabStop = true;
			this->radioGood->Text = L"Good";
			this->radioGood->UseVisualStyleBackColor = true;
			// 
			// radioPerfect
			// 
			this->radioPerfect->AutoSize = true;
			this->radioPerfect->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioPerfect->Location = System::Drawing::Point(28, 44);
			this->radioPerfect->Name = L"radioPerfect";
			this->radioPerfect->Size = System::Drawing::Size(91, 25);
			this->radioPerfect->TabIndex = 10;
			this->radioPerfect->TabStop = true;
			this->radioPerfect->Text = L"Perfect";
			this->radioPerfect->UseVisualStyleBackColor = true;
			// 
			// labelHowDoTouFeel
			// 
			this->labelHowDoTouFeel->AutoSize = true;
			this->labelHowDoTouFeel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHowDoTouFeel->Location = System::Drawing::Point(96, 10);
			this->labelHowDoTouFeel->Name = L"labelHowDoTouFeel";
			this->labelHowDoTouFeel->Size = System::Drawing::Size(207, 19);
			this->labelHowDoTouFeel->TabIndex = 9;
			this->labelHowDoTouFeel->Text = L"How do you feel today\?";
			this->labelHowDoTouFeel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelContent
			// 
			this->panelContent->BackColor = System::Drawing::Color::AliceBlue;
			this->panelContent->Controls->Add(this->panelAddMood);
			this->panelContent->Controls->Add(this->panelQuickactions);
			this->panelContent->Controls->Add(this->panel1);
			this->panelContent->Controls->Add(this->panelSummary);
			this->panelContent->Controls->Add(this->panelGreeting);
			this->panelContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContent->Location = System::Drawing::Point(0, 0);
			this->panelContent->Name = L"panelContent";
			this->panelContent->Size = System::Drawing::Size(1280, 800);
			this->panelContent->TabIndex = 5;
			this->panelContent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DashboardControl::panelContent_Paint);
			// 
			// DashboardControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panelContent);
			this->Name = L"DashboardControl";
			this->Size = System::Drawing::Size(1280, 800);
			this->panelGreeting->ResumeLayout(false);
			this->panelGreeting->PerformLayout();
			this->panelSummary->ResumeLayout(false);
			this->panelSummary->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelQuickactions->ResumeLayout(false);
			this->panelQuickactions->PerformLayout();
			this->panelAddMood->ResumeLayout(false);
			this->panelAddMood->PerformLayout();
			this->panelContent->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonMeals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MealsRequested != nullptr)
			MealsRequested(this, System::EventArgs::Empty);
	}
	public:
		System::EventHandler^ ExerciseRequested;
	private: System::Void buttonExcercise_Click(System::Object^ sender, System::EventArgs^ e) {

		if (ExerciseRequested != nullptr)
			ExerciseRequested(this, System::EventArgs::Empty);
	}
private: System::Void panelContent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
private: System::Void buttonMoodSave_Click(System::Object^ sender, System::EventArgs^ e)
{
	int moodValue = 0;
	std::string moodText = "";

	if (radioPerfect->Checked)
	{
		moodValue = 5;
		moodText = "Perfect";
		userData->Mood = "Perfect";
	}
	else if (radioGood->Checked)
	{
		moodValue = 4;
		moodText = "Good";
		userData->Mood = "Good";
	}
	else if (radioPoor->Checked)
	{
		moodValue = 2;
		moodText = "Poor";
		userData->Mood = "Poor";
	}
	else if (radioTerrible->Checked)
	{
		moodValue = 1;
		moodText = "Terrible";
		userData->Mood = "Terrible";
	}
	else
	{
		return;
	}

	CalendarHealth calendar("calendar.txt");

	calendar.addMood(
		CalendarHealth::today_ddmmyyyy(),
		moodValue,
		moodText
	);

	RefreshDashboard();

	if (radioPoor->Checked || radioTerrible->Checked)
	{
		System::Windows::Forms::DialogResult result;

		result = MessageBox::Show(
			"Do you want to hear a joke?",
			"Mood support",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			char joke[1024];

			Mood mood(nullptr, "anekdoty.txt");
			mood.setMood(1);

			if (mood.randomJoke(joke, sizeof(joke)))
			{
				MessageBox::Show(
					gcnew System::String(joke),
					"Mood support",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information
				);
			}
		}
	}
}
private: System::Void radioTerrible_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
