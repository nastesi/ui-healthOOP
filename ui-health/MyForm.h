#pragma once
#include "DashboardControl.h"
#include "MealsControl.h"
#include "ExcerciseControl.h"
#include "DairyControl.h"
#include "UserSetup.h"
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
			LoadUserNameFromFile();

			dashboard = gcnew DashboardControl();
			dashboard->MealsRequested += gcnew System::EventHandler(this, &MyForm::OnOpenMeals);
			dashboard->ExerciseRequested += gcnew System::EventHandler(this, &MyForm::OnOpenExercise);

			meals = gcnew MealsControl();
			meals->BackRequested += gcnew System::EventHandler(this, &MyForm::OnBackToHome);

			exercises = gcnew ExcerciseControl();
			exercises->BackRequested += gcnew System::EventHandler(this, &MyForm::OnBackToHome);

			diary = gcnew DairyControl();
			diary->BackRequested += gcnew System::EventHandler(this, &MyForm::OnBackToHome);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->StartPosition = FormStartPosition::CenterScreen;
			this->ClientSize = System::Drawing::Size(800, 600);

			ShowPage(dashboard);
		}
	public:
		void ShowDashboard()
		{
			labelSecTitle->Text = L"Home";
			ShowPage(dashboard);
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

	private: System::Windows::Forms::Panel^ panelHeader;
	private: System::Windows::Forms::Panel^ panelContent;




	private: System::Windows::Forms::Button^ buttonDairy;
	private: System::Windows::Forms::Label^ labelSecTitle;


	private: System::Windows::Forms::Label^ labelUser;
	private: System::Windows::Forms::Label^ labelNameUser;
		   DashboardControl^ dashboard;
		   MealsControl^ meals;
		   ExcerciseControl^ exercises;
		   DairyControl^ diary;
	private: System::Void OnBackToHome(System::Object^ sender, System::EventArgs^ e)
	{
		labelSecTitle->Text = L"Home";
		MessageBox::Show("Back to home");
		ShowPage(dashboard);
	}
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonDairy = (gcnew System::Windows::Forms::Button());
			this->panelHeader = (gcnew System::Windows::Forms::Panel());
			this->labelNameUser = (gcnew System::Windows::Forms::Label());
			this->labelUser = (gcnew System::Windows::Forms::Label());
			this->labelSecTitle = (gcnew System::Windows::Forms::Label());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->panelHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonDairy
			// 
			this->buttonDairy->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDairy->Location = System::Drawing::Point(884, 19);
			this->buttonDairy->Name = L"buttonDairy";
			this->buttonDairy->Size = System::Drawing::Size(100, 36);
			this->buttonDairy->TabIndex = 4;
			this->buttonDairy->Text = L"Dairy";
			this->buttonDairy->UseVisualStyleBackColor = true;
			this->buttonDairy->Click += gcnew System::EventHandler(this, &MyForm::buttonDairy_Click);
			// 
			// panelHeader
			// 
			this->panelHeader->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelHeader->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelHeader->Controls->Add(this->buttonDairy);
			this->panelHeader->Controls->Add(this->labelNameUser);
			this->panelHeader->Controls->Add(this->labelUser);
			this->panelHeader->Controls->Add(this->labelSecTitle);
			this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHeader->Location = System::Drawing::Point(0, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(1010, 70);
			this->panelHeader->TabIndex = 1;
			this->panelHeader->Click += gcnew System::EventHandler(this, &MyForm::buttonDairy_Click);
			// 
			// labelNameUser
			// 
			this->labelNameUser->AutoSize = true;
			this->labelNameUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelNameUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameUser->Location = System::Drawing::Point(671, 18);
			this->labelNameUser->Name = L"labelNameUser";
			this->labelNameUser->Size = System::Drawing::Size(61, 27);
			this->labelNameUser->TabIndex = 9;
			this->labelNameUser->Text = L"Max";
			this->labelNameUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelNameUser->Click += gcnew System::EventHandler(this, &MyForm::labelNameUser_Click);
			// 
			// labelUser
			// 
			this->labelUser->AutoSize = true;
			this->labelUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUser->Location = System::Drawing::Point(589, 18);
			this->labelUser->Name = L"labelUser";
			this->labelUser->Size = System::Drawing::Size(76, 34);
			this->labelUser->TabIndex = 8;
			this->labelUser->Text = L"User:";
			this->labelUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelUser->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// labelSecTitle
			// 
			this->labelSecTitle->AutoSize = true;
			this->labelSecTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSecTitle->Location = System::Drawing::Point(20, 14);
			this->labelSecTitle->Name = L"labelSecTitle";
			this->labelSecTitle->Size = System::Drawing::Size(112, 39);
			this->labelSecTitle->TabIndex = 5;
			this->labelSecTitle->Text = L"Home";
			this->labelSecTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSecTitle->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panelContent
			// 
			this->panelContent->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContent->Location = System::Drawing::Point(0, 70);
			this->panelContent->Name = L"panelContent";
			this->panelContent->Size = System::Drawing::Size(1010, 683);
			this->panelContent->TabIndex = 2;
			this->panelContent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelContent_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 753);
			this->Controls->Add(this->panelContent);
			this->Controls->Add(this->panelHeader);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HealthApp";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelHeader->ResumeLayout(false);
			this->panelHeader->PerformLayout();
			this->ResumeLayout(false);

		}

		void ShowPage(UserControl^ page)
		{
			panelContent->Controls->Clear();
			page->Dock = DockStyle::Fill;
			panelContent->Controls->Add(page);
		}

#pragma endregion
	private: System::Void panelContent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
	private: System::Void MENU_Click(System::Object^ sender, System::EventArgs^ e) {}
		   // for Meals button
	private: System::Void buttonMeals_Click(System::Object^ sender, System::EventArgs^ e)
	{
		labelSecTitle->Text = "Meals";
		ShowPage(meals);
	}
		   // for Exercise button
	private: System::Void OnOpenExercise(System::Object^ sender, System::EventArgs^ e)
	{
		labelSecTitle->Text = L"Exercise";
		ShowPage(exercises);
	}
		   // for diary button
	private: System::Void buttonDairy_Click(System::Object^ sender, System::EventArgs^ e)
	{
		labelSecTitle->Text = "Diary";
		ShowPage(diary);
	}
	private: System::Void OnOpenMeals(System::Object^ sender, System::EventArgs^ e)
	{
		labelSecTitle->Text = L"Meals";
		ShowPage(meals);
	}

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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadUserNameFromFile();
	}
	private: System::Void labelNameUser_Click(System::Object^ sender, System::EventArgs^ e){
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show(
			"Change profile info?",
			"Confirm",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			UserSetup^ UserSetupForm = gcnew UserSetup();
			UserSetupForm->ShowDialog();
			LoadUserNameFromFile();
		}
	}
	private: System::Void LoadUserNameFromFile() {
		if (!System::IO::File::Exists("user_data.txt")) {
			labelNameUser->Text = "User";
			return;
		}
		array<String^>^ lines = System::IO::File::ReadAllLines("user_data.txt");
		for each (String ^ line in lines) {
			if (String::IsNullOrWhiteSpace(line)) {
				continue;
			}
			array<String^>^ parts = line->Split(';');
			if (parts->Length >= 2 && parts[0] == "Name") {
				labelNameUser->Text = parts[1];
				return;
			}
		}
		labelNameUser->Text = "User";
	}
	};
}