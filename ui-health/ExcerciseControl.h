#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uihealth {

	/// <summary>
	/// Summary for ExcerciseControl
	/// </summary>
	public ref class ExcerciseControl : public System::Windows::Forms::UserControl
	{
	public:
		ExcerciseControl(void)
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



	protected:

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
			this->numericUpDownDurCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownDistCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelDistanceCardio = (gcnew System::Windows::Forms::Label());
			this->numericUpDownSpeedCardio = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSpeedCardio = (gcnew System::Windows::Forms::Label());
			this->buttonAddCardio = (gcnew System::Windows::Forms::Button());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurCardio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDistCardio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedCardio))->BeginInit();
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
			this->labelActivityControl->Size = System::Drawing::Size(441, 38);
			this->labelActivityControl->TabIndex = 2;
			this->labelActivityControl->Text = L"EXCERCISE AND ACTIVITY";
			this->labelActivityControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePickerActivity
			// 
			this->dateTimePickerActivity->Location = System::Drawing::Point(139, 99);
			this->dateTimePickerActivity->Name = L"dateTimePickerActivity";
			this->dateTimePickerActivity->Size = System::Drawing::Size(200, 22);
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
			this->comboBoxCardioType->Location = System::Drawing::Point(317, 143);
			this->comboBoxCardioType->Name = L"comboBoxCardioType";
			this->comboBoxCardioType->Size = System::Drawing::Size(378, 24);
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
			this->panelSelectedActivity->Controls->Add(this->labelSelectedActivitylist);
			this->panelSelectedActivity->Controls->Add(this->labelSelectedActivity);
			this->panelSelectedActivity->Location = System::Drawing::Point(854, 99);
			this->panelSelectedActivity->Name = L"panelSelectedActivity";
			this->panelSelectedActivity->Size = System::Drawing::Size(346, 504);
			this->panelSelectedActivity->TabIndex = 24;
			// 
			// buttonRemoveActivity
			// 
			this->buttonRemoveActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveActivity->Location = System::Drawing::Point(258, 468);
			this->buttonRemoveActivity->Name = L"buttonRemoveActivity";
			this->buttonRemoveActivity->Size = System::Drawing::Size(75, 23);
			this->buttonRemoveActivity->TabIndex = 30;
			this->buttonRemoveActivity->Text = L"Remove";
			this->buttonRemoveActivity->UseVisualStyleBackColor = true;
			// 
			// labelSelectedActivitylist
			// 
			this->labelSelectedActivitylist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivitylist->AutoSize = true;
			this->labelSelectedActivitylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivitylist->Location = System::Drawing::Point(26, 57);
			this->labelSelectedActivitylist->Name = L"labelSelectedActivitylist";
			this->labelSelectedActivitylist->Size = System::Drawing::Size(301, 25);
			this->labelSelectedActivitylist->TabIndex = 15;
			this->labelSelectedActivitylist->Text = L"Running - 30 mins, 5 km, 20 km/h";
			this->labelSelectedActivitylist->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectedActivity
			// 
			this->labelSelectedActivity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivity->AutoSize = true;
			this->labelSelectedActivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivity->Location = System::Drawing::Point(116, 12);
			this->labelSelectedActivity->Name = L"labelSelectedActivity";
			this->labelSelectedActivity->Size = System::Drawing::Size(89, 25);
			this->labelSelectedActivity->TabIndex = 14;
			this->labelSelectedActivity->Text = L"Selected";
			this->labelSelectedActivity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->panelCardio->Size = System::Drawing::Size(617, 118);
			this->panelCardio->TabIndex = 26;
			// 
			// numericUpDownDurCardio
			// 
			this->numericUpDownDurCardio->Location = System::Drawing::Point(143, 10);
			this->numericUpDownDurCardio->Name = L"numericUpDownDurCardio";
			this->numericUpDownDurCardio->Size = System::Drawing::Size(120, 22);
			this->numericUpDownDurCardio->TabIndex = 26;
			// 
			// numericUpDownDistCardio
			// 
			this->numericUpDownDistCardio->Location = System::Drawing::Point(143, 38);
			this->numericUpDownDistCardio->Name = L"numericUpDownDistCardio";
			this->numericUpDownDistCardio->Size = System::Drawing::Size(120, 22);
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
			// numericUpDownSpeedCardio
			// 
			this->numericUpDownSpeedCardio->Location = System::Drawing::Point(143, 66);
			this->numericUpDownSpeedCardio->Name = L"numericUpDownSpeedCardio";
			this->numericUpDownSpeedCardio->Size = System::Drawing::Size(120, 22);
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
			// buttonAddCardio
			// 
			this->buttonAddCardio->Location = System::Drawing::Point(528, 82);
			this->buttonAddCardio->Name = L"buttonAddCardio";
			this->buttonAddCardio->Size = System::Drawing::Size(70, 24);
			this->buttonAddCardio->TabIndex = 33;
			this->buttonAddCardio->Text = L"Add";
			this->buttonAddCardio->UseVisualStyleBackColor = true;
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
			this->panel1->Size = System::Drawing::Size(617, 118);
			this->panel1->TabIndex = 29;
			// 
			// buttonAddStrength
			// 
			this->buttonAddStrength->Location = System::Drawing::Point(529, 82);
			this->buttonAddStrength->Name = L"buttonAddStrength";
			this->buttonAddStrength->Size = System::Drawing::Size(70, 24);
			this->buttonAddStrength->TabIndex = 33;
			this->buttonAddStrength->Text = L"Add";
			this->buttonAddStrength->UseVisualStyleBackColor = true;
			this->buttonAddStrength->Click += gcnew System::EventHandler(this, &ExcerciseControl::button1_Click);
			// 
			// numericUpDownWeightStr
			// 
			this->numericUpDownWeightStr->Location = System::Drawing::Point(86, 66);
			this->numericUpDownWeightStr->Name = L"numericUpDownWeightStr";
			this->numericUpDownWeightStr->Size = System::Drawing::Size(120, 22);
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
			this->numericUpDownRepStrength->Location = System::Drawing::Point(194, 38);
			this->numericUpDownRepStrength->Name = L"numericUpDownRepStrength";
			this->numericUpDownRepStrength->Size = System::Drawing::Size(120, 22);
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
			this->numericUpDownSeries->Location = System::Drawing::Point(160, 10);
			this->numericUpDownSeries->Name = L"numericUpDownSeries";
			this->numericUpDownSeries->Size = System::Drawing::Size(120, 22);
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
			// comboBoxStrengthtype
			// 
			this->comboBoxStrengthtype->FormattingEnabled = true;
			this->comboBoxStrengthtype->Location = System::Drawing::Point(333, 319);
			this->comboBoxStrengthtype->Name = L"comboBoxStrengthtype";
			this->comboBoxStrengthtype->Size = System::Drawing::Size(362, 24);
			this->comboBoxStrengthtype->TabIndex = 28;
			// 
			// labelSelectStrength
			// 
			this->labelSelectStrength->AutoSize = true;
			this->labelSelectStrength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectStrength->Location = System::Drawing::Point(69, 318);
			this->labelSelectStrength->Name = L"labelSelectStrength";
			this->labelSelectStrength->Size = System::Drawing::Size(258, 25);
			this->labelSelectStrength->TabIndex = 27;
			this->labelSelectStrength->Text = L"Select Strength activity type:";
			this->labelSelectStrength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonSaveActivity
			// 
			this->buttonSaveActivity->Location = System::Drawing::Point(1025, 695);
			this->buttonSaveActivity->Name = L"buttonSaveActivity";
			this->buttonSaveActivity->Size = System::Drawing::Size(175, 41);
			this->buttonSaveActivity->TabIndex = 30;
			this->buttonSaveActivity->Text = L"SAVE";
			this->buttonSaveActivity->UseVisualStyleBackColor = true;
			// 
			// ExcerciseControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
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
			this->Name = L"ExcerciseControl";
			this->Size = System::Drawing::Size(1280, 800);
			this->Load += gcnew System::EventHandler(this, &ExcerciseControl::ExcerciseControl_Load);
			this->panelSelectedActivity->ResumeLayout(false);
			this->panelSelectedActivity->PerformLayout();
			this->panelCardio->ResumeLayout(false);
			this->panelCardio->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDurCardio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDistCardio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedCardio))->EndInit();
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
