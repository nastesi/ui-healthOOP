#pragma once
#include "calendar.h"
#include "ChartCalories.h"

#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>

#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms::DataVisualization::Charting;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->panel1->Controls->Add(this->labelActivityDairy);
			this->panel1->Controls->Add(this->labelMealsDairy);
			this->panel1->Controls->Add(this->labelMoodDairy);
			this->panel1->Location = System::Drawing::Point(32, 417);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(428, 95);
			this->panel1->TabIndex = 5;
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
			// labelActivityDairy
			// 
			this->labelActivityDairy->AutoSize = true;
			this->labelActivityDairy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityDairy->Location = System::Drawing::Point(11, 63);
			this->labelActivityDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelActivityDairy->Name = L"labelActivityDairy";
			this->labelActivityDairy->Size = System::Drawing::Size(62, 20);
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
			this->labelMealsDairy->Location = System::Drawing::Point(11, 39);
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
			this->labelEntriesDairy->Location = System::Drawing::Point(28, 395);
			this->labelEntriesDairy->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelEntriesDairy->Name = L"labelEntriesDairy";
			this->labelEntriesDairy->Size = System::Drawing::Size(182, 20);
			this->labelEntriesDairy->TabIndex = 17;
			this->labelEntriesDairy->Text = L"Entries for selected date";
			this->labelEntriesDairy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(2, 1);
			this->monthCalendar1->Location = System::Drawing::Point(22, 64);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(7, 7, 7, 7);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 18;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &DairyControl::monthCalendar1_DateChanged);
			// 
			// buttonBackDiary
			// 
			this->buttonBackDiary->Location = System::Drawing::Point(410, 17);
			this->buttonBackDiary->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonBackDiary->Name = L"buttonBackDiary";
			this->buttonBackDiary->Size = System::Drawing::Size(50, 33);
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
			this->labelAnalytics->Location = System::Drawing::Point(484, 21);
			this->labelAnalytics->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAnalytics->Name = L"labelAnalytics";
			this->labelAnalytics->Size = System::Drawing::Size(72, 20);
			this->labelAnalytics->TabIndex = 40;
			this->labelAnalytics->Text = L"Analytics";
			this->labelAnalytics->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxPeriod
			// 
			this->comboBoxPeriod->FormattingEnabled = true;
			this->comboBoxPeriod->Location = System::Drawing::Point(487, 68);
			this->comboBoxPeriod->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxPeriod->Name = L"comboBoxPeriod";
			this->comboBoxPeriod->Size = System::Drawing::Size(84, 21);
			this->comboBoxPeriod->TabIndex = 41;
			this->comboBoxPeriod->SelectedIndexChanged += gcnew System::EventHandler(this, &DairyControl::comboBoxFood_SelectedIndexChanged);
			// 
			// labelperiod
			// 
			this->labelperiod->AutoSize = true;
			this->labelperiod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelperiod->Location = System::Drawing::Point(484, 50);
			this->labelperiod->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelperiod->Name = L"labelperiod";
			this->labelperiod->Size = System::Drawing::Size(96, 17);
			this->labelperiod->TabIndex = 42;
			this->labelperiod->Text = L"Select Period:";
			this->labelperiod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectChart
			// 
			this->labelSelectChart->AutoSize = true;
			this->labelSelectChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectChart->Location = System::Drawing::Point(579, 50);
			this->labelSelectChart->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSelectChart->Name = L"labelSelectChart";
			this->labelSelectChart->Size = System::Drawing::Size(89, 17);
			this->labelSelectChart->TabIndex = 43;
			this->labelSelectChart->Text = L"Select Chart:";
			this->labelSelectChart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxSelectgraph
			// 
			this->comboBoxSelectgraph->FormattingEnabled = true;
			this->comboBoxSelectgraph->Location = System::Drawing::Point(577, 68);
			this->comboBoxSelectgraph->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxSelectgraph->Name = L"comboBoxSelectgraph";
			this->comboBoxSelectgraph->Size = System::Drawing::Size(84, 21);
			this->comboBoxSelectgraph->TabIndex = 44;
			// 
			// buttonShowChart
			// 
			this->buttonShowChart->Location = System::Drawing::Point(671, 52);
			this->buttonShowChart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonShowChart->Name = L"buttonShowChart";
			this->buttonShowChart->Size = System::Drawing::Size(53, 36);
			this->buttonShowChart->TabIndex = 45;
			this->buttonShowChart->Text = L"Show Chart";
			this->buttonShowChart->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(410, 114);
			this->chart1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(303, 274);
			this->chart1->TabIndex = 46;
			this->chart1->Text = L"chart1";
			// 
			// DairyControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"DairyControl";
			this->Size = System::Drawing::Size(750, 555);
			this->Load += gcnew System::EventHandler(this, &DairyControl::DairyControl_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ShowMonthlyCaloriesChart(System::DateTime selectedDate)
	{
		CaloriesChartLogic logic("calendar.txt");

		std::vector<CaloriesChartPoint> data =
			logic.getMonthlyCalories(selectedDate.Month, selectedDate.Year);

		chart1->Series->Clear();
		chart1->ChartAreas->Clear();
		chart1->Legends->Clear();

		ChartArea^ area = gcnew ChartArea("CaloriesArea");
		chart1->ChartAreas->Add(area);

		Legend^ legend = gcnew Legend("CaloriesLegend");
		chart1->Legends->Add(legend);

		Series^ eatenSeries = gcnew Series("Eaten calories");
		eatenSeries->ChartType = SeriesChartType::Column;
		eatenSeries->XValueType = ChartValueType::Int32;

		Series^ burnedSeries = gcnew Series("Burned calories");
		burnedSeries->ChartType = SeriesChartType::Column;
		burnedSeries->XValueType = ChartValueType::Int32;

		chart1->Series->Add(eatenSeries);
		chart1->Series->Add(burnedSeries);

		for (const CaloriesChartPoint& point : data)
		{
			eatenSeries->Points->AddXY(point.day, point.eatenCalories);
			burnedSeries->Points->AddXY(point.day, point.burnedCalories);
		}

		chart1->ChartAreas["CaloriesArea"]->AxisX->Title = "Date";
		chart1->ChartAreas["CaloriesArea"]->AxisY->Title = "Calories";
		chart1->ChartAreas["CaloriesArea"]->AxisX->Interval = 1;
	}
	private: static std::string TrimDiaryText(const std::string& s)
	{
		std::size_t start = 0;
		std::size_t end = s.size();

		while (start < end && (unsigned char)s[start] <= ' ')
		{
			start++;
		}

		while (end > start && (unsigned char)s[end - 1] <= ' ')
		{
			end--;
		}

		return s.substr(start, end - start);
	}

private: static bool IsNumberText(const std::string& text)
{
	if (text.empty())
	{
		return false;
	}

	for (char c : text)
	{
		if (!std::isdigit((unsigned char)c))
		{
			return false;
		}
	}

	return true;
}

private: static double ParseDiaryNumber(std::string text)
{
	std::replace(text.begin(), text.end(), ',', '.');

	try
	{
		return std::stod(text);
	}
	catch (...)
	{
		return 0.0;
	}
}

private: static std::string FormatDiaryNumber(double value)
{
	std::ostringstream ss;

	if (std::fabs(value - std::round(value)) < 0.001)
	{
		ss << (int)std::round(value);
	}
	else
	{
		ss << std::fixed << std::setprecision(1) << value;
	}

	return ss.str();
}

private: static std::vector<std::string> SplitDiaryItems(const std::string& text)
{
	std::vector<std::string> result;
	std::stringstream ss(text);
	std::string item;

	while (std::getline(ss, item, ';'))
	{
		item = TrimDiaryText(item);

		if (!item.empty())
		{
			result.push_back(item);
		}
	}

	return result;
}

private: static std::string FormatMoodForDiary(const std::string& rawMood)
{
	std::istringstream ss(rawMood);

	std::string first;
	ss >> first;

	if (IsNumberText(first))
	{
		std::string rest;
		std::getline(ss, rest);
		return TrimDiaryText(rest);
	}

	return rawMood;
}

private: static std::string FormatMealsForDiary(const std::string& rawMeals)
{
	std::vector<std::string> items = SplitDiaryItems(rawMeals);
	std::string result;

	for (std::size_t i = 0; i < items.size(); i++)
	{
		std::istringstream ss(items[i]);

		std::string mealName;
		std::string gramsText;

		ss >> mealName;
		ss >> gramsText;

		if (mealName.empty() || gramsText.empty())
		{
			continue;
		}

		std::string numberText;

		for (char c : gramsText)
		{
			if (std::isdigit((unsigned char)c) || c == '.' || c == ',')
			{
				numberText += c;
			}
			else
			{
				break;
			}
		}

		double grams = ParseDiaryNumber(numberText);

		if (grams > 1000.0)
		{
			grams = grams / 10.0;
		}

		if (!result.empty())
		{
			result += "; ";
		}

		result += mealName + " " + FormatDiaryNumber(grams) + "g";
	}

	if (result.empty())
	{
		return rawMeals;
	}

	return result;
}

private: static std::string FormatActivityForDiary(const std::string& rawActivity)
{
	std::vector<std::string> items = SplitDiaryItems(rawActivity);
	std::string result;

	for (std::size_t i = 0; i < items.size(); i++)
	{
		std::istringstream ss(items[i]);

		std::string activityName;
		std::string minutesText;

		ss >> activityName;
		ss >> minutesText;

		if (activityName.empty() || minutesText.empty())
		{
			continue;
		}

		double minutes = ParseDiaryNumber(minutesText);

		if (!result.empty())
		{
			result += "; ";
		}

		result += activityName + " " + FormatDiaryNumber(minutes) + "m";
	}

	if (result.empty())
	{
		return rawActivity;
	}

	return result;
}
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
		{
			std::string moodText = FormatMoodForDiary(data[3]);
			this->textMoodDairy->Text = msclr::interop::marshal_as<System::String^>(moodText);
		}
		else
		{
			this->textMoodDairy->Text = "No data";
		}

		if (data.size() >= 2 && data[1].length() >= 1)
		{
			std::string mealsText = FormatMealsForDiary(data[1]);
			this->textMealsDairy->Text = msclr::interop::marshal_as<System::String^>(mealsText);
		}
		else
		{
			this->textMealsDairy->Text = "No data";
		}

		if (data.size() >= 1 && data[0].length() >= 1)
		{
			std::string activityText = FormatActivityForDiary(data[0]);
			this->textActivityDairy->Text = msclr::interop::marshal_as<System::String^>(activityText);
		}
		else
		{
			this->textActivityDairy->Text = "No data";
		}
		ShowMonthlyCaloriesChart(e->Start);
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
