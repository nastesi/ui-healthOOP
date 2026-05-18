#pragma once

namespace uihealth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserSetup
	/// </summary>
	public ref class UserSetup : public System::Windows::Forms::Form
	{
	public:
		UserSetup(void)
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
		~UserSetup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNameUser;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	private: System::Windows::Forms::Label^ labelAgeUser;
	private: System::Windows::Forms::TextBox^ textBoxAgeUser;
	private: System::Windows::Forms::Label^ labelWeightUser;
	private: System::Windows::Forms::TextBox^ textBoxWeightUser;
	private: System::Windows::Forms::Label^ labelHeightUser;
	private: System::Windows::Forms::TextBox^ textBoxHeightUser;
	private: System::Windows::Forms::Label^ labelActivityUser;
	private: System::Windows::Forms::ComboBox^ comboBoxActivityUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBoxGoal;
	private: System::Windows::Forms::Button^ buttonSaveUser;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserSetup::typeid));
			this->labelNameUser = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->labelAgeUser = (gcnew System::Windows::Forms::Label());
			this->textBoxAgeUser = (gcnew System::Windows::Forms::TextBox());
			this->labelWeightUser = (gcnew System::Windows::Forms::Label());
			this->textBoxWeightUser = (gcnew System::Windows::Forms::TextBox());
			this->labelHeightUser = (gcnew System::Windows::Forms::Label());
			this->textBoxHeightUser = (gcnew System::Windows::Forms::TextBox());
			this->labelActivityUser = (gcnew System::Windows::Forms::Label());
			this->comboBoxActivityUser = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxGoal = (gcnew System::Windows::Forms::ComboBox());
			this->buttonSaveUser = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelNameUser
			// 
			this->labelNameUser->AutoSize = true;
			this->labelNameUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameUser->Location = System::Drawing::Point(44, 160);
			this->labelNameUser->Name = L"labelNameUser";
			this->labelNameUser->Size = System::Drawing::Size(88, 27);
			this->labelNameUser->TabIndex = 4;
			this->labelNameUser->Text = L"Name:";
			this->labelNameUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelNameUser->Click += gcnew System::EventHandler(this, &UserSetup::labelNameUser_Click);
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(148, 163);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(309, 22);
			this->textBoxUserName->TabIndex = 5;
			// 
			// labelAgeUser
			// 
			this->labelAgeUser->AutoSize = true;
			this->labelAgeUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAgeUser->Location = System::Drawing::Point(44, 205);
			this->labelAgeUser->Name = L"labelAgeUser";
			this->labelAgeUser->Size = System::Drawing::Size(65, 27);
			this->labelAgeUser->TabIndex = 6;
			this->labelAgeUser->Text = L"Age:";
			this->labelAgeUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAgeUser->Click += gcnew System::EventHandler(this, &UserSetup::labelAgeUser_Click);
			// 
			// textBoxAgeUser
			// 
			this->textBoxAgeUser->Location = System::Drawing::Point(129, 210);
			this->textBoxAgeUser->Name = L"textBoxAgeUser";
			this->textBoxAgeUser->Size = System::Drawing::Size(67, 22);
			this->textBoxAgeUser->TabIndex = 7;
			// 
			// labelWeightUser
			// 
			this->labelWeightUser->AutoSize = true;
			this->labelWeightUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeightUser->Location = System::Drawing::Point(44, 251);
			this->labelWeightUser->Name = L"labelWeightUser";
			this->labelWeightUser->Size = System::Drawing::Size(138, 27);
			this->labelWeightUser->TabIndex = 8;
			this->labelWeightUser->Text = L"Weight, kg:";
			this->labelWeightUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWeightUser->Click += gcnew System::EventHandler(this, &UserSetup::labelWeightUser_Click);
			// 
			// textBoxWeightUser
			// 
			this->textBoxWeightUser->Location = System::Drawing::Point(206, 255);
			this->textBoxWeightUser->Name = L"textBoxWeightUser";
			this->textBoxWeightUser->Size = System::Drawing::Size(67, 22);
			this->textBoxWeightUser->TabIndex = 9;
			// 
			// labelHeightUser
			// 
			this->labelHeightUser->AutoSize = true;
			this->labelHeightUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHeightUser->Location = System::Drawing::Point(47, 297);
			this->labelHeightUser->Name = L"labelHeightUser";
			this->labelHeightUser->Size = System::Drawing::Size(141, 27);
			this->labelHeightUser->TabIndex = 10;
			this->labelHeightUser->Text = L"Height, cm:";
			this->labelHeightUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelHeightUser->Click += gcnew System::EventHandler(this, &UserSetup::labelHeightUser_Click);
			// 
			// textBoxHeightUser
			// 
			this->textBoxHeightUser->Location = System::Drawing::Point(205, 301);
			this->textBoxHeightUser->Name = L"textBoxHeightUser";
			this->textBoxHeightUser->Size = System::Drawing::Size(67, 22);
			this->textBoxHeightUser->TabIndex = 11;
			// 
			// labelActivityUser
			// 
			this->labelActivityUser->AutoSize = true;
			this->labelActivityUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelActivityUser->Location = System::Drawing::Point(48, 351);
			this->labelActivityUser->Name = L"labelActivityUser";
			this->labelActivityUser->Size = System::Drawing::Size(211, 27);
			this->labelActivityUser->TabIndex = 12;
			this->labelActivityUser->Text = L"Average activity:";
			this->labelActivityUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelActivityUser->Click += gcnew System::EventHandler(this, &UserSetup::labelActivityUser_Click);
			// 
			// comboBoxActivityUser
			// 
			this->comboBoxActivityUser->FormattingEnabled = true;
			this->comboBoxActivityUser->Location = System::Drawing::Point(277, 354);
			this->comboBoxActivityUser->Name = L"comboBoxActivityUser";
			this->comboBoxActivityUser->Size = System::Drawing::Size(183, 24);
			this->comboBoxActivityUser->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 404);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 27);
			this->label1->TabIndex = 14;
			this->label1->Text = L"What is your goal\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &UserSetup::label1_Click);
			// 
			// comboBoxGoal
			// 
			this->comboBoxGoal->FormattingEnabled = true;
			this->comboBoxGoal->Location = System::Drawing::Point(282, 407);
			this->comboBoxGoal->Name = L"comboBoxGoal";
			this->comboBoxGoal->Size = System::Drawing::Size(185, 24);
			this->comboBoxGoal->TabIndex = 15;
			// 
			// buttonSaveUser
			// 
			this->buttonSaveUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveUser->Location = System::Drawing::Point(399, 497);
			this->buttonSaveUser->Name = L"buttonSaveUser";
			this->buttonSaveUser->Size = System::Drawing::Size(183, 48);
			this->buttonSaveUser->TabIndex = 31;
			this->buttonSaveUser->Text = L"SAVE AND START";
			this->buttonSaveUser->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(326, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(305, 39);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Set up your profile";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserSetup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(982, 636);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonSaveUser);
			this->Controls->Add(this->comboBoxGoal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxActivityUser);
			this->Controls->Add(this->labelActivityUser);
			this->Controls->Add(this->textBoxHeightUser);
			this->Controls->Add(this->labelHeightUser);
			this->Controls->Add(this->textBoxWeightUser);
			this->Controls->Add(this->labelWeightUser);
			this->Controls->Add(this->textBoxAgeUser);
			this->Controls->Add(this->labelAgeUser);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->labelNameUser);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UserSetup";
			this->Text = L"UserSetup";
			this->Load += gcnew System::EventHandler(this, &UserSetup::UserSetup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserSetup_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelAgeUser_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelWeightUser_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelHeightUser_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelNameUser_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelActivityUser_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
