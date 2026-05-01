#pragma once
#include "calendar.h"
#include <vector>
#include <msclr/marshal_cppstd.h>

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
	private: System::Windows::Forms::Label^ textMoodDairy;
	private: System::Windows::Forms::Label^ textMealsDairy;
	private: System::Windows::Forms::Label^ textActivityDairy;

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
			this->textMoodDairy = (gcnew System::Windows::Forms::Label());
			this->linkLabelAddNote = (gcnew System::Windows::Forms::LinkLabel());
			this->labelActivityDairy = (gcnew System::Windows::Forms::Label());
			this->labelMealsDairy = (gcnew System::Windows::Forms::Label());
			this->labelMoodDairy = (gcnew System::Windows::Forms::Label());
			this->labelEntriesDairy = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textMealsDairy = (gcnew System::Windows::Forms::Label());
			this->textActivityDairy = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelDiaryControl
			// 
			this->labelDiaryControl->AutoSize = true;
			this->labelDiaryControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDiaryControl->Location = System::Drawing::Point(16, 17);
			this->labelDiaryControl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDiaryControl->Name = L"labelDiaryControl";
			this->labelDiaryControl->Size = System::Drawing::Size(98, 31);
			this->labelDiaryControl->TabIndex = 3;
			this->labelDiaryControl->Text = L"DAIRY";
			this->labelDiaryControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textActivityDairy);
			this->panel1->Controls->Add(this->textMealsDairy);
			this->panel1->Controls->Add(this->textMoodDairy);
			this->panel1->Controls->Add(this->linkLabelAddNote);
			this->panel1->Controls->Add(this->labelActivityDairy);
			this->panel1->Controls->Add(this->labelMealsDairy);
			this->panel1->Controls->Add(this->labelMoodDairy);
			this->panel1->Location = System::Drawing::Point(22, 427);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(585, 139);
			this->panel1->TabIndex = 5;
			// 
			// textMoodDairy
			// 
			this->textMoodDairy->AutoSize = true;
			this->textMoodDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMoodDairy->Location = System::Drawing::Point(104, 13);
			this->textMoodDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->textMoodDairy->Name = L"textMoodDairy";
			this->textMoodDairy->Size = System::Drawing::Size(0, 20);
			this->textMoodDairy->TabIndex = 22;
			this->textMoodDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabelAddNote
			// 
			this->linkLabelAddNote->AutoSize = true;
			this->linkLabelAddNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabelAddNote->Location = System::Drawing::Point(11, 103);
			this->linkLabelAddNote->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabelAddNote->Name = L"linkLabelAddNote";
			this->linkLabelAddNote->Size = System::Drawing::Size(76, 20);
			this->linkLabelAddNote->TabIndex = 21;
			this->linkLabelAddNote->TabStop = true;
			this->linkLabelAddNote->Text = L"Add Note";
			// 
			// labelActivityDairy
			// 
			this->labelActivityDairy->AutoSize = true;
			this->labelActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityDairy->Location = System::Drawing::Point(11, 72);
			this->labelActivityDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelActivityDairy->Name = L"labelActivityDairy";
			this->labelActivityDairy->Size = System::Drawing::Size(62, 20);
			this->labelActivityDairy->TabIndex = 20;
			this->labelActivityDairy->Text = L"Activity:";
			this->labelActivityDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMealsDairy
			// 
			this->labelMealsDairy->AutoSize = true;
			this->labelMealsDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMealsDairy->Location = System::Drawing::Point(11, 43);
			this->labelMealsDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMealsDairy->Name = L"labelMealsDairy";
			this->labelMealsDairy->Size = System::Drawing::Size(51, 20);
			this->labelMealsDairy->TabIndex = 19;
			this->labelMealsDairy->Text = L"Meals";
			this->labelMealsDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMoodDairy
			// 
			this->labelMoodDairy->AutoSize = true;
			this->labelMoodDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMoodDairy->Location = System::Drawing::Point(11, 13);
			this->labelMoodDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMoodDairy->Name = L"labelMoodDairy";
			this->labelMoodDairy->Size = System::Drawing::Size(53, 20);
			this->labelMoodDairy->TabIndex = 18;
			this->labelMoodDairy->Text = L"Mood:";
			this->labelMoodDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelEntriesDairy
			// 
			this->labelEntriesDairy->AutoSize = true;
			this->labelEntriesDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEntriesDairy->Location = System::Drawing::Point(18, 399);
			this->labelEntriesDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelEntriesDairy->Name = L"labelEntriesDairy";
			this->labelEntriesDairy->Size = System::Drawing::Size(182, 20);
			this->labelEntriesDairy->TabIndex = 17;
			this->labelEntriesDairy->Text = L"Entries for selected date";
			this->labelEntriesDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(4, 2);
			this->monthCalendar1->Location = System::Drawing::Point(22, 64);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(7);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 18;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &DairyControl::monthCalendar1_DateChanged);
			// 
			// textMealsDairy
			// 
			this->textMealsDairy->AutoSize = true;
			this->textMealsDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMealsDairy->Location = System::Drawing::Point(104, 43);
			this->textMealsDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->textMealsDairy->Name = L"textMealsDairy";
			this->textMealsDairy->Size = System::Drawing::Size(0, 20);
			this->textMealsDairy->TabIndex = 19;
			this->textMealsDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textActivityDairy
			// 
			this->textActivityDairy->AutoSize = true;
			this->textActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textActivityDairy->Location = System::Drawing::Point(104, 72);
			this->textActivityDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->textActivityDairy->Name = L"textActivityDairy";
			this->textActivityDairy->Size = System::Drawing::Size(0, 20);
			this->textActivityDairy->TabIndex = 21;
			this->textActivityDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DairyControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->labelEntriesDairy);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelDiaryControl);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"DairyControl";
			this->Size = System::Drawing::Size(960, 650);
			this->Load += gcnew System::EventHandler(this, &DairyControl::DairyControl_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DairyControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) 
	{
		CalendarHealth calendar;
		std::vector<std::string> data;
		std::string date = msclr::interop::marshal_as<std::string>(e->Start.ToString("dd-MM-yyyy"));
		calendar.listByDate(date, data);

		if (data.size() >= 4 && data[3].length() >= 1)
			this->textMoodDairy->Text = msclr::interop::marshal_as<System::String^>(data[3]);
		else
			this->textMoodDairy->Text = "No data";

		if (data.size() >= 2 && data[1].length() >= 1)
			this->textMealsDairy->Text = msclr::interop::marshal_as<System::String^>(data[1]);
		else
			this->textMealsDairy->Text = "No data";
		
		if (data.size() >= 1 && data[0].length() >= 1)
			this->textActivityDairy->Text = msclr::interop::marshal_as<System::String^>(data[0]);
		else
			this->textActivityDairy->Text = "No data";
	}
};
}
