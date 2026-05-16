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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Dock = System::Windows::Forms::DockStyle::Fill;
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

	private: System::Windows::Forms::Label^ labelActivityDairy;
	private: System::Windows::Forms::Label^ textMoodDairy;
	private: System::Windows::Forms::Label^ textMealsDairy;
	private: System::Windows::Forms::Label^ textActivityDairy;
	private: System::Windows::Forms::Button^ buttonBackDiary;
	private: System::Windows::Forms::Label^ labelAnalytics;
	private: System::Windows::Forms::ComboBox^ comboBoxPeriod;

	private: System::Windows::Forms::Label^ labelperiod;
	private: System::Windows::Forms::Label^ labelSelectChart;
	private: System::Windows::Forms::ComboBox^ comboBoxSelectgraph;
	private: System::Windows::Forms::Button^ buttonShowChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->labelDiaryControl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textActivityDairy = (gcnew System::Windows::Forms::Label());
			this->textMealsDairy = (gcnew System::Windows::Forms::Label());
			this->textMoodDairy = (gcnew System::Windows::Forms::Label());
			this->labelActivityDairy = (gcnew System::Windows::Forms::Label());
			this->labelMealsDairy = (gcnew System::Windows::Forms::Label());
			this->labelMoodDairy = (gcnew System::Windows::Forms::Label());
			this->labelEntriesDairy = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->buttonBackDiary = (gcnew System::Windows::Forms::Button());
			this->labelAnalytics = (gcnew System::Windows::Forms::Label());
			this->comboBoxPeriod = (gcnew System::Windows::Forms::ComboBox());
			this->labelperiod = (gcnew System::Windows::Forms::Label());
			this->labelSelectChart = (gcnew System::Windows::Forms::Label());
			this->comboBoxSelectgraph = (gcnew System::Windows::Forms::ComboBox());
			this->buttonShowChart = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelDiaryControl
			// 
			this->labelDiaryControl->AutoSize = true;
			this->labelDiaryControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDiaryControl->Location = System::Drawing::Point(21, 21);
			this->labelDiaryControl->Name = L"labelDiaryControl";
			this->labelDiaryControl->Size = System::Drawing::Size(117, 38);
			this->labelDiaryControl->TabIndex = 3;
			this->labelDiaryControl->Text = L"DAIRY";
			this->labelDiaryControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textActivityDairy);
			this->panel1->Controls->Add(this->textMealsDairy);
			this->panel1->Controls->Add(this->textMoodDairy);
			this->panel1->Controls->Add(this->labelActivityDairy);
			this->panel1->Controls->Add(this->labelMealsDairy);
			this->panel1->Controls->Add(this->labelMoodDairy);
			this->panel1->Location = System::Drawing::Point(43, 513);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 117);
			this->panel1->TabIndex = 5;
			// 
			// textActivityDairy
			// 
			this->textActivityDairy->AutoSize = true;
			this->textActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textActivityDairy->Location = System::Drawing::Point(139, 89);
			this->textActivityDairy->Name = L"textActivityDairy";
			this->textActivityDairy->Size = System::Drawing::Size(0, 25);
			this->textActivityDairy->TabIndex = 21;
			this->textActivityDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textMealsDairy
			// 
			this->textMealsDairy->AutoSize = true;
			this->textMealsDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMealsDairy->Location = System::Drawing::Point(139, 53);
			this->textMealsDairy->Name = L"textMealsDairy";
			this->textMealsDairy->Size = System::Drawing::Size(0, 25);
			this->textMealsDairy->TabIndex = 19;
			this->textMealsDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textMoodDairy
			// 
			this->textMoodDairy->AutoSize = true;
			this->textMoodDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMoodDairy->Location = System::Drawing::Point(139, 16);
			this->textMoodDairy->Name = L"textMoodDairy";
			this->textMoodDairy->Size = System::Drawing::Size(0, 25);
			this->textMoodDairy->TabIndex = 22;
			this->textMoodDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelActivityDairy
			// 
			this->labelActivityDairy->AutoSize = true;
			this->labelActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityDairy->Location = System::Drawing::Point(15, 78);
			this->labelActivityDairy->Name = L"labelActivityDairy";
			this->labelActivityDairy->Size = System::Drawing::Size(80, 25);
			this->labelActivityDairy->TabIndex = 20;
			this->labelActivityDairy->Text = L"Activity:";
			this->labelActivityDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelActivityDairy->Click += gcnew System::EventHandler(this, &DairyControl::labelActivityDairy_Click);
			// 
			// labelMealsDairy
			// 
			this->labelMealsDairy->AutoSize = true;
			this->labelMealsDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMealsDairy->Location = System::Drawing::Point(15, 48);
			this->labelMealsDairy->Name = L"labelMealsDairy";
			this->labelMealsDairy->Size = System::Drawing::Size(65, 25);
			this->labelMealsDairy->TabIndex = 19;
			this->labelMealsDairy->Text = L"Meals";
			this->labelMealsDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// labelEntriesDairy
			// 
			this->labelEntriesDairy->AutoSize = true;
			this->labelEntriesDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEntriesDairy->Location = System::Drawing::Point(38, 486);
			this->labelEntriesDairy->Name = L"labelEntriesDairy";
			this->labelEntriesDairy->Size = System::Drawing::Size(220, 25);
			this->labelEntriesDairy->TabIndex = 17;
			this->labelEntriesDairy->Text = L"Entries for selected date";
			this->labelEntriesDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(3, 2);
			this->monthCalendar1->Location = System::Drawing::Point(29, 79);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 18;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &DairyControl::monthCalendar1_DateChanged);
			// 
			// buttonBackDiary
			// 
			this->buttonBackDiary->Location = System::Drawing::Point(546, 21);
			this->buttonBackDiary->Name = L"buttonBackDiary";
			this->buttonBackDiary->Size = System::Drawing::Size(67, 41);
			this->buttonBackDiary->TabIndex = 39;
			this->buttonBackDiary->Text = L"Home";
			this->buttonBackDiary->UseVisualStyleBackColor = true;
			this->buttonBackDiary->Click += gcnew System::EventHandler(this, &DairyControl::buttonBackDiary_Click);
			// 
			// labelAnalytics
			// 
			this->labelAnalytics->AutoSize = true;
			this->labelAnalytics->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAnalytics->Location = System::Drawing::Point(645, 26);
			this->labelAnalytics->Name = L"labelAnalytics";
			this->labelAnalytics->Size = System::Drawing::Size(91, 25);
			this->labelAnalytics->TabIndex = 40;
			this->labelAnalytics->Text = L"Analytics";
			this->labelAnalytics->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxPeriod
			// 
			this->comboBoxPeriod->FormattingEnabled = true;
			this->comboBoxPeriod->Location = System::Drawing::Point(649, 84);
			this->comboBoxPeriod->Name = L"comboBoxPeriod";
			this->comboBoxPeriod->Size = System::Drawing::Size(110, 24);
			this->comboBoxPeriod->TabIndex = 41;
			this->comboBoxPeriod->SelectedIndexChanged += gcnew System::EventHandler(this, &DairyControl::comboBoxFood_SelectedIndexChanged);
			// 
			// labelperiod
			// 
			this->labelperiod->AutoSize = true;
			this->labelperiod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelperiod->Location = System::Drawing::Point(645, 61);
			this->labelperiod->Name = L"labelperiod";
			this->labelperiod->Size = System::Drawing::Size(114, 20);
			this->labelperiod->TabIndex = 42;
			this->labelperiod->Text = L"Select Period:";
			this->labelperiod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectChart
			// 
			this->labelSelectChart->AutoSize = true;
			this->labelSelectChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectChart->Location = System::Drawing::Point(772, 61);
			this->labelSelectChart->Name = L"labelSelectChart";
			this->labelSelectChart->Size = System::Drawing::Size(107, 20);
			this->labelSelectChart->TabIndex = 43;
			this->labelSelectChart->Text = L"Select Chart:";
			this->labelSelectChart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxSelectgraph
			// 
			this->comboBoxSelectgraph->FormattingEnabled = true;
			this->comboBoxSelectgraph->Location = System::Drawing::Point(769, 84);
			this->comboBoxSelectgraph->Name = L"comboBoxSelectgraph";
			this->comboBoxSelectgraph->Size = System::Drawing::Size(110, 24);
			this->comboBoxSelectgraph->TabIndex = 44;
			// 
			// buttonShowChart
			// 
			this->buttonShowChart->Location = System::Drawing::Point(895, 64);
			this->buttonShowChart->Name = L"buttonShowChart";
			this->buttonShowChart->Size = System::Drawing::Size(71, 44);
			this->buttonShowChart->TabIndex = 45;
			this->buttonShowChart->Text = L"Show Chart";
			this->buttonShowChart->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(650, 140);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 46;
			this->chart1->Text = L"chart1";
			// 
			// DairyControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->buttonShowChart);
			this->Controls->Add(this->comboBoxSelectgraph);
			this->Controls->Add(this->labelSelectChart);
			this->Controls->Add(this->labelperiod);
			this->Controls->Add(this->comboBoxPeriod);
			this->Controls->Add(this->labelAnalytics);
			this->Controls->Add(this->buttonBackDiary);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->labelEntriesDairy);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelDiaryControl);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DairyControl";
			this->Size = System::Drawing::Size(1000, 683);
			this->Load += gcnew System::EventHandler(this, &DairyControl::DairyControl_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DairyControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:
		System::EventHandler^ BackRequested;

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
private: System::Void labelActivityDairy_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void buttonBackDiary_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (BackRequested != nullptr)
	{
		BackRequested(this, System::EventArgs::Empty);
	}
}
private: System::Void comboBoxFood_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
