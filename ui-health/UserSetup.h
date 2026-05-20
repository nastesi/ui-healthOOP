#pragma once

namespace uihealth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
			this->buttonSaveUser = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelNameUser
			// 
			this->labelNameUser->AutoSize = true;
			this->labelNameUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameUser->Location = System::Drawing::Point(60, 240);
			this->labelNameUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNameUser->Name = L"labelNameUser";
			this->labelNameUser->Size = System::Drawing::Size(124, 40);
			this->labelNameUser->TabIndex = 4;
			this->labelNameUser->Text = L"Name:";
			this->labelNameUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelNameUser->Click += gcnew System::EventHandler(this, &UserSetup::labelNameUser_Click);
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(204, 244);
			this->textBoxUserName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(423, 29);
			this->textBoxUserName->TabIndex = 5;
			// 
			// labelAgeUser
			// 
			this->labelAgeUser->AutoSize = true;
			this->labelAgeUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAgeUser->Location = System::Drawing::Point(60, 308);
			this->labelAgeUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAgeUser->Name = L"labelAgeUser";
			this->labelAgeUser->Size = System::Drawing::Size(92, 40);
			this->labelAgeUser->TabIndex = 6;
			this->labelAgeUser->Text = L"Age:";
			this->labelAgeUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAgeUser->Click += gcnew System::EventHandler(this, &UserSetup::labelAgeUser_Click);
			// 
			// textBoxAgeUser
			// 
			this->textBoxAgeUser->Location = System::Drawing::Point(177, 315);
			this->textBoxAgeUser->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAgeUser->Name = L"textBoxAgeUser";
			this->textBoxAgeUser->Size = System::Drawing::Size(91, 29);
			this->textBoxAgeUser->TabIndex = 7;
			// 
			// labelWeightUser
			// 
			this->labelWeightUser->AutoSize = true;
			this->labelWeightUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWeightUser->Location = System::Drawing::Point(60, 376);
			this->labelWeightUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelWeightUser->Name = L"labelWeightUser";
			this->labelWeightUser->Size = System::Drawing::Size(193, 40);
			this->labelWeightUser->TabIndex = 8;
			this->labelWeightUser->Text = L"Weight, kg:";
			this->labelWeightUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWeightUser->Click += gcnew System::EventHandler(this, &UserSetup::labelWeightUser_Click);
			// 
			// textBoxWeightUser
			// 
			this->textBoxWeightUser->Location = System::Drawing::Point(283, 382);
			this->textBoxWeightUser->Margin = System::Windows::Forms::Padding(4);
			this->textBoxWeightUser->Name = L"textBoxWeightUser";
			this->textBoxWeightUser->Size = System::Drawing::Size(91, 29);
			this->textBoxWeightUser->TabIndex = 9;
			// 
			// labelHeightUser
			// 
			this->labelHeightUser->AutoSize = true;
			this->labelHeightUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHeightUser->Location = System::Drawing::Point(65, 446);
			this->labelHeightUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelHeightUser->Name = L"labelHeightUser";
			this->labelHeightUser->Size = System::Drawing::Size(198, 40);
			this->labelHeightUser->TabIndex = 10;
			this->labelHeightUser->Text = L"Height, cm:";
			this->labelHeightUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelHeightUser->Click += gcnew System::EventHandler(this, &UserSetup::labelHeightUser_Click);
			// 
			// textBoxHeightUser
			// 
			this->textBoxHeightUser->Location = System::Drawing::Point(282, 452);
			this->textBoxHeightUser->Margin = System::Windows::Forms::Padding(4);
			this->textBoxHeightUser->Name = L"textBoxHeightUser";
			this->textBoxHeightUser->Size = System::Drawing::Size(91, 29);
			this->textBoxHeightUser->TabIndex = 11;
			// 
			// buttonSaveUser
			// 
			this->buttonSaveUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveUser->Location = System::Drawing::Point(547, 746);
			this->buttonSaveUser->Margin = System::Windows::Forms::Padding(4);
			this->buttonSaveUser->Name = L"buttonSaveUser";
			this->buttonSaveUser->Size = System::Drawing::Size(252, 72);
			this->buttonSaveUser->TabIndex = 31;
			this->buttonSaveUser->Text = L"Save";
			this->buttonSaveUser->UseVisualStyleBackColor = true;
			this->buttonSaveUser->Click += gcnew System::EventHandler(this, &UserSetup::buttonSaveUser_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(448, 50);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(431, 56);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Set up your profile";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserSetup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1350, 954);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonSaveUser);
			this->Controls->Add(this->textBoxHeightUser);
			this->Controls->Add(this->labelHeightUser);
			this->Controls->Add(this->textBoxWeightUser);
			this->Controls->Add(this->labelWeightUser);
			this->Controls->Add(this->textBoxAgeUser);
			this->Controls->Add(this->labelAgeUser);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->labelNameUser);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
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
private: System::Void buttonSaveUser_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBoxUserName->Text)) {
		MessageBox::Show("Enter name");
		return;
	}
	if (String::IsNullOrWhiteSpace(textBoxAgeUser->Text)) {
		MessageBox::Show("Enter age");
		return;
	}
	if (String::IsNullOrWhiteSpace(textBoxWeightUser->Text)) {
		MessageBox::Show("Enter weight");
		return;
	}
	if (String::IsNullOrWhiteSpace(textBoxHeightUser->Text)) {
		MessageBox::Show("Enter height");
		return;
	}
	String^ name = textBoxUserName->Text->Trim();
	String^ age = textBoxAgeUser->Text->Trim();
	String^ weight = textBoxWeightUser->Text->Trim();
	String^ height = textBoxHeightUser->Text->Trim();
	String^ data =
		"Name;" + name + Environment::NewLine +
		"Age;" + age + Environment::NewLine +
		"Weight;" + weight + Environment::NewLine +
		"Height;" + height + Environment::NewLine;
	System::IO::File::WriteAllText("user_data.txt", data);
	MessageBox::Show(
		"User data saved",
		"Success",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
	this->Close();
}
};
}
