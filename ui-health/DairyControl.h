#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uihealth {

	/// <summary>
	/// Summary for DairyControl
	/// </summary>
	public ref class DairyControl : public System::Windows::Forms::UserControl
	{
	public:
		DairyControl(void)
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
		~DairyControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelDiaryControl;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelMealsDairy;

	private: System::Windows::Forms::Label^ labelMoodDairy;
	private: System::Windows::Forms::Label^ labelEntriesDairy;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::LinkLabel^ linkLabelAddNote;
	private: System::Windows::Forms::Label^ labelActivityDairy;
	protected:

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
			this->labelDiaryControl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelEntriesDairy = (gcnew System::Windows::Forms::Label());
			this->labelMoodDairy = (gcnew System::Windows::Forms::Label());
			this->labelMealsDairy = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->labelActivityDairy = (gcnew System::Windows::Forms::Label());
			this->linkLabelAddNote = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelDiaryControl
			// 
			this->labelDiaryControl->AutoSize = true;
			this->labelDiaryControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDiaryControl->Location = System::Drawing::Point(22, 21);
			this->labelDiaryControl->Name = L"labelDiaryControl";
			this->labelDiaryControl->Size = System::Drawing::Size(117, 38);
			this->labelDiaryControl->TabIndex = 3;
			this->labelDiaryControl->Text = L"DAIRY";
			this->labelDiaryControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabelAddNote);
			this->panel1->Controls->Add(this->labelActivityDairy);
			this->panel1->Controls->Add(this->labelMealsDairy);
			this->panel1->Controls->Add(this->labelMoodDairy);
			this->panel1->Location = System::Drawing::Point(29, 526);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(780, 171);
			this->panel1->TabIndex = 5;
			// 
			// labelEntriesDairy
			// 
			this->labelEntriesDairy->AutoSize = true;
			this->labelEntriesDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEntriesDairy->Location = System::Drawing::Point(24, 491);
			this->labelEntriesDairy->Name = L"labelEntriesDairy";
			this->labelEntriesDairy->Size = System::Drawing::Size(220, 25);
			this->labelEntriesDairy->TabIndex = 17;
			this->labelEntriesDairy->Text = L"Entries for selected date";
			this->labelEntriesDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMoodDairy
			// 
			this->labelMoodDairy->AutoSize = true;
			this->labelMoodDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMoodDairy->Location = System::Drawing::Point(15, 16);
			this->labelMoodDairy->Name = L"labelMoodDairy";
			this->labelMoodDairy->Size = System::Drawing::Size(68, 25);
			this->labelMoodDairy->TabIndex = 18;
			this->labelMoodDairy->Text = L"Mood:";
			this->labelMoodDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMealsDairy
			// 
			this->labelMealsDairy->AutoSize = true;
			this->labelMealsDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMealsDairy->Location = System::Drawing::Point(15, 53);
			this->labelMealsDairy->Name = L"labelMealsDairy";
			this->labelMealsDairy->Size = System::Drawing::Size(65, 25);
			this->labelMealsDairy->TabIndex = 19;
			this->labelMealsDairy->Text = L"Meals";
			this->labelMealsDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 2);
			this->monthCalendar1->Location = System::Drawing::Point(29, 79);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 18;
			// 
			// labelActivityDairy
			// 
			this->labelActivityDairy->AutoSize = true;
			this->labelActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityDairy->Location = System::Drawing::Point(15, 89);
			this->labelActivityDairy->Name = L"labelActivityDairy";
			this->labelActivityDairy->Size = System::Drawing::Size(80, 25);
			this->labelActivityDairy->TabIndex = 20;
			this->labelActivityDairy->Text = L"Activity:";
			this->labelActivityDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabelAddNote
			// 
			this->linkLabelAddNote->AutoSize = true;
			this->linkLabelAddNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabelAddNote->Location = System::Drawing::Point(15, 127);
			this->linkLabelAddNote->Name = L"linkLabelAddNote";
			this->linkLabelAddNote->Size = System::Drawing::Size(94, 25);
			this->linkLabelAddNote->TabIndex = 21;
			this->linkLabelAddNote->TabStop = true;
			this->linkLabelAddNote->Text = L"Add Note";
			// 
			// DairyControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->labelEntriesDairy);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelDiaryControl);
			this->Name = L"DairyControl";
			this->Size = System::Drawing::Size(1280, 800);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
