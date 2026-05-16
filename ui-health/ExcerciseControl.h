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
			activity_rows_save = "";
			labelSelectedActivitylist->Text = "";
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
	private: System::Windows::Forms::Label^ labelSelectedActivitylist;
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
	private: System::Windows::Forms::ComboBox^ comboBoxStrengthtype;
	private: System::Windows::Forms::Label^ labelSelectStrength;
	private: System::Windows::Forms::Button^ buttonSaveActivity;
	private: System::String^ activity_rows_save;
	private: System::String^ activity_rows_calendar;
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
			this->labelSelectedActivitylist = (gcnew System::Windows::Forms::Label());
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
			this->comboBoxStrengthtype = (gcnew System::Windows::Forms::ComboBox());
			this->labelSelectStrength = (gcnew System::Windows::Forms::Label());
			this->buttonSaveActivity = (gcnew System::Windows::Forms::Button());
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
			this->labelActivityControl->Location = System::Drawing::Point(91, 54);
			this->labelActivityControl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelActivityControl->Name = L"labelActivityControl";
			this->labelActivityControl->Size = System::Drawing::Size(627, 54);
			this->labelActivityControl->TabIndex = 2;
			this->labelActivityControl->Text = L"EXCERCISE AND ACTIVITY";
			this->labelActivityControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePickerActivity
			// 
			this->dateTimePickerActivity->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePickerActivity->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerActivity->Location = System::Drawing::Point(191, 148);
			this->dateTimePickerActivity->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerActivity->Name = L"dateTimePickerActivity";
			this->dateTimePickerActivity->Size = System::Drawing::Size(139, 29);
			this->dateTimePickerActivity->TabIndex = 12;
			// 
			// labelDateActivity
			// 
			this->labelDateActivity->AutoSize = true;
			this->labelDateActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateActivity->Location = System::Drawing::Point(102, 144);
			this->labelDateActivity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateActivity->Name = L"labelDateActivity";
			this->labelDateActivity->Size = System::Drawing::Size(82, 32);
			this->labelDateActivity->TabIndex = 11;
			this->labelDateActivity->Text = L"Date:";
			this->labelDateActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxCardioType
			// 
			this->comboBoxCardioType->FormattingEnabled = true;
			this->comboBoxCardioType->Location = System::Drawing::Point(452, 213);
			this->comboBoxCardioType->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxCardioType->Name = L"comboBoxCardioType";
			this->comboBoxCardioType->Size = System::Drawing::Size(518, 32);
			this->comboBoxCardioType->TabIndex = 17;
			// 
			// labelSearchCardio
			// 
			this->labelSearchCardio->AutoSize = true;
			this->labelSearchCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchCardio->Location = System::Drawing::Point(95, 213);
			this->labelSearchCardio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearchCardio->Name = L"labelSearchCardio";
			this->labelSearchCardio->Size = System::Drawing::Size(349, 32);
			this->labelSearchCardio->TabIndex = 16;
			this->labelSearchCardio->Text = L"Select Cardio activity type:";
			this->labelSearchCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelSelectedActivity
			// 
			this->panelSelectedActivity->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panelSelectedActivity->Controls->Add(this->buttonRemoveActivity);
			this->panelSelectedActivity->Controls->Add(this->labelSelectedActivitylist);
			this->panelSelectedActivity->Controls->Add(this->labelSelectedActivity);
			this->panelSelectedActivity->Location = System::Drawing::Point(1174, 148);
			this->panelSelectedActivity->Margin = System::Windows::Forms::Padding(4);
			this->panelSelectedActivity->Name = L"panelSelectedActivity";
			this->panelSelectedActivity->Size = System::Drawing::Size(476, 756);
			this->panelSelectedActivity->TabIndex = 24;
			// 
			// buttonRemoveActivity
			// 
			this->buttonRemoveActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveActivity->Location = System::Drawing::Point(353, 693);
			this->buttonRemoveActivity->Margin = System::Windows::Forms::Padding(4);
			this->buttonRemoveActivity->Name = L"buttonRemoveActivity";
			this->buttonRemoveActivity->Size = System::Drawing::Size(103, 34);
			this->buttonRemoveActivity->TabIndex = 30;
			this->buttonRemoveActivity->Text = L"Remove";
			this->buttonRemoveActivity->UseVisualStyleBackColor = true;
			this->buttonRemoveActivity->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonRemoveActivity_Click);
			// 
			// labelSelectedActivitylist
			// 
			this->labelSelectedActivitylist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivitylist->AutoSize = true;
			this->labelSelectedActivitylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivitylist->Location = System::Drawing::Point(36, 86);
			this->labelSelectedActivitylist->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectedActivitylist->Name = L"labelSelectedActivitylist";
			this->labelSelectedActivitylist->Size = System::Drawing::Size(0, 32);
			this->labelSelectedActivitylist->TabIndex = 15;
			this->labelSelectedActivitylist->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectedActivity
			// 
			this->labelSelectedActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivity->AutoSize = true;
			this->labelSelectedActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivity->Location = System::Drawing::Point(160, 18);
			this->labelSelectedActivity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectedActivity->Name = L"labelSelectedActivity";
			this->labelSelectedActivity->Size = System::Drawing::Size(126, 32);
			this->labelSelectedActivity->TabIndex = 14;
			this->labelSelectedActivity->Text = L"Selected";
			this->labelSelectedActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDurationCradio
			// 
			this->labelDurationCradio->AutoSize = true;
			this->labelDurationCradio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDurationCradio->Location = System::Drawing::Point(19, 15);
			this->labelDurationCradio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDurationCradio->Name = L"labelDurationCradio";
			this->labelDurationCradio->Size = System::Drawing::Size(172, 29);
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
			this->panelCardio->Location = System::Drawing::Point(107, 267);
			this->panelCardio->Margin = System::Windows::Forms::Padding(4);
			this->panelCardio->Name = L"panelCardio";
			this->panelCardio->Size = System::Drawing::Size(848, 177);
			this->panelCardio->TabIndex = 26;
			// 
			// buttonAddCardio
			// 
			this->buttonAddCardio->Location = System::Drawing::Point(726, 123);
			this->buttonAddCardio->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddCardio->Name = L"buttonAddCardio";
			this->buttonAddCardio->Size = System::Drawing::Size(96, 36);
			this->buttonAddCardio->TabIndex = 33;
			this->buttonAddCardio->Text = L"Add";
			this->buttonAddCardio->UseVisualStyleBackColor = true;
			this->buttonAddCardio->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonAddCardio_Click);
			// 
			// numericUpDownSpeedCardio
			// 
			this->numericUpDownSpeedCardio->Location = System::Drawing::Point(197, 99);
			this->numericUpDownSpeedCardio->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownSpeedCardio->Name = L"numericUpDownSpeedCardio";
			this->numericUpDownSpeedCardio->Size = System::Drawing::Size(86, 29);
			this->numericUpDownSpeedCardio->TabIndex = 30;
			// 
			// labelSpeedCardio
			// 
			this->labelSpeedCardio->AutoSize = true;
			this->labelSpeedCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSpeedCardio->Location = System::Drawing::Point(19, 99);
			this->labelSpeedCardio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSpeedCardio->Name = L"labelSpeedCardio";
			this->labelSpeedCardio->Size = System::Drawing::Size(155, 29);
			this->labelSpeedCardio->TabIndex = 29;
			this->labelSpeedCardio->Text = L"Speed, km/h:";
			this->labelSpeedCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownDistCardio
			// 
			this->numericUpDownDistCardio->Location = System::Drawing::Point(197, 57);
			this->numericUpDownDistCardio->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownDistCardio->Name = L"numericUpDownDistCardio";
			this->numericUpDownDistCardio->Size = System::Drawing::Size(86, 29);
			this->numericUpDownDistCardio->TabIndex = 28;
			// 
			// labelDistanceCardio
			// 
			this->labelDistanceCardio->AutoSize = true;
			this->labelDistanceCardio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDistanceCardio->Location = System::Drawing::Point(19, 57);
			this->labelDistanceCardio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDistanceCardio->Name = L"labelDistanceCardio";
			this->labelDistanceCardio->Size = System::Drawing::Size(156, 29);
			this->labelDistanceCardio->TabIndex = 27;
			this->labelDistanceCardio->Text = L"Distance, km:";
			this->labelDistanceCardio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownDurCardio
			// 
			this->numericUpDownDurCardio->Location = System::Drawing::Point(197, 15);
			this->numericUpDownDurCardio->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownDurCardio->Name = L"numericUpDownDurCardio";
			this->numericUpDownDurCardio->Size = System::Drawing::Size(86, 29);
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
			this->panel1->Location = System::Drawing::Point(107, 531);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(848, 177);
			this->panel1->TabIndex = 29;
			// 
			// buttonAddStrength
			// 
			this->buttonAddStrength->Location = System::Drawing::Point(727, 123);
			this->buttonAddStrength->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddStrength->Name = L"buttonAddStrength";
			this->buttonAddStrength->Size = System::Drawing::Size(96, 36);
			this->buttonAddStrength->TabIndex = 33;
			this->buttonAddStrength->Text = L"Add";
			this->buttonAddStrength->UseVisualStyleBackColor = true;
			this->buttonAddStrength->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonAddStrength_Click);
			// 
			// numericUpDownWeightStr
			// 
			this->numericUpDownWeightStr->Location = System::Drawing::Point(118, 99);
			this->numericUpDownWeightStr->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownWeightStr->Name = L"numericUpDownWeightStr";
			this->numericUpDownWeightStr->Size = System::Drawing::Size(73, 29);
			this->numericUpDownWeightStr->TabIndex = 30;
			// 
			// labelWeightStrength
			// 
			this->labelWeightStrength->AutoSize = true;
			this->labelWeightStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWeightStrength->Location = System::Drawing::Point(19, 99);
			this->labelWeightStrength->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelWeightStrength->Name = L"labelWeightStrength";
			this->labelWeightStrength->Size = System::Drawing::Size(94, 29);
			this->labelWeightStrength->TabIndex = 29;
			this->labelWeightStrength->Text = L"Weight:";
			this->labelWeightStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownRepStrength
			// 
			this->numericUpDownRepStrength->Location = System::Drawing::Point(267, 57);
			this->numericUpDownRepStrength->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownRepStrength->Name = L"numericUpDownRepStrength";
			this->numericUpDownRepStrength->Size = System::Drawing::Size(70, 29);
			this->numericUpDownRepStrength->TabIndex = 28;
			// 
			// labelRepStrength
			// 
			this->labelRepStrength->AutoSize = true;
			this->labelRepStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRepStrength->Location = System::Drawing::Point(19, 57);
			this->labelRepStrength->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelRepStrength->Name = L"labelRepStrength";
			this->labelRepStrength->Size = System::Drawing::Size(251, 29);
			this->labelRepStrength->TabIndex = 27;
			this->labelRepStrength->Text = L"Number of repetitions:";
			this->labelRepStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownSeries
			// 
			this->numericUpDownSeries->Location = System::Drawing::Point(220, 15);
			this->numericUpDownSeries->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownSeries->Name = L"numericUpDownSeries";
			this->numericUpDownSeries->Size = System::Drawing::Size(63, 29);
			this->numericUpDownSeries->TabIndex = 26;
			// 
			// labelSeriesStrength
			// 
			this->labelSeriesStrength->AutoSize = true;
			this->labelSeriesStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSeriesStrength->Location = System::Drawing::Point(19, 15);
			this->labelSeriesStrength->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSeriesStrength->Name = L"labelSeriesStrength";
			this->labelSeriesStrength->Size = System::Drawing::Size(204, 29);
			this->labelSeriesStrength->TabIndex = 25;
			this->labelSeriesStrength->Text = L"Number of series:";
			this->labelSeriesStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxStrengthtype
			// 
			this->comboBoxStrengthtype->FormattingEnabled = true;
			this->comboBoxStrengthtype->Location = System::Drawing::Point(474, 477);
			this->comboBoxStrengthtype->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxStrengthtype->Name = L"comboBoxStrengthtype";
			this->comboBoxStrengthtype->Size = System::Drawing::Size(496, 32);
			this->comboBoxStrengthtype->TabIndex = 28;
			// 
			// labelSelectStrength
			// 
			this->labelSelectStrength->AutoSize = true;
			this->labelSelectStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectStrength->Location = System::Drawing::Point(95, 477);
			this->labelSelectStrength->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectStrength->Name = L"labelSelectStrength";
			this->labelSelectStrength->Size = System::Drawing::Size(373, 32);
			this->labelSelectStrength->TabIndex = 27;
			this->labelSelectStrength->Text = L"Select Strength activity type:";
			this->labelSelectStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonSaveActivity
			// 
			this->buttonSaveActivity->Location = System::Drawing::Point(1409, 1042);
			this->buttonSaveActivity->Margin = System::Windows::Forms::Padding(4);
			this->buttonSaveActivity->Name = L"buttonSaveActivity";
			this->buttonSaveActivity->Size = System::Drawing::Size(241, 62);
			this->buttonSaveActivity->TabIndex = 30;
			this->buttonSaveActivity->Text = L"SAVE";
			this->buttonSaveActivity->UseVisualStyleBackColor = true;
			this->buttonSaveActivity->Click += gcnew System::EventHandler(this, &ExcerciseControl::buttonSaveActivity_Click);
			// 
			// ExcerciseControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonSaveActivity);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->comboBoxStrengthtype);
			this->Controls->Add(this->labelSelectStrength);
			this->Controls->Add(this->panelCardio);
			this->Controls->Add(this->panelSelectedActivity);
			this->Controls->Add(this->comboBoxCardioType);
			this->Controls->Add(this->labelSearchCardio);
			this->Controls->Add(this->dateTimePickerActivity);
			this->Controls->Add(this->labelDateActivity);
			this->Controls->Add(this->labelActivityControl);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ExcerciseControl";
			this->Size = System::Drawing::Size(1760, 1200);
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
	private: System::Void ExcerciseControl_Load(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void buttonAddStrength_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(comboBoxStrengthtype->Text)) {
			MessageBox::Show("Choose strength activity first");
			return;
		}
		double series = Convert::ToDouble(numericUpDownSeries->Value);
		double reps = Convert::ToDouble(numericUpDownRepStrength->Value);
		double trainingWeight = Convert::ToDouble(numericUpDownWeightStr->Value);
		if (series <= 0 || reps <= 0) {
			MessageBox::Show("Series and repetitions must be more than 0");
			return;
		}
		String^ date = dateTimePickerActivity->Value.ToString("dd-MM-yyyy");
		String^ activityName = comboBoxStrengthtype->Text;
		std::string activityNameStd = msclr::interop::marshal_as<std::string>(activityName);
		double userWeight = 60.0;
		double duration = series * reps;
		ActivityInfo info = ActivityInfo::find_activity(activityNameStd);
		activity selectedActivity(info, duration, userWeight);
		double burnedCalories = selectedActivity.calculate();
		labelSelectedActivitylist->Text +=
			activityName + " - " +
			series.ToString("F0") + " sets x " +
			reps.ToString("F0") + " reps, " +
			trainingWeight.ToString("F1") + " kg, " +
			burnedCalories.ToString("F1") + " kcal\n";
		activity_rows_calendar += date + " " + activityName + " " + duration.ToString("F0") + " " + burnedCalories.ToString("F1") + "\n";
		activity_rows_save +=
			date + ";" +
			activityName + ";" +
			duration.ToString("F0") + ";" +
			"0;0;" +
			series.ToString("F0") + ";" +
			reps.ToString("F0") + ";" +
			trainingWeight.ToString("F1") + ";" +
			burnedCalories.ToString("F1") + "\n";
		numericUpDownSeries->Value = 0;
		numericUpDownRepStrength->Value = 0;
		numericUpDownWeightStr->Value = 0;
	}

	private: System::Void buttonAddCardio_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(comboBoxCardioType->Text)) {
			MessageBox::Show("Choose cardio activity first");
			return;
		}
		double duration = Convert::ToDouble(numericUpDownDurCardio->Value);
		double distance = Convert::ToDouble(numericUpDownDistCardio->Value);
		double speed = Convert::ToDouble(numericUpDownSpeedCardio->Value);
		if (duration <= 0) {
			MessageBox::Show("Duration must be more than 0");
			return;
		}
		String^ date = dateTimePickerActivity->Value.ToString("dd-MM-yyyy");
		String^ activityName = comboBoxCardioType->Text;
		std::string activityNameStd = msclr::interop::marshal_as<std::string>(activityName);
		double userWeight = 60.0;
		ActivityInfo info = ActivityInfo::find_activity(activityNameStd);
		activity selectedActivity(info, duration, userWeight);
		double burnedCalories = selectedActivity.calculate();
		activity_rows_calendar += date + " " + activityName + " " + duration.ToString("F0") + " " + burnedCalories.ToString("F1")+ "\n";
		labelSelectedActivitylist->Text +=
			activityName + " - " +
			duration.ToString("F0") + " min, " +
			distance.ToString("F1") + " km, \n" +
			speed.ToString("F1") + " km/h, " +
			burnedCalories.ToString("F1") + " kcal\n";
		activity_rows_save +=
			date + ";" + activityName + ";" + duration.ToString("F0") + ";" + distance.ToString("F1") + ";" + speed.ToString("F1") + ";" + "0;0;" +
			userWeight.ToString("F1") + ";" +
			burnedCalories.ToString("F1") + "\n";
		numericUpDownDurCardio->Value = 0;
		numericUpDownDistCardio->Value = 0;
		numericUpDownSpeedCardio->Value = 0;
	}

	private: System::Void load_activities() {
		comboBoxCardioType->Items->Clear();
		comboBoxStrengthtype->Items->Clear();
		if (!System::IO::File::Exists("activity/activity_MET.txt")) {
			MessageBox::Show("activity_MET.txt not found");
			return;
		}
		array<String^>^ lines = System::IO::File::ReadAllLines("activity/activity_MET.txt");
		for each(String ^ line in lines) {
			if (String::IsNullOrWhiteSpace(line)) {
				continue;
			}
			array<String^>^ parts = line->Split(' ');
			if (parts->Length >= 2) {
				String^ activityName = parts[0]->Trim();
				comboBoxCardioType->Items->Add(activityName);
				comboBoxStrengthtype->Items->Add(activityName);
			}
		}
	}

	private: System::Void buttonSaveActivity_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(activity_rows_calendar)) {
			MessageBox::Show("Nothing to save");
			return;
		}
		array<String^>^ activityLines = activity_rows_calendar->Split(
			gcnew array<wchar_t>{ '\n' },
			System::StringSplitOptions::RemoveEmptyEntries
		);
		for each (String ^ line in activityLines) {
			add_to_calendar("[activity]", line);
		}
		MessageBox::Show("Activity saved");
		activity_rows_calendar = "";
		activity_rows_save = "";
		labelSelectedActivitylist->Text = "";
	}

	private: System::Void add_to_calendar(String^ sectionName, String^ newLine) {
		String^ fileName = "calendar.txt";
		if (!System::IO::File::Exists(fileName)) {
			System::IO::File::WriteAllText(
				fileName,
				"[activity]\n[food]\n[calories]\n[mood]\n"
			);
		}
		array<String^>^ lines = System::IO::File::ReadAllLines(fileName);
		System::Collections::Generic::List<String^>^ result =
			gcnew System::Collections::Generic::List<String^>();
		bool added = false;
		bool insideTargetSection = false;
		for each(String ^ line in lines) {
			if (line == sectionName) {
				result->Add(line);
				insideTargetSection = true;
				continue;
			}
			if (insideTargetSection && line->StartsWith("[") && line->EndsWith("]")) {
				result->Add(newLine);
				added = true;
				insideTargetSection = false;
			}
			result->Add(line);
		} if (insideTargetSection && !added) {
			result->Add(newLine);
			added = true;
		} if (!added) {
			result->Add(sectionName);
			result->Add(newLine);
		}
		System::IO::File::WriteAllLines(fileName, result);
	}

	private: System::String^ RemoveLastLine(String^ text) {
		if (String::IsNullOrWhiteSpace(text)) {
			return "";
		}
		array<String^>^ lines = text->Split(
			gcnew array<wchar_t>{ '\n' },
			System::StringSplitOptions::RemoveEmptyEntries
		);
		if (lines->Length <= 1) {
			return "";
		}
		System::String^ result = "";
		for (int i = 0; i < lines->Length - 2; i++) {
			result += lines[i] + "\n";
		}
		return result;
	}

	private: System::Void buttonRemoveActivity_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(labelSelectedActivitylist->Text)) {
			MessageBox::Show("Nothing to remove");
			return;
		}
		labelSelectedActivitylist->Text = RemoveLastLine(labelSelectedActivitylist->Text);
		activity_rows_calendar = RemoveLastLine(activity_rows_calendar);
		activity_rows_save = RemoveLastLine(activity_rows_save);
	}
};
}
