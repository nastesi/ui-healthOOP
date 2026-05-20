#pragma once

namespace uihealth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRecipeMEALS
	/// </summary>
	public ref class AddRecipeMEALS : public System::Windows::Forms::Form
	{
	public:
		AddRecipeMEALS(void)
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
		~AddRecipeMEALS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelAddNewRecipeItem;




















	private: System::Windows::Forms::Button^ buttonCancelNewRecipe;
	private: System::Windows::Forms::Button^ buttonSaveNewRecipe;
	private: System::Windows::Forms::Panel^ panelSelectedActivityADD;

	private: System::Windows::Forms::Button^ buttonRemoveActivityADD;

	private: System::Windows::Forms::TextBox^ textBoxSelectedActivitylistADD;

	private: System::Windows::Forms::Label^ labelSelectedActivityADD;

	private: System::Windows::Forms::ComboBox^ comboBoxFoodADD;

	private: System::Windows::Forms::Label^ labelSearchProdADD;
	private: System::Windows::Forms::Button^ buttonAddADD;


	private: System::Windows::Forms::Label^ labelGramsProdADD;
	private: System::Windows::Forms::TextBox^ textBoxGramsProdADD;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRecipeMEALS::typeid));
			this->labelAddNewRecipeItem = (gcnew System::Windows::Forms::Label());
			this->buttonCancelNewRecipe = (gcnew System::Windows::Forms::Button());
			this->buttonSaveNewRecipe = (gcnew System::Windows::Forms::Button());
			this->panelSelectedActivityADD = (gcnew System::Windows::Forms::Panel());
			this->buttonRemoveActivityADD = (gcnew System::Windows::Forms::Button());
			this->textBoxSelectedActivitylistADD = (gcnew System::Windows::Forms::TextBox());
			this->labelSelectedActivityADD = (gcnew System::Windows::Forms::Label());
			this->comboBoxFoodADD = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchProdADD = (gcnew System::Windows::Forms::Label());
			this->buttonAddADD = (gcnew System::Windows::Forms::Button());
			this->labelGramsProdADD = (gcnew System::Windows::Forms::Label());
			this->textBoxGramsProdADD = (gcnew System::Windows::Forms::TextBox());
			this->panelSelectedActivityADD->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelAddNewRecipeItem
			// 
			this->labelAddNewRecipeItem->AutoSize = true;
			this->labelAddNewRecipeItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddNewRecipeItem->Location = System::Drawing::Point(257, 21);
			this->labelAddNewRecipeItem->Name = L"labelAddNewRecipeItem";
			this->labelAddNewRecipeItem->Size = System::Drawing::Size(274, 39);
			this->labelAddNewRecipeItem->TabIndex = 1;
			this->labelAddNewRecipeItem->Text = L"Add new recipe";
			this->labelAddNewRecipeItem->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::labelAddNewRecipeItem_Click);
			// 
			// buttonCancelNewRecipe
			// 
			this->buttonCancelNewRecipe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelNewRecipe->Location = System::Drawing::Point(382, 396);
			this->buttonCancelNewRecipe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonCancelNewRecipe->Name = L"buttonCancelNewRecipe";
			this->buttonCancelNewRecipe->Size = System::Drawing::Size(175, 41);
			this->buttonCancelNewRecipe->TabIndex = 49;
			this->buttonCancelNewRecipe->Text = L"Cancel";
			this->buttonCancelNewRecipe->UseVisualStyleBackColor = true;
			this->buttonCancelNewRecipe->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonCancelNewRecipe_Click);
			// 
			// buttonSaveNewRecipe
			// 
			this->buttonSaveNewRecipe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveNewRecipe->Location = System::Drawing::Point(201, 396);
			this->buttonSaveNewRecipe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSaveNewRecipe->Name = L"buttonSaveNewRecipe";
			this->buttonSaveNewRecipe->Size = System::Drawing::Size(175, 41);
			this->buttonSaveNewRecipe->TabIndex = 48;
			this->buttonSaveNewRecipe->Text = L"Save";
			this->buttonSaveNewRecipe->UseVisualStyleBackColor = true;
			this->buttonSaveNewRecipe->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonSaveNewRecipe_Click);
			// 
			// panelSelectedActivityADD
			// 
			this->panelSelectedActivityADD->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelSelectedActivityADD->Controls->Add(this->buttonRemoveActivityADD);
			this->panelSelectedActivityADD->Controls->Add(this->textBoxSelectedActivitylistADD);
			this->panelSelectedActivityADD->Controls->Add(this->labelSelectedActivityADD);
			this->panelSelectedActivityADD->Location = System::Drawing::Point(402, 87);
			this->panelSelectedActivityADD->Name = L"panelSelectedActivityADD";
			this->panelSelectedActivityADD->Size = System::Drawing::Size(367, 288);
			this->panelSelectedActivityADD->TabIndex = 50;
			// 
			// buttonRemoveActivityADD
			// 
			this->buttonRemoveActivityADD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveActivityADD->BackColor = System::Drawing::Color::Lavender;
			this->buttonRemoveActivityADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRemoveActivityADD->Location = System::Drawing::Point(267, 256);
			this->buttonRemoveActivityADD->Name = L"buttonRemoveActivityADD";
			this->buttonRemoveActivityADD->Size = System::Drawing::Size(84, 25);
			this->buttonRemoveActivityADD->TabIndex = 30;
			this->buttonRemoveActivityADD->Text = L"Remove";
			this->buttonRemoveActivityADD->UseVisualStyleBackColor = false;
			// 
			// textBoxSelectedActivitylistADD
			// 
			this->textBoxSelectedActivitylistADD->BackColor = System::Drawing::Color::White;
			this->textBoxSelectedActivitylistADD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSelectedActivitylistADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxSelectedActivitylistADD->Location = System::Drawing::Point(20, 38);
			this->textBoxSelectedActivitylistADD->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSelectedActivitylistADD->Multiline = true;
			this->textBoxSelectedActivitylistADD->Name = L"textBoxSelectedActivitylistADD";
			this->textBoxSelectedActivitylistADD->ReadOnly = true;
			this->textBoxSelectedActivitylistADD->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSelectedActivitylistADD->Size = System::Drawing::Size(331, 213);
			this->textBoxSelectedActivitylistADD->TabIndex = 15;
			// 
			// labelSelectedActivityADD
			// 
			this->labelSelectedActivityADD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivityADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivityADD->Location = System::Drawing::Point(139, 7);
			this->labelSelectedActivityADD->Name = L"labelSelectedActivityADD";
			this->labelSelectedActivityADD->Size = System::Drawing::Size(94, 24);
			this->labelSelectedActivityADD->TabIndex = 14;
			this->labelSelectedActivityADD->Text = L"Selected";
			// 
			// comboBoxFoodADD
			// 
			this->comboBoxFoodADD->FormattingEnabled = true;
			this->comboBoxFoodADD->Location = System::Drawing::Point(225, 86);
			this->comboBoxFoodADD->Name = L"comboBoxFoodADD";
			this->comboBoxFoodADD->Size = System::Drawing::Size(147, 24);
			this->comboBoxFoodADD->TabIndex = 52;
			// 
			// labelSearchProdADD
			// 
			this->labelSearchProdADD->AutoSize = true;
			this->labelSearchProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchProdADD->Location = System::Drawing::Point(24, 87);
			this->labelSearchProdADD->Name = L"labelSearchProdADD";
			this->labelSearchProdADD->Size = System::Drawing::Size(176, 23);
			this->labelSearchProdADD->TabIndex = 51;
			this->labelSearchProdADD->Text = L"Search products:";
			this->labelSearchProdADD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddADD
			// 
			this->buttonAddADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddADD->Location = System::Drawing::Point(26, 168);
			this->buttonAddADD->Name = L"buttonAddADD";
			this->buttonAddADD->Size = System::Drawing::Size(66, 28);
			this->buttonAddADD->TabIndex = 55;
			this->buttonAddADD->Text = L"Add";
			this->buttonAddADD->UseVisualStyleBackColor = true;
			// 
			// labelGramsProdADD
			// 
			this->labelGramsProdADD->AutoSize = true;
			this->labelGramsProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGramsProdADD->Location = System::Drawing::Point(24, 125);
			this->labelGramsProdADD->Name = L"labelGramsProdADD";
			this->labelGramsProdADD->Size = System::Drawing::Size(79, 23);
			this->labelGramsProdADD->TabIndex = 54;
			this->labelGramsProdADD->Text = L"Grams:";
			this->labelGramsProdADD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxGramsProdADD
			// 
			this->textBoxGramsProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxGramsProdADD->Location = System::Drawing::Point(124, 126);
			this->textBoxGramsProdADD->Name = L"textBoxGramsProdADD";
			this->textBoxGramsProdADD->Size = System::Drawing::Size(74, 23);
			this->textBoxGramsProdADD->TabIndex = 53;
			// 
			// AddRecipeMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 473);
			this->Controls->Add(this->buttonAddADD);
			this->Controls->Add(this->labelGramsProdADD);
			this->Controls->Add(this->textBoxGramsProdADD);
			this->Controls->Add(this->comboBoxFoodADD);
			this->Controls->Add(this->labelSearchProdADD);
			this->Controls->Add(this->panelSelectedActivityADD);
			this->Controls->Add(this->buttonCancelNewRecipe);
			this->Controls->Add(this->buttonSaveNewRecipe);
			this->Controls->Add(this->labelAddNewRecipeItem);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AddRecipeMEALS";
			this->Text = L"AddRecipeMEALS";
			this->Load += gcnew System::EventHandler(this, &AddRecipeMEALS::AddRecipeMEALS_Load);
			this->panelSelectedActivityADD->ResumeLayout(false);
			this->panelSelectedActivityADD->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelAddNewRecipeItem_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void labelCaloriesproductadd_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void buttonCancelNewRecipe_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonSaveNewRecipe_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBoxAddNewRecipename->Text)) {
		MessageBox::Show("Enter recipe name");
		return;
	}
	String^ name = textBoxAddNewRecipename->Text->Trim();
	System::Decimal protein = numericUpDownProteinRecipe->Value;
	System::Decimal fat = numericUpDownFatRecipe->Value;
	System::Decimal carbs = numericUpDownCarbsRecipe->Value;
	String^ line = Environment::NewLine + name + ";" + protein.ToString("F1") + ";" + fat.ToString("F1") + ";" + carbs.ToString("F1") + Environment::NewLine;
	System::IO::File::AppendAllText("meals/meals_list.txt", line);
	MessageBox::Show("Recipe saved");
	this->Close();
}
private: System::Void AddRecipeMEALS_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
