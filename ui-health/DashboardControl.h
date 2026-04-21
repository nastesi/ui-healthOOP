#pragma once

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
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::Button^ buttonAddMedicine;
	private: System::Windows::Forms::Button^ buttonAddNote;
	private: System::Windows::Forms::Button^ buttonAddActivity;
	private: System::Windows::Forms::Button^ buttonAddMeal;
	private: System::Windows::Forms::Label^ labelQuickActions;
	private: System::Windows::Forms::Panel^ panelAddMood;
	private: System::Windows::Forms::RadioButton^ radioButtonMood4;
	private: System::Windows::Forms::RadioButton^ radioButtonMood3;
	private: System::Windows::Forms::RadioButton^ radioButtonMood2;
	private: System::Windows::Forms::RadioButton^ radioButtonMood1;
	private: System::Windows::Forms::Label^ labelHowDoTouFeel;
	private: System::Windows::Forms::Panel^ panelContent;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->labelSummary = (gcnew System::Windows::Forms::Label());
			this->labelConsumed = (gcnew System::Windows::Forms::Label());
			this->labelBurned = (gcnew System::Windows::Forms::Label());
			this->labelwater = (gcnew System::Windows::Forms::Label());
			this->labelMood = (gcnew System::Windows::Forms::Label());
			this->labelConsumednumber = (gcnew System::Windows::Forms::Label());
			this->labelBurnednumber = (gcnew System::Windows::Forms::Label());
			this->labelWaternumber = (gcnew System::Windows::Forms::Label());
			this->labelMoodoption = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelProgresspanel = (gcnew System::Windows::Forms::Label());
			this->labelSteps = (gcnew System::Windows::Forms::Label());
			this->labelWeight = (gcnew System::Windows::Forms::Label());
			this->labelGoal = (gcnew System::Windows::Forms::Label());
			this->labelActivity = (gcnew System::Windows::Forms::Label());
			this->labelStepsnumber = (gcnew System::Windows::Forms::Label());
			this->labelWeightnumber = (gcnew System::Windows::Forms::Label());
			this->labelWeightgoal = (gcnew System::Windows::Forms::Label());
			this->labelActivityoption = (gcnew System::Windows::Forms::Label());
			this->panelQuickactions = (gcnew System::Windows::Forms::Panel());
			this->labelQuickActions = (gcnew System::Windows::Forms::Label());
			this->buttonAddMeal = (gcnew System::Windows::Forms::Button());
			this->buttonAddActivity = (gcnew System::Windows::Forms::Button());
			this->buttonAddNote = (gcnew System::Windows::Forms::Button());
			this->buttonAddMedicine = (gcnew System::Windows::Forms::Button());
			this->panelAddMood = (gcnew System::Windows::Forms::Panel());
			this->labelHowDoTouFeel = (gcnew System::Windows::Forms::Label());
			this->radioButtonMood1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMood2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMood3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMood4 = (gcnew System::Windows::Forms::RadioButton());
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
			this->panelGreeting->BackColor = System::Drawing::SystemColors::Menu;
			this->panelGreeting->Controls->Add(this->labelGreeting);
			this->panelGreeting->Location = System::Drawing::Point(44, 29);
			this->panelGreeting->Name = L"panelGreeting";
			this->panelGreeting->Size = System::Drawing::Size(700, 60);
			this->panelGreeting->TabIndex = 0;
			// 
			// labelGreeting
			// 
			this->labelGreeting->AutoSize = true;
			this->labelGreeting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGreeting->Location = System::Drawing::Point(16, 15);
			this->labelGreeting->Name = L"labelGreeting";
			this->labelGreeting->Size = System::Drawing::Size(441, 25);
			this->labelGreeting->TabIndex = 7;
			this->labelGreeting->Text = L"Welcome Max! Here is your daily health summary";
			this->labelGreeting->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelSummary
			// 
			this->panelSummary->Controls->Add(this->labelMoodoption);
			this->panelSummary->Controls->Add(this->labelWaternumber);
			this->panelSummary->Controls->Add(this->labelBurnednumber);
			this->panelSummary->Controls->Add(this->labelConsumednumber);
			this->panelSummary->Controls->Add(this->labelMood);
			this->panelSummary->Controls->Add(this->labelwater);
			this->panelSummary->Controls->Add(this->labelBurned);
			this->panelSummary->Controls->Add(this->labelConsumed);
			this->panelSummary->Controls->Add(this->labelSummary);
			this->panelSummary->Location = System::Drawing::Point(44, 117);
			this->panelSummary->Name = L"panelSummary";
			this->panelSummary->Size = System::Drawing::Size(240, 200);
			this->panelSummary->TabIndex = 1;
			// 
			// labelSummary
			// 
			this->labelSummary->AutoSize = true;
			this->labelSummary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSummary->Location = System::Drawing::Point(51, 10);
			this->labelSummary->Name = L"labelSummary";
			this->labelSummary->Size = System::Drawing::Size(140, 25);
			this->labelSummary->TabIndex = 8;
			this->labelSummary->Text = L"Daily summary";
			this->labelSummary->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelConsumed
			// 
			this->labelConsumed->AutoSize = true;
			this->labelConsumed->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelConsumed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConsumed->Location = System::Drawing::Point(16, 50);
			this->labelConsumed->Name = L"labelConsumed";
			this->labelConsumed->Size = System::Drawing::Size(94, 20);
			this->labelConsumed->TabIndex = 9;
			this->labelConsumed->Text = L"Consumed:";
			this->labelConsumed->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelBurned
			// 
			this->labelBurned->AutoSize = true;
			this->labelBurned->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelBurned->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBurned->Location = System::Drawing::Point(17, 83);
			this->labelBurned->Name = L"labelBurned";
			this->labelBurned->Size = System::Drawing::Size(68, 20);
			this->labelBurned->TabIndex = 10;
			this->labelBurned->Text = L"Burned:";
			this->labelBurned->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelwater
			// 
			this->labelwater->AutoSize = true;
			this->labelwater->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelwater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelwater->Location = System::Drawing::Point(17, 119);
			this->labelwater->Name = L"labelwater";
			this->labelwater->Size = System::Drawing::Size(59, 20);
			this->labelwater->TabIndex = 11;
			this->labelwater->Text = L"Water:";
			this->labelwater->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMood
			// 
			this->labelMood->AutoSize = true;
			this->labelMood->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelMood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMood->Location = System::Drawing::Point(17, 154);
			this->labelMood->Name = L"labelMood";
			this->labelMood->Size = System::Drawing::Size(55, 20);
			this->labelMood->TabIndex = 12;
			this->labelMood->Text = L"Mood:";
			this->labelMood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelConsumednumber
			// 
			this->labelConsumednumber->AutoSize = true;
			this->labelConsumednumber->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelConsumednumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelConsumednumber->Location = System::Drawing::Point(116, 50);
			this->labelConsumednumber->Name = L"labelConsumednumber";
			this->labelConsumednumber->Size = System::Drawing::Size(81, 20);
			this->labelConsumednumber->TabIndex = 13;
			this->labelConsumednumber->Text = L"2300 ccal";
			this->labelConsumednumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelBurnednumber
			// 
			this->labelBurnednumber->AutoSize = true;
			this->labelBurnednumber->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelBurnednumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelBurnednumber->Location = System::Drawing::Point(91, 83);
			this->labelBurnednumber->Name = L"labelBurnednumber";
			this->labelBurnednumber->Size = System::Drawing::Size(72, 20);
			this->labelBurnednumber->TabIndex = 14;
			this->labelBurnednumber->Text = L"500 ccal";
			this->labelBurnednumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWaternumber
			// 
			this->labelWaternumber->AutoSize = true;
			this->labelWaternumber->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelWaternumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWaternumber->Location = System::Drawing::Point(82, 119);
			this->labelWaternumber->Name = L"labelWaternumber";
			this->labelWaternumber->Size = System::Drawing::Size(40, 20);
			this->labelWaternumber->TabIndex = 15;
			this->labelWaternumber->Text = L"1.5 l";
			this->labelWaternumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMoodoption
			// 
			this->labelMoodoption->AutoSize = true;
			this->labelMoodoption->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelMoodoption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMoodoption->Location = System::Drawing::Point(82, 154);
			this->labelMoodoption->Name = L"labelMoodoption";
			this->labelMoodoption->Size = System::Drawing::Size(49, 20);
			this->labelMoodoption->TabIndex = 16;
			this->labelMoodoption->Text = L"Good";
			this->labelMoodoption->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelActivityoption);
			this->panel1->Controls->Add(this->labelWeightgoal);
			this->panel1->Controls->Add(this->labelWeightnumber);
			this->panel1->Controls->Add(this->labelStepsnumber);
			this->panel1->Controls->Add(this->labelActivity);
			this->panel1->Controls->Add(this->labelGoal);
			this->panel1->Controls->Add(this->labelWeight);
			this->panel1->Controls->Add(this->labelSteps);
			this->panel1->Controls->Add(this->labelProgresspanel);
			this->panel1->Location = System::Drawing::Point(44, 356);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 200);
			this->panel1->TabIndex = 17;
			// 
			// labelProgresspanel
			// 
			this->labelProgresspanel->AutoSize = true;
			this->labelProgresspanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProgresspanel->Location = System::Drawing::Point(51, 9);
			this->labelProgresspanel->Name = L"labelProgresspanel";
			this->labelProgresspanel->Size = System::Drawing::Size(147, 25);
			this->labelProgresspanel->TabIndex = 8;
			this->labelProgresspanel->Text = L"Progress/Goals";
			this->labelProgresspanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSteps
			// 
			this->labelSteps->AutoSize = true;
			this->labelSteps->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelSteps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSteps->Location = System::Drawing::Point(16, 50);
			this->labelSteps->Name = L"labelSteps";
			this->labelSteps->Size = System::Drawing::Size(57, 20);
			this->labelSteps->TabIndex = 9;
			this->labelSteps->Text = L"Steps:";
			this->labelSteps->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeight
			// 
			this->labelWeight->AutoSize = true;
			this->labelWeight->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeight->Location = System::Drawing::Point(17, 83);
			this->labelWeight->Name = L"labelWeight";
			this->labelWeight->Size = System::Drawing::Size(66, 20);
			this->labelWeight->TabIndex = 10;
			this->labelWeight->Text = L"Weight:";
			this->labelWeight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelGoal
			// 
			this->labelGoal->AutoSize = true;
			this->labelGoal->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelGoal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGoal->Location = System::Drawing::Point(17, 119);
			this->labelGoal->Name = L"labelGoal";
			this->labelGoal->Size = System::Drawing::Size(49, 20);
			this->labelGoal->TabIndex = 11;
			this->labelGoal->Text = L"Goal:";
			this->labelGoal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelActivity
			// 
			this->labelActivity->AutoSize = true;
			this->labelActivity->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivity->Location = System::Drawing::Point(17, 154);
			this->labelActivity->Name = L"labelActivity";
			this->labelActivity->Size = System::Drawing::Size(68, 20);
			this->labelActivity->TabIndex = 12;
			this->labelActivity->Text = L"Activity:";
			this->labelActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelStepsnumber
			// 
			this->labelStepsnumber->AutoSize = true;
			this->labelStepsnumber->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelStepsnumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelStepsnumber->Location = System::Drawing::Point(79, 50);
			this->labelStepsnumber->Name = L"labelStepsnumber";
			this->labelStepsnumber->Size = System::Drawing::Size(45, 20);
			this->labelStepsnumber->TabIndex = 13;
			this->labelStepsnumber->Text = L"8000";
			this->labelStepsnumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeightnumber
			// 
			this->labelWeightnumber->AutoSize = true;
			this->labelWeightnumber->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelWeightnumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWeightnumber->Location = System::Drawing::Point(89, 83);
			this->labelWeightnumber->Name = L"labelWeightnumber";
			this->labelWeightnumber->Size = System::Drawing::Size(49, 20);
			this->labelWeightnumber->TabIndex = 14;
			this->labelWeightnumber->Text = L"76 kg";
			this->labelWeightnumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWeightgoal
			// 
			this->labelWeightgoal->AutoSize = true;
			this->labelWeightgoal->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelWeightgoal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeightgoal->Location = System::Drawing::Point(72, 119);
			this->labelWeightgoal->Name = L"labelWeightgoal";
			this->labelWeightgoal->Size = System::Drawing::Size(49, 20);
			this->labelWeightgoal->TabIndex = 15;
			this->labelWeightgoal->Text = L"85 kg";
			this->labelWeightgoal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelActivityoption
			// 
			this->labelActivityoption->AutoSize = true;
			this->labelActivityoption->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelActivityoption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelActivityoption->Location = System::Drawing::Point(91, 154);
			this->labelActivityoption->Name = L"labelActivityoption";
			this->labelActivityoption->Size = System::Drawing::Size(68, 20);
			this->labelActivityoption->TabIndex = 16;
			this->labelActivityoption->Text = L"Medium";
			this->labelActivityoption->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelQuickactions
			// 
			this->panelQuickactions->Controls->Add(this->buttonAddMedicine);
			this->panelQuickactions->Controls->Add(this->buttonAddNote);
			this->panelQuickactions->Controls->Add(this->buttonAddActivity);
			this->panelQuickactions->Controls->Add(this->buttonAddMeal);
			this->panelQuickactions->Controls->Add(this->labelQuickActions);
			this->panelQuickactions->Location = System::Drawing::Point(331, 356);
			this->panelQuickactions->Name = L"panelQuickactions";
			this->panelQuickactions->Size = System::Drawing::Size(413, 199);
			this->panelQuickactions->TabIndex = 18;
			// 
			// labelQuickActions
			// 
			this->labelQuickActions->AutoSize = true;
			this->labelQuickActions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuickActions->Location = System::Drawing::Point(13, 9);
			this->labelQuickActions->Name = L"labelQuickActions";
			this->labelQuickActions->Size = System::Drawing::Size(130, 25);
			this->labelQuickActions->TabIndex = 9;
			this->labelQuickActions->Text = L"Quick actions";
			this->labelQuickActions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddMeal
			// 
			this->buttonAddMeal->Location = System::Drawing::Point(18, 50);
			this->buttonAddMeal->Name = L"buttonAddMeal";
			this->buttonAddMeal->Size = System::Drawing::Size(151, 30);
			this->buttonAddMeal->TabIndex = 10;
			this->buttonAddMeal->Text = L"Add meal";
			this->buttonAddMeal->UseVisualStyleBackColor = true;
			// 
			// buttonAddActivity
			// 
			this->buttonAddActivity->Location = System::Drawing::Point(19, 86);
			this->buttonAddActivity->Name = L"buttonAddActivity";
			this->buttonAddActivity->Size = System::Drawing::Size(151, 30);
			this->buttonAddActivity->TabIndex = 11;
			this->buttonAddActivity->Text = L"Add activity";
			this->buttonAddActivity->UseVisualStyleBackColor = true;
			// 
			// buttonAddNote
			// 
			this->buttonAddNote->Location = System::Drawing::Point(19, 122);
			this->buttonAddNote->Name = L"buttonAddNote";
			this->buttonAddNote->Size = System::Drawing::Size(151, 30);
			this->buttonAddNote->TabIndex = 12;
			this->buttonAddNote->Text = L"Add note";
			this->buttonAddNote->UseVisualStyleBackColor = true;
			// 
			// buttonAddMedicine
			// 
			this->buttonAddMedicine->Location = System::Drawing::Point(19, 158);
			this->buttonAddMedicine->Name = L"buttonAddMedicine";
			this->buttonAddMedicine->Size = System::Drawing::Size(151, 30);
			this->buttonAddMedicine->TabIndex = 13;
			this->buttonAddMedicine->Text = L"Add medicine";
			this->buttonAddMedicine->UseVisualStyleBackColor = true;
			// 
			// panelAddMood
			// 
			this->panelAddMood->Controls->Add(this->radioButtonMood4);
			this->panelAddMood->Controls->Add(this->radioButtonMood3);
			this->panelAddMood->Controls->Add(this->radioButtonMood2);
			this->panelAddMood->Controls->Add(this->radioButtonMood1);
			this->panelAddMood->Controls->Add(this->labelHowDoTouFeel);
			this->panelAddMood->Location = System::Drawing::Point(322, 121);
			this->panelAddMood->Name = L"panelAddMood";
			this->panelAddMood->Size = System::Drawing::Size(421, 195);
			this->panelAddMood->TabIndex = 19;
			// 
			// labelHowDoTouFeel
			// 
			this->labelHowDoTouFeel->AutoSize = true;
			this->labelHowDoTouFeel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHowDoTouFeel->Location = System::Drawing::Point(22, 17);
			this->labelHowDoTouFeel->Name = L"labelHowDoTouFeel";
			this->labelHowDoTouFeel->Size = System::Drawing::Size(215, 25);
			this->labelHowDoTouFeel->TabIndex = 9;
			this->labelHowDoTouFeel->Text = L"How do you feel today\?";
			this->labelHowDoTouFeel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButtonMood1
			// 
			this->radioButtonMood1->AutoSize = true;
			this->radioButtonMood1->Location = System::Drawing::Point(30, 63);
			this->radioButtonMood1->Name = L"radioButtonMood1";
			this->radioButtonMood1->Size = System::Drawing::Size(85, 20);
			this->radioButtonMood1->TabIndex = 10;
			this->radioButtonMood1->TabStop = true;
			this->radioButtonMood1->Text = L"🙂 Perfect";
			this->radioButtonMood1->UseVisualStyleBackColor = true;
			// 
			// radioButtonMood2
			// 
			this->radioButtonMood2->AutoSize = true;
			this->radioButtonMood2->Location = System::Drawing::Point(30, 89);
			this->radioButtonMood2->Name = L"radioButtonMood2";
			this->radioButtonMood2->Size = System::Drawing::Size(77, 20);
			this->radioButtonMood2->TabIndex = 11;
			this->radioButtonMood2->TabStop = true;
			this->radioButtonMood2->Text = L"🙂 Good";
			this->radioButtonMood2->UseVisualStyleBackColor = true;
			// 
			// radioButtonMood3
			// 
			this->radioButtonMood3->AutoSize = true;
			this->radioButtonMood3->Location = System::Drawing::Point(30, 116);
			this->radioButtonMood3->Name = L"radioButtonMood3";
			this->radioButtonMood3->Size = System::Drawing::Size(72, 20);
			this->radioButtonMood3->TabIndex = 12;
			this->radioButtonMood3->TabStop = true;
			this->radioButtonMood3->Text = L"🙂 Poor";
			this->radioButtonMood3->UseVisualStyleBackColor = true;
			// 
			// radioButtonMood4
			// 
			this->radioButtonMood4->AutoSize = true;
			this->radioButtonMood4->Location = System::Drawing::Point(30, 142);
			this->radioButtonMood4->Name = L"radioButtonMood4";
			this->radioButtonMood4->Size = System::Drawing::Size(90, 20);
			this->radioButtonMood4->TabIndex = 13;
			this->radioButtonMood4->TabStop = true;
			this->radioButtonMood4->Text = L"🙂 Terrible";
			this->radioButtonMood4->UseVisualStyleBackColor = true;
			// 
			// panelContent
			// 
			this->panelContent->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
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
	};
}
