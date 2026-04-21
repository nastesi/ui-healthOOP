#pragma once
#include "DashboardControl.h"
namespace uihealth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dashboard = gcnew DashboardControl();
			dashboard->Dock = DockStyle::Fill;
			panelContent->Controls->Add(dashboard);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelSidebar;
	private: System::Windows::Forms::Panel^ panelHeader;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::Label^ MENU;
	private: System::Windows::Forms::Button^ buttonHome;
	private: System::Windows::Forms::Button^ buttonMeals;
	private: System::Windows::Forms::Button^ buttonExcercise;
	private: System::Windows::Forms::Button^ buttonDairy;
	private: System::Windows::Forms::Label^ labelSecTitle;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::Label^ labelDate1;
	private: System::Windows::Forms::Label^ labelUser;
	private: System::Windows::Forms::Label^ labelNameUser;
		   DashboardControl^ dashboard;






























































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
			this->panelSidebar = (gcnew System::Windows::Forms::Panel());
			this->panelHeader = (gcnew System::Windows::Forms::Panel());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->MENU = (gcnew System::Windows::Forms::Label());
			this->buttonHome = (gcnew System::Windows::Forms::Button());
			this->buttonMeals = (gcnew System::Windows::Forms::Button());
			this->buttonExcercise = (gcnew System::Windows::Forms::Button());
			this->buttonDairy = (gcnew System::Windows::Forms::Button());
			this->labelSecTitle = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->labelDate1 = (gcnew System::Windows::Forms::Label());
			this->labelUser = (gcnew System::Windows::Forms::Label());
			this->labelNameUser = (gcnew System::Windows::Forms::Label());
			this->panelSidebar->SuspendLayout();
			this->panelHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelSidebar
			// 
			this->panelSidebar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panelSidebar->Controls->Add(this->buttonDairy);
			this->panelSidebar->Controls->Add(this->buttonExcercise);
			this->panelSidebar->Controls->Add(this->buttonMeals);
			this->panelSidebar->Controls->Add(this->buttonHome);
			this->panelSidebar->Controls->Add(this->MENU);
			this->panelSidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSidebar->Location = System::Drawing::Point(0, 0);
			this->panelSidebar->Name = L"panelSidebar";
			this->panelSidebar->Size = System::Drawing::Size(220, 753);
			this->panelSidebar->TabIndex = 0;
			// 
			// panelHeader
			// 
			this->panelHeader->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelHeader->Controls->Add(this->labelNameUser);
			this->panelHeader->Controls->Add(this->labelUser);
			this->panelHeader->Controls->Add(this->labelDate1);
			this->panelHeader->Controls->Add(this->labelDate);
			this->panelHeader->Controls->Add(this->labelSecTitle);
			this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHeader->Location = System::Drawing::Point(220, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(790, 70);
			this->panelHeader->TabIndex = 1;
			// 
			// panelContent
			// 
			this->panelContent->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContent->Location = System::Drawing::Point(220, 70);
			this->panelContent->Name = L"panelContent";
			this->panelContent->Size = System::Drawing::Size(790, 683);
			this->panelContent->TabIndex = 2;
			this->panelContent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelContent_Paint);
			// 
			// MENU
			// 
			this->MENU->AutoSize = true;
			this->MENU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MENU->Location = System::Drawing::Point(55, 9);
			this->MENU->Name = L"MENU";
			this->MENU->Size = System::Drawing::Size(102, 39);
			this->MENU->TabIndex = 0;
			this->MENU->Text = L"Menu";
			this->MENU->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MENU->Click += gcnew System::EventHandler(this, &MyForm::MENU_Click);
			// 
			// buttonHome
			// 
			this->buttonHome->Location = System::Drawing::Point(36, 99);
			this->buttonHome->Name = L"buttonHome";
			this->buttonHome->Size = System::Drawing::Size(121, 40);
			this->buttonHome->TabIndex = 1;
			this->buttonHome->Text = L"Home";
			this->buttonHome->UseVisualStyleBackColor = true;
			// 
			// buttonMeals
			// 
			this->buttonMeals->Location = System::Drawing::Point(36, 161);
			this->buttonMeals->Name = L"buttonMeals";
			this->buttonMeals->Size = System::Drawing::Size(121, 40);
			this->buttonMeals->TabIndex = 2;
			this->buttonMeals->Text = L"Meals";
			this->buttonMeals->UseVisualStyleBackColor = true;
			// 
			// buttonExcercise
			// 
			this->buttonExcercise->Location = System::Drawing::Point(36, 232);
			this->buttonExcercise->Name = L"buttonExcercise";
			this->buttonExcercise->Size = System::Drawing::Size(121, 40);
			this->buttonExcercise->TabIndex = 3;
			this->buttonExcercise->Text = L"Excercise";
			this->buttonExcercise->UseVisualStyleBackColor = true;
			// 
			// buttonDairy
			// 
			this->buttonDairy->Location = System::Drawing::Point(36, 306);
			this->buttonDairy->Name = L"buttonDairy";
			this->buttonDairy->Size = System::Drawing::Size(121, 40);
			this->buttonDairy->TabIndex = 4;
			this->buttonDairy->Text = L"Dairy";
			this->buttonDairy->UseVisualStyleBackColor = true;
			// 
			// labelSecTitle
			// 
			this->labelSecTitle->AutoSize = true;
			this->labelSecTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSecTitle->Location = System::Drawing::Point(20, 9);
			this->labelSecTitle->Name = L"labelSecTitle";
			this->labelSecTitle->Size = System::Drawing::Size(108, 39);
			this->labelSecTitle->TabIndex = 5;
			this->labelSecTitle->Text = L"Home";
			this->labelSecTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSecTitle->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate->Location = System::Drawing::Point(441, 20);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(59, 25);
			this->labelDate->TabIndex = 6;
			this->labelDate->Text = L"Date:";
			this->labelDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelDate->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// labelDate1
			// 
			this->labelDate1->AutoSize = true;
			this->labelDate1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate1->Location = System::Drawing::Point(493, 24);
			this->labelDate1->Name = L"labelDate1";
			this->labelDate1->Size = System::Drawing::Size(89, 20);
			this->labelDate1->TabIndex = 7;
			this->labelDate1->Text = L"11.05.2006";
			this->labelDate1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelUser
			// 
			this->labelUser->AutoSize = true;
			this->labelUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUser->Location = System::Drawing::Point(597, 20);
			this->labelUser->Name = L"labelUser";
			this->labelUser->Size = System::Drawing::Size(59, 25);
			this->labelUser->TabIndex = 8;
			this->labelUser->Text = L"User:";
			this->labelUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelUser->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// labelNameUser
			// 
			this->labelNameUser->AutoSize = true;
			this->labelNameUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameUser->Location = System::Drawing::Point(653, 19);
			this->labelNameUser->Name = L"labelNameUser";
			this->labelNameUser->Size = System::Drawing::Size(53, 25);
			this->labelNameUser->TabIndex = 9;
			this->labelNameUser->Text = L"Max";
			this->labelNameUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 753);
			this->Controls->Add(this->panelContent);
			this->Controls->Add(this->panelHeader);
			this->Controls->Add(this->panelSidebar);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HealthApp";
			this->panelSidebar->ResumeLayout(false);
			this->panelSidebar->PerformLayout();
			this->panelHeader->ResumeLayout(false);
			this->panelHeader->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void panelContent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
	private: System::Void MENU_Click(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click_4(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelProgresspanel_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelWeightnumber_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelActivityoption_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click_5(System::Object^ sender, System::EventArgs^ e) {}
};
}
