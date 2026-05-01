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
			this->numericUpDownCarbsRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCarbsAddRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownFatRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelFatAddRecipe = (gcnew System::Windows::Forms::Label());
			this->numericUpDownProteinRecipe = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelProteinAddRecipe = (gcnew System::Windows::Forms::Label());
			this->buttonCancelNewRecipe = (gcnew System::Windows::Forms::Button());
			this->buttonSaveNewRecipe = (gcnew System::Windows::Forms::Button());
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
			this->labelAddNewRecipeItem->Location = System::Drawing::Point(177, 23);
			this->labelAddNewRecipeItem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAddNewRecipeItem->Name = L"labelAddNewRecipeItem";
			this->labelAddNewRecipeItem->Size = System::Drawing::Size(241, 24);
			this->labelAddNewRecipeItem->TabIndex = 1;
			this->labelAddNewRecipeItem->Text = L"ADD NEW RECIPE ITEM";
			this->labelAddNewRecipeItem->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::labelAddNewRecipeItem_Click);
			// 
			// textBoxAddNewRecipename
			// 
			this->textBoxAddNewRecipename->Location = System::Drawing::Point(122, 72);
			this->textBoxAddNewRecipename->Margin = System::Windows::Forms::Padding(2);
			this->textBoxAddNewRecipename->Name = L"textBoxAddNewRecipename";
			this->textBoxAddNewRecipename->Size = System::Drawing::Size(181, 20);
			this->textBoxAddNewRecipename->TabIndex = 4;
			// 
			// labelNameNewRecipe
			// 
			this->labelNameNewRecipe->AutoSize = true;
			this->labelNameNewRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewRecipe->Location = System::Drawing::Point(38, 70);
			this->labelNameNewRecipe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNameNewRecipe->Name = L"labelNameNewRecipe";
			this->labelNameNewRecipe->Size = System::Drawing::Size(55, 20);
			this->labelNameNewRecipe->TabIndex = 3;
			this->labelNameNewRecipe->Text = L"Name:";
			// 
			// numericUpDownCarbsRecipe
			// 
			this->numericUpDownCarbsRecipe->Location = System::Drawing::Point(181, 197);
			this->numericUpDownCarbsRecipe->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownCarbsRecipe->Name = L"numericUpDownCarbsRecipe";
			this->numericUpDownCarbsRecipe->Size = System::Drawing::Size(122, 20);
			this->numericUpDownCarbsRecipe->TabIndex = 47;
			// 
			// labelCarbsAddRecipe
			// 
			this->labelCarbsAddRecipe->AutoSize = true;
			this->labelCarbsAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCarbsAddRecipe->Location = System::Drawing::Point(37, 197);
			this->labelCarbsAddRecipe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCarbsAddRecipe->Name = L"labelCarbsAddRecipe";
			this->labelCarbsAddRecipe->Size = System::Drawing::Size(72, 20);
			this->labelCarbsAddRecipe->TabIndex = 46;
			this->labelCarbsAddRecipe->Text = L"Carbs, g:";
			// 
			// numericUpDownFatRecipe
			// 
			this->numericUpDownFatRecipe->Location = System::Drawing::Point(181, 162);
			this->numericUpDownFatRecipe->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownFatRecipe->Name = L"numericUpDownFatRecipe";
			this->numericUpDownFatRecipe->Size = System::Drawing::Size(122, 20);
			this->numericUpDownFatRecipe->TabIndex = 45;
			// 
			// labelFatAddRecipe
			// 
			this->labelFatAddRecipe->AutoSize = true;
			this->labelFatAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFatAddRecipe->Location = System::Drawing::Point(37, 162);
			this->labelFatAddRecipe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelFatAddRecipe->Name = L"labelFatAddRecipe";
			this->labelFatAddRecipe->Size = System::Drawing::Size(54, 20);
			this->labelFatAddRecipe->TabIndex = 44;
			this->labelFatAddRecipe->Text = L"Fat, g:";
			// 
			// numericUpDownProteinRecipe
			// 
			this->numericUpDownProteinRecipe->Location = System::Drawing::Point(181, 128);
			this->numericUpDownProteinRecipe->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownProteinRecipe->Name = L"numericUpDownProteinRecipe";
			this->numericUpDownProteinRecipe->Size = System::Drawing::Size(122, 20);
			this->numericUpDownProteinRecipe->TabIndex = 43;
			// 
			// labelProteinAddRecipe
			// 
			this->labelProteinAddRecipe->AutoSize = true;
			this->labelProteinAddRecipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProteinAddRecipe->Location = System::Drawing::Point(37, 128);
			this->labelProteinAddRecipe->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelProteinAddRecipe->Name = L"labelProteinAddRecipe";
			this->labelProteinAddRecipe->Size = System::Drawing::Size(80, 20);
			this->labelProteinAddRecipe->TabIndex = 42;
			this->labelProteinAddRecipe->Text = L"Protein, g:";
			// 
			// buttonCancelNewRecipe
			// 
			this->buttonCancelNewRecipe->Location = System::Drawing::Point(287, 269);
			this->buttonCancelNewRecipe->Margin = System::Windows::Forms::Padding(2);
			this->buttonCancelNewRecipe->Name = L"buttonCancelNewRecipe";
			this->buttonCancelNewRecipe->Size = System::Drawing::Size(131, 33);
			this->buttonCancelNewRecipe->TabIndex = 49;
			this->buttonCancelNewRecipe->Text = L"Cancel";
			this->buttonCancelNewRecipe->UseVisualStyleBackColor = true;
			this->buttonCancelNewRecipe->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonCancelNewRecipe_Click);
			// 
			// buttonSaveNewRecipe
			// 
			this->buttonSaveNewRecipe->Location = System::Drawing::Point(151, 269);
			this->buttonSaveNewRecipe->Margin = System::Windows::Forms::Padding(2);
			this->buttonSaveNewRecipe->Name = L"buttonSaveNewRecipe";
			this->buttonSaveNewRecipe->Size = System::Drawing::Size(131, 33);
			this->buttonSaveNewRecipe->TabIndex = 48;
			this->buttonSaveNewRecipe->Text = L"Save";
			this->buttonSaveNewRecipe->UseVisualStyleBackColor = true;
			this->buttonSaveNewRecipe->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonSaveNewRecipe_Click);
			// 
			// AddRecipeMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 384);
			this->Controls->Add(this->buttonCancelNewRecipe);
			this->Controls->Add(this->buttonSaveNewRecipe);
			this->Controls->Add(this->numericUpDownCarbsRecipe);
			this->Controls->Add(this->labelCarbsAddRecipe);
			this->Controls->Add(this->numericUpDownFatRecipe);
			this->Controls->Add(this->labelFatAddRecipe);
			this->Controls->Add(this->numericUpDownProteinRecipe);
			this->Controls->Add(this->labelProteinAddRecipe);
			this->Controls->Add(this->textBoxAddNewRecipename);
			this->Controls->Add(this->labelNameNewRecipe);
			this->Controls->Add(this->labelAddNewRecipeItem);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddRecipeMEALS";
			this->Text = L"AddRecipeMEALS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbsRecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFatRecipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProteinRecipe))->EndInit();
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
};
}
