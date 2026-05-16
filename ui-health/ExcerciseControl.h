#pragma once
#include "activity/activity.h"
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace uihealth {
	public ref class ExcerciseControl : public System::Windows::Forms::UserControl
	{
	public:
		ExcerciseControl(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Dock = System::Windows::Forms::DockStyle::Fill;
			activity_rows_save = "";
			textBoxSelectedActivitylist->Text = "";
			load_activities();
		}

	protected:
		~ExcerciseControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelActivityControl;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerActivity;
	private: System::Windows::Forms::Label^ labelDateActivity;
	private: System::Windows::Forms::ComboBox^ comboBoxCardioType;
	private: System::Windows::Forms::Label^ labelSearchCardio;
	private: System::Windows::Forms::Panel^ panelSelectedActivity;
	private: System::Windows::Forms::Button^ buttonRemoveActivity;
	private: System::Windows::Forms::TextBox^ textBoxSelectedActivitylist;
	private: System::Windows::Forms::Label^ labelSelectedActivity;
	private: System::Windows::Forms::Label^ labelDurationCradio;
	private: System::Windows::Forms::Panel^ panelCardio;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeedCardio;
	private: System::Windows::Forms::Label^ labelSpeedCardio;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownDistCardio;
	private: System::Windows::Forms::Label^ labelDistanceCardio;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownDurCardio;
	private: System::Windows::Forms::Button^ buttonAddCardio;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonAddStrength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWeightStr;
	private: System::Windows::Forms::Label^ labelWeightStrength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRepStrength;
	private: System::Windows::Forms::Label^ labelRepStrength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSeries;
	private: System::Windows::Forms::Label^ labelSeriesStrength;
	private: System::Windows::Forms::Label^ labelSelectStrength;
	private: System::Windows::Forms::Button^ buttonSaveActivity;
	private: System::String^ activity_rows_save;
	private: System::String^ activity_rows_calendar;
	private: System::Windows::Forms::Button^ buttonBackExercise;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			this->labelActivityControl = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerActivity = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelDateActivity = (gcnew System::Windows::Forms::Label());
			this->comboBoxCardioType = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchCardio = (gcnew System::Windows::Forms::Label());
			this->panelSelectedActivity = (gcnew System::Windows::Forms::Panel());
			this->buttonRemoveActivity = (gcnew System::Windows::Forms::Button());
			this->textBoxSelectedActivitylist = (gcnew System::Windows::Forms::TextBox());
			this->labelSelectedActivity = (gcnew System::Windows::Forms::Label());
			this->labelDurationCradio = (gcnew System::Windows::Forms::Label());
			this->panelCardio = (gcnew System::Windows::Forms::Panel());
			this->buttonAddCardio = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSpeedCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSpeedCardio = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDistCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelDistanceCardio = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDurCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonAddStrength = (gcnew System::Windows::Forms::Button());
			this->numericUpDownWeightStr = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelWeightStrength = (gcnew System::Windows::Forms::Label());
			this->numericUpDownRepStrength = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelRepStrength = (gcnew System::Windows::Forms::Label());
			this->numericUpDownSeries = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSeriesStrength = (gcnew System::Windows::Forms::Label());
			this->labelSelectStrength = (gcnew System::Windows::Forms::Label());
			this->buttonSaveActivity = (gcnew System::Windows::Forms::Button());
			this->buttonBackExercise = (gcnew System::Windows::Forms::Button());
			this->panelSelectedActivity->SuspendLayout();
			this->panelCardio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedCardio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDistCardio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurCardio))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeightStr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRepStrength))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSeries))->BeginInit();
			this->SuspendLayout();
			// 
			// labelActivityControl
			// 
			this->labelActivityControl->AutoSize = true;
			this->labelActivityControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelActivityControl->Location = System::Drawing::Point(66, 36);
			this->labelActivityControl->Name = L"labelActivityControl";
			this->labelActivityControl->Size = System::Drawing::Size(359, 38);
			this->labelActivityControl->TabIndex = 2;
			this->labelActivityControl->Text = L"Exercises and activities";
			this->labelActivityControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePickerActivity
			// 
			this->dateTimePickerActivity->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePickerActivity->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerActivity->Location = System::Drawing::Point(139, 99);
			this->dateTimePickerActivity->Name = L"dateTimePickerActivity";
			this->dateTimePickerActivity->Size = System::Drawing::Size(102, 22);
			this->dateTimePickerActivity->TabIndex = 12;
			// 
			// labelDateActivity
			// 
			this->labelDateActivity->AutoSize = true;
			this->labelDateActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateActivity->Location = System::Drawing::Point(74, 96);
			this->labelDateActivity->Name = L"labelDateActivity";
			this->labelDateActivity->Size = System::Drawing::Size(59, 25);
			this->labelDateActivity->TabIndex = 11;
			this->labelDateActivity->Text = L"Date:";
			this->labelDateActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxCardioType
			// 
			this->comboBoxCardioType->FormattingEnabled = true;
			this->comboBoxCardioType->Location = System::Drawing::Point(329, 142);
			this->comboBoxCardioType->Name = L"comboBoxCardioType";
			this->comboBoxCardioType->Size = System::Drawing::Size(141, 24);
			this->comboBoxCardioType->TabIndex = 17;
			// 
			// labelSearchCardio
			// 
			this->labelSearchCardio->AutoSize = true;
			this->labelSearchCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchCardio->Location = System::Drawing::Point(69, 142);
			this->labelSearchCardio->Name = L"labelSearchCardio";
			this->labelSearchCardio->Size = System::Drawing::Size(242, 25);
			this->labelSearchCardio->TabIndex = 16;
			this->labelSearchCardio->Text = L"Select Cardio activity type:";
			this->labelSearchCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelSelectedActivity
			// 
			this->panelSelectedActivity->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panelSelectedActivity->Controls->Add(this->buttonRemoveActivity);
			this->panelSelectedActivity->Controls->Add(this->textBoxSelectedActivitylist);
			this->panelSelectedActivity->Controls->Add(this->labelSelectedActivity);
			this->panelSelectedActivity->Location = System::Drawing::Point(515, 64);
			this->panelSelectedActivity->Name = L"panelSelectedActivity";
			this->panelSelectedActivity->Size = System::Drawing::Size(346, 504);
			this->panelSelectedActivity->TabIndex = 24;
			// 
			// buttonRemoveActivity
			// 
			this->buttonRemoveActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveActivity->Location = System::Drawing::Point(265, 468);
			this->buttonRemoveActivity->Name = L"buttonRemoveActivity";
			this->buttonRemoveActivity->Size = System::Drawing::Size(75, 25);
			this->buttonRemoveActivity->TabIndex = 30;
			this->buttonRemoveActivity->Text = L"Remove";
			this->buttonRemoveActivity->UseVisualStyleBackColor = true;
			this->buttonRemoveActivity->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonRemoveActivity_Click);
			// 
			// textBoxSelectedActivitylist
			// 
			this->textBoxSelectedActivitylist->BackColor = System::Drawing::Color::White;
			this->textBoxSelectedActivitylist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSelectedActivitylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxSelectedActivitylist->Location = System::Drawing::Point(20, 41);
			this->textBoxSelectedActivitylist->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSelectedActivitylist->Multiline = true;
			this->textBoxSelectedActivitylist->Name = L"textBoxSelectedActivitylist";
			this->textBoxSelectedActivitylist->ReadOnly = true;
			this->textBoxSelectedActivitylist->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSelectedActivitylist->Size = System::Drawing::Size(320, 417);
			this->textBoxSelectedActivitylist->TabIndex = 15;
			// 
			// labelSelectedActivity
			// 
			this->labelSelectedActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivity->Location = System::Drawing::Point(127, 13);
			this->labelSelectedActivity->Name = L"labelSelectedActivity";
			this->labelSelectedActivity->Size = System::Drawing::Size(97, 26);
			this->labelSelectedActivity->TabIndex = 14;
			this->labelSelectedActivity->Text = L"Selected";
			// 
			// labelDurationCradio
			// 
			this->labelDurationCradio->AutoSize = true;
			this->labelDurationCradio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDurationCradio->Location = System::Drawing::Point(14, 10);
			this->labelDurationCradio->Name = L"labelDurationCradio";
			this->labelDurationCradio->Size = System::Drawing::Size(123, 20);
			this->labelDurationCradio->TabIndex = 25;
			this->labelDurationCradio->Text = L"Duration, mins:";
			this->labelDurationCradio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelCardio
			// 
			this->panelCardio->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelCardio->Controls->Add(this->buttonAddCardio);
			this->panelCardio->Controls->Add(this->numericUpDownSpeedCardio);
			this->panelCardio->Controls->Add(this->labelSpeedCardio);
			this->panelCardio->Controls->Add(this->numericUpDownDistCardio);
			this->panelCardio->Controls->Add(this->labelDistanceCardio);
			this->panelCardio->Controls->Add(this->numericUpDownDurCardio);
			this->panelCardio->Controls->Add(this->labelDurationCradio);
			this->panelCardio->Location = System::Drawing::Point(78, 178);
			this->panelCardio->Name = L"panelCardio";
			this->panelCardio->Size = System::Drawing::Size(375, 118);
			this->panelCardio->TabIndex = 26;
			// 
			// buttonAddCardio
			// 
			this->buttonAddCardio->Location = System::Drawing::Point(271, 38);
			this->buttonAddCardio->Name = L"buttonAddCardio";
			this->buttonAddCardio->Size = System::Drawing::Size(70, 24);
			this->buttonAddCardio->TabIndex = 33;
			this->buttonAddCardio->Text = L"Add";
			this->buttonAddCardio->UseVisualStyleBackColor = true;
			this->buttonAddCardio->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonAddCardio_Click);
			// 
			// numericUpDownSpeedCardio
			// 
			this->numericUpDownSpeedCardio->Location = System::Drawing::Point(151, 66);
			this->numericUpDownSpeedCardio->Name = L"numericUpDownSpeedCardio";
			this->numericUpDownSpeedCardio->Size = System::Drawing::Size(63, 22);
			this->numericUpDownSpeedCardio->TabIndex = 30;
			// 
			// labelSpeedCardio
			// 
			this->labelSpeedCardio->AutoSize = true;
			this->labelSpeedCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpeedCardio->Location = System::Drawing::Point(14, 66);
			this->labelSpeedCardio->Name = L"labelSpeedCardio";
			this->labelSpeedCardio->Size = System::Drawing::Size(106, 20);
			this->labelSpeedCardio->TabIndex = 29;
			this->labelSpeedCardio->Text = L"Speed, km/h:";
			this->labelSpeedCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownDistCardio
			// 
			this->numericUpDownDistCardio->Location = System::Drawing::Point(151, 38);
			this->numericUpDownDistCardio->Name = L"numericUpDownDistCardio";
			this->numericUpDownDistCardio->Size = System::Drawing::Size(63, 22);
			this->numericUpDownDistCardio->TabIndex = 28;
			// 
			// labelDistanceCardio
			// 
			this->labelDistanceCardio->AutoSize = true;
			this->labelDistanceCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDistanceCardio->Location = System::Drawing::Point(14, 38);
			this->labelDistanceCardio->Name = L"labelDistanceCardio";
			this->labelDistanceCardio->Size = System::Drawing::Size(112, 20);
			this->labelDistanceCardio->TabIndex = 27;
			this->labelDistanceCardio->Text = L"Distance, km:";
			this->labelDistanceCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownDurCardio
			// 
			this->numericUpDownDurCardio->Location = System::Drawing::Point(151, 10);
			this->numericUpDownDurCardio->Name = L"numericUpDownDurCardio";
			this->numericUpDownDurCardio->Size = System::Drawing::Size(63, 22);
			this->numericUpDownDurCardio->TabIndex = 26;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->buttonAddStrength);
			this->panel1->Controls->Add(this->numericUpDownWeightStr);
			this->panel1->Controls->Add(this->labelWeightStrength);
			this->panel1->Controls->Add(this->numericUpDownRepStrength);
			this->panel1->Controls->Add(this->labelRepStrength);
			this->panel1->Controls->Add(this->numericUpDownSeries);
			this->panel1->Controls->Add(this->labelSeriesStrength);
			this->panel1->Location = System::Drawing::Point(78, 354);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(392, 118);
			this->panel1->TabIndex = 29;
			// 
			// buttonAddStrength
			// 
			this->buttonAddStrength->Location = System::Drawing::Point(305, 50);
			this->buttonAddStrength->Name = L"buttonAddStrength";
			this->buttonAddStrength->Size = System::Drawing::Size(70, 24);
			this->buttonAddStrength->TabIndex = 33;
			this->buttonAddStrength->Text = L"Add";
			this->buttonAddStrength->UseVisualStyleBackColor = true;
			this->buttonAddStrength->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonAddStrength_Click);
			// 
			// numericUpDownWeightStr
			// 
			this->numericUpDownWeightStr->Location = System::Drawing::Point(88, 66);
			this->numericUpDownWeightStr->Name = L"numericUpDownWeightStr";
			this->numericUpDownWeightStr->Size = System::Drawing::Size(53, 22);
			this->numericUpDownWeightStr->TabIndex = 30;
			// 
			// labelWeightStrength
			// 
			this->labelWeightStrength->AutoSize = true;
			this->labelWeightStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWeightStrength->Location = System::Drawing::Point(14, 66);
			this->labelWeightStrength->Name = L"labelWeightStrength";
			this->labelWeightStrength->Size = System::Drawing::Size(66, 20);
			this->labelWeightStrength->TabIndex = 29;
			this->labelWeightStrength->Text = L"Weight:";
			this->labelWeightStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownRepStrength
			// 
			this->numericUpDownRepStrength->Location = System::Drawing::Point(202, 38);
			this->numericUpDownRepStrength->Name = L"numericUpDownRepStrength";
			this->numericUpDownRepStrength->Size = System::Drawing::Size(51, 22);
			this->numericUpDownRepStrength->TabIndex = 28;
			// 
			// labelRepStrength
			// 
			this->labelRepStrength->AutoSize = true;
			this->labelRepStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRepStrength->Location = System::Drawing::Point(14, 38);
			this->labelRepStrength->Name = L"labelRepStrength";
			this->labelRepStrength->Size = System::Drawing::Size(175, 20);
			this->labelRepStrength->TabIndex = 27;
			this->labelRepStrength->Text = L"Number of repetitions:";
			this->labelRepStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownSeries
			// 
			this->numericUpDownSeries->Location = System::Drawing::Point(168, 10);
			this->numericUpDownSeries->Name = L"numericUpDownSeries";
			this->numericUpDownSeries->Size = System::Drawing::Size(46, 22);
			this->numericUpDownSeries->TabIndex = 26;
			// 
			// labelSeriesStrength
			// 
			this->labelSeriesStrength->AutoSize = true;
			this->labelSeriesStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSeriesStrength->Location = System::Drawing::Point(14, 10);
			this->labelSeriesStrength->Name = L"labelSeriesStrength";
			this->labelSeriesStrength->Size = System::Drawing::Size(143, 20);
			this->labelSeriesStrength->TabIndex = 25;
			this->labelSeriesStrength->Text = L"Number of series:";
			this->labelSeriesStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectStrength
			// 
			this->labelSelectStrength->AutoSize = true;
			this->labelSelectStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectStrength->Location = System::Drawing::Point(69, 318);
			this->labelSelectStrength->Name = L"labelSelectStrength";
			this->labelSelectStrength->Size = System::Drawing::Size(156, 25);
			this->labelSelectStrength->TabIndex = 27;
			this->labelSelectStrength->Text = L"Strength activity:";
			this->labelSelectStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonSaveActivity
			// 
			this->buttonSaveActivity->Location = System::Drawing::Point(686, 590);
			this->buttonSaveActivity->Name = L"buttonSaveActivity";
			this->buttonSaveActivity->Size = System::Drawing::Size(175, 41);
			this->buttonSaveActivity->TabIndex = 30;
			this->buttonSaveActivity->Text = L"Save";
			this->buttonSaveActivity->UseVisualStyleBackColor = true;
			this->buttonSaveActivity->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonSaveActivity_Click);
			// 
			// buttonBackExercise
			// 
			this->buttonBackExercise->Location = System::Drawing::Point(78, 532);
			this->buttonBackExercise->Name = L"buttonBackExercise";
			this->buttonBackExercise->Size = System::Drawing::Size(67, 41);
			this->buttonBackExercise->TabIndex = 38;
			this->buttonBackExercise->Text = L"Home";
			this->buttonBackExercise->UseVisualStyleBackColor = true;
			this->buttonBackExercise->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonBackExercise_Click);
			// 
			// ExcerciseControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonBackExercise);
			this->Controls->Add(this->buttonSaveActivity);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelSelectStrength);
			this->Controls->Add(this->panelCardio);
			this->Controls->Add(this->panelSelectedActivity);
			this->Controls->Add(this->comboBoxCardioType);
			this->Controls->Add(this->labelSearchCardio);
			this->Controls->Add(this->dateTimePickerActivity);
			this->Controls->Add(this->labelDateActivity);
			this->Controls->Add(this->labelActivityControl);
			this->Name = L"ExcerciseControl";
			this->Size = System::Drawing::Size(1000, 683);
			this->Load += gcnew System::EventHandler(this, &ExcerciseControl::ExcerciseControl_Load);
			this->panelSelectedActivity->ResumeLayout(false);
			this->panelSelectedActivity->PerformLayout();
			this->panelCardio->ResumeLayout(false);
			this->panelCardio->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedCardio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDistCardio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurCardio))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeightStr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRepStrength))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSeries))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void ExcerciseControl_Load(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void buttonAddStrength_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddCardio_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSaveActivity_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRemoveActivity_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void load_activities();
	private: System::String^ remove_line(String^ text);
	private: System::Void add_to_calendar(System::String^ sectionName, System::String^ newLine);
	
public:
	System::EventHandler^ BackRequested;

private: System::Void buttonBackExercise_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (BackRequested != nullptr)
	{
		BackRequested(this, System::EventArgs::Empty);
	}
}
};
}
