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
	private: System::Windows::Forms::TextBox^ textBoxAddNewRecipename;
	private: System::Windows::Forms::Label^ labelNameNewRecipe;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownGramsRecipe;

	private: System::Windows::Forms::Label^ labelGramsRecipeadd;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCaloriesrecipe;


	private: System::Windows::Forms::Label^ labelCaloriesNewRecipe;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCarbsRecipe;

	private: System::Windows::Forms::Label^ labelCarbsAddRecipe;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownFatRecipe;

	private: System::Windows::Forms::Label^ labelFatAddRecipe;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownProteinRecipe;

	private: System::Windows::Forms::Label^ labelProteinAddRecipe;
	private: System::Windows::Forms::Button^ buttonCancelNewRecipe;
	private: System::Windows::Forms::Button^ buttonSaveNewRecipe;


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
			this->labelAddNewRecipeItem = (gcnew System::Windows::Forms::Label());
			this->textBoxAddNewRecipename = (gcnew System::Windows::Forms::TextBox());
			this->labelNameNewRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownGramsRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelGramsRecipeadd = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCaloriesrecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCaloriesNewRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCarbsRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCarbsAddRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownFatRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelFatAddRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownProteinRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelProteinAddRecipe = (gcnew System::Windows::Forms::Label());
			this->buttonCancelNewRecipe = (gcnew System::Windows::Forms::Button());
			this->buttonSaveNewRecipe = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownGramsRecipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCaloriesrecipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbsRecipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFatRecipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProteinRecipe))->BeginInit();
			this->SuspendLayout();
			// 
			// labelAddNewRecipeItem
			// 
			this->labelAddNewRecipeItem->AutoSize = true;
			this->labelAddNewRecipeItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddNewRecipeItem->Location = System::Drawing::Point(236, 28);
			this->labelAddNewRecipeItem->Name = L"labelAddNewRecipeItem";
			this->labelAddNewRecipeItem->Size = System::Drawing::Size(301, 29);
			this->labelAddNewRecipeItem->TabIndex = 1;
			this->labelAddNewRecipeItem->Text = L"ADD NEW RECIPE ITEM";
			this->labelAddNewRecipeItem->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::labelAddNewRecipeItem_Click);
			// 
			// textBoxAddNewRecipename
			// 
			this->textBoxAddNewRecipename->Location = System::Drawing::Point(126, 89);
			this->textBoxAddNewRecipename->Name = L"textBoxAddNewRecipename";
			this->textBoxAddNewRecipename->Size = System::Drawing::Size(240, 22);
			this->textBoxAddNewRecipename->TabIndex = 4;
			// 
			// labelNameNewRecipe
			// 
			this->labelNameNewRecipe->AutoSize = true;
			this->labelNameNewRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewRecipe->Location = System::Drawing::Point(50, 86);
			this->labelNameNewRecipe->Name = L"labelNameNewRecipe";
			this->labelNameNewRecipe->Size = System::Drawing::Size(70, 25);
			this->labelNameNewRecipe->TabIndex = 3;
			this->labelNameNewRecipe->Text = L"Name:";
			// 
			// numericUpDownGramsRecipe
			// 
			this->numericUpDownGramsRecipe->Location = System::Drawing::Point(229, 130);
			this->numericUpDownGramsRecipe->Name = L"numericUpDownGramsRecipe";
			this->numericUpDownGramsRecipe->Size = System::Drawing::Size(162, 22);
			this->numericUpDownGramsRecipe->TabIndex = 37;
			// 
			// labelGramsRecipeadd
			// 
			this->labelGramsRecipeadd->AutoSize = true;
			this->labelGramsRecipeadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelGramsRecipeadd->Location = System::Drawing::Point(50, 127);
			this->labelGramsRecipeadd->Name = L"labelGramsRecipeadd";
			this->labelGramsRecipeadd->Size = System::Drawing::Size(173, 25);
			this->labelGramsRecipeadd->TabIndex = 36;
			this->labelGramsRecipeadd->Text = L"Grams per portion:";
			this->labelGramsRecipeadd->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::labelCaloriesproductadd_Click);
			// 
			// numericUpDownCaloriesrecipe
			// 
			this->numericUpDownCaloriesrecipe->Location = System::Drawing::Point(204, 175);
			this->numericUpDownCaloriesrecipe->Name = L"numericUpDownCaloriesrecipe";
			this->numericUpDownCaloriesrecipe->Size = System::Drawing::Size(162, 22);
			this->numericUpDownCaloriesrecipe->TabIndex = 39;
			// 
			// labelCaloriesNewRecipe
			// 
			this->labelCaloriesNewRecipe->AutoSize = true;
			this->labelCaloriesNewRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCaloriesNewRecipe->Location = System::Drawing::Point(50, 172);
			this->labelCaloriesNewRecipe->Name = L"labelCaloriesNewRecipe";
			this->labelCaloriesNewRecipe->Size = System::Drawing::Size(155, 25);
			this->labelCaloriesNewRecipe->TabIndex = 38;
			this->labelCaloriesNewRecipe->Text = L"Calories/portion:";
			// 
			// numericUpDownCarbsRecipe
			// 
			this->numericUpDownCarbsRecipe->Location = System::Drawing::Point(161, 300);
			this->numericUpDownCarbsRecipe->Name = L"numericUpDownCarbsRecipe";
			this->numericUpDownCarbsRecipe->Size = System::Drawing::Size(162, 22);
			this->numericUpDownCarbsRecipe->TabIndex = 47;
			// 
			// labelCarbsAddRecipe
			// 
			this->labelCarbsAddRecipe->AutoSize = true;
			this->labelCarbsAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCarbsAddRecipe->Location = System::Drawing::Point(55, 297);
			this->labelCarbsAddRecipe->Name = L"labelCarbsAddRecipe";
			this->labelCarbsAddRecipe->Size = System::Drawing::Size(92, 25);
			this->labelCarbsAddRecipe->TabIndex = 46;
			this->labelCarbsAddRecipe->Text = L"Carbs, g:";
			// 
			// numericUpDownFatRecipe
			// 
			this->numericUpDownFatRecipe->Location = System::Drawing::Point(161, 257);
			this->numericUpDownFatRecipe->Name = L"numericUpDownFatRecipe";
			this->numericUpDownFatRecipe->Size = System::Drawing::Size(162, 22);
			this->numericUpDownFatRecipe->TabIndex = 45;
			// 
			// labelFatAddRecipe
			// 
			this->labelFatAddRecipe->AutoSize = true;
			this->labelFatAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFatAddRecipe->Location = System::Drawing::Point(55, 254);
			this->labelFatAddRecipe->Name = L"labelFatAddRecipe";
			this->labelFatAddRecipe->Size = System::Drawing::Size(67, 25);
			this->labelFatAddRecipe->TabIndex = 44;
			this->labelFatAddRecipe->Text = L"Fat, g:";
			// 
			// numericUpDownProteinRecipe
			// 
			this->numericUpDownProteinRecipe->Location = System::Drawing::Point(161, 215);
			this->numericUpDownProteinRecipe->Name = L"numericUpDownProteinRecipe";
			this->numericUpDownProteinRecipe->Size = System::Drawing::Size(162, 22);
			this->numericUpDownProteinRecipe->TabIndex = 43;
			// 
			// labelProteinAddRecipe
			// 
			this->labelProteinAddRecipe->AutoSize = true;
			this->labelProteinAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProteinAddRecipe->Location = System::Drawing::Point(55, 212);
			this->labelProteinAddRecipe->Name = L"labelProteinAddRecipe";
			this->labelProteinAddRecipe->Size = System::Drawing::Size(100, 25);
			this->labelProteinAddRecipe->TabIndex = 42;
			this->labelProteinAddRecipe->Text = L"Protein, g:";
			// 
			// buttonCancelNewRecipe
			// 
			this->buttonCancelNewRecipe->Location = System::Drawing::Point(388, 352);
			this->buttonCancelNewRecipe->Name = L"buttonCancelNewRecipe";
			this->buttonCancelNewRecipe->Size = System::Drawing::Size(175, 41);
			this->buttonCancelNewRecipe->TabIndex = 49;
			this->buttonCancelNewRecipe->Text = L"CANCEL";
			this->buttonCancelNewRecipe->UseVisualStyleBackColor = true;
			// 
			// buttonSaveNewRecipe
			// 
			this->buttonSaveNewRecipe->Location = System::Drawing::Point(207, 352);
			this->buttonSaveNewRecipe->Name = L"buttonSaveNewRecipe";
			this->buttonSaveNewRecipe->Size = System::Drawing::Size(175, 41);
			this->buttonSaveNewRecipe->TabIndex = 48;
			this->buttonSaveNewRecipe->Text = L"SAVE";
			this->buttonSaveNewRecipe->UseVisualStyleBackColor = true;
			// 
			// AddRecipeMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 473);
			this->Controls->Add(this->buttonCancelNewRecipe);
			this->Controls->Add(this->buttonSaveNewRecipe);
			this->Controls->Add(this->numericUpDownCarbsRecipe);
			this->Controls->Add(this->labelCarbsAddRecipe);
			this->Controls->Add(this->numericUpDownFatRecipe);
			this->Controls->Add(this->labelFatAddRecipe);
			this->Controls->Add(this->numericUpDownProteinRecipe);
			this->Controls->Add(this->labelProteinAddRecipe);
			this->Controls->Add(this->numericUpDownCaloriesrecipe);
			this->Controls->Add(this->labelCaloriesNewRecipe);
			this->Controls->Add(this->numericUpDownGramsRecipe);
			this->Controls->Add(this->labelGramsRecipeadd);
			this->Controls->Add(this->textBoxAddNewRecipename);
			this->Controls->Add(this->labelNameNewRecipe);
			this->Controls->Add(this->labelAddNewRecipeItem);
			this->Name = L"AddRecipeMEALS";
			this->Text = L"AddRecipeMEALS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownGramsRecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCaloriesrecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbsRecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFatRecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProteinRecipe))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void labelAddNewRecipeItem_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void labelCaloriesproductadd_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
