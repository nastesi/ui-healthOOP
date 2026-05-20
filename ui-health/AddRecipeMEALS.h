#pragma once
#include "meals/nutritions.h"
#include <msclr/marshal_cppstd.h>

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
			LoadProductsFromFile();
			current_recipe = new Self_Cook("NewRecipe");
			recipe_total_grams = 0.0;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Dock = System::Windows::Forms::DockStyle::Fill;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddRecipeMEALS()
		{
			if (current_recipe != nullptr) {
				delete current_recipe;
				current_recipe = nullptr;
			}
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
	private: System::Windows::Forms::TextBox^ textBoxAddNewMeals;
	private: System::Windows::Forms::Label^ labelNameNewFood;
	private: System::ComponentModel::Container ^components;
	private: Self_Cook* current_recipe;
	private: double recipe_total_grams;

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
			this->textBoxAddNewMeals = (gcnew System::Windows::Forms::TextBox());
			this->labelNameNewFood = (gcnew System::Windows::Forms::Label());
			this->panelSelectedActivityADD->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelAddNewRecipeItem
			// 
			this->labelAddNewRecipeItem->AutoSize = true;
			this->labelAddNewRecipeItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddNewRecipeItem->Location = System::Drawing::Point(353, 32);
			this->labelAddNewRecipeItem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAddNewRecipeItem->Name = L"labelAddNewRecipeItem";
			this->labelAddNewRecipeItem->Size = System::Drawing::Size(390, 56);
			this->labelAddNewRecipeItem->TabIndex = 1;
			this->labelAddNewRecipeItem->Text = L"Add new recipe";
			this->labelAddNewRecipeItem->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::labelAddNewRecipeItem_Click);
			// 
			// buttonCancelNewRecipe
			// 
			this->buttonCancelNewRecipe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelNewRecipe->Location = System::Drawing::Point(525, 594);
			this->buttonCancelNewRecipe->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonCancelNewRecipe->Name = L"buttonCancelNewRecipe";
			this->buttonCancelNewRecipe->Size = System::Drawing::Size(241, 62);
			this->buttonCancelNewRecipe->TabIndex = 49;
			this->buttonCancelNewRecipe->Text = L"Cancel";
			this->buttonCancelNewRecipe->UseVisualStyleBackColor = true;
			this->buttonCancelNewRecipe->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonCancelNewRecipe_Click);
			// 
			// buttonSaveNewRecipe
			// 
			this->buttonSaveNewRecipe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveNewRecipe->Location = System::Drawing::Point(276, 594);
			this->buttonSaveNewRecipe->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonSaveNewRecipe->Name = L"buttonSaveNewRecipe";
			this->buttonSaveNewRecipe->Size = System::Drawing::Size(241, 62);
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
			this->panelSelectedActivityADD->Location = System::Drawing::Point(553, 130);
			this->panelSelectedActivityADD->Margin = System::Windows::Forms::Padding(4);
			this->panelSelectedActivityADD->Name = L"panelSelectedActivityADD";
			this->panelSelectedActivityADD->Size = System::Drawing::Size(505, 432);
			this->panelSelectedActivityADD->TabIndex = 50;
			// 
			// buttonRemoveActivityADD
			// 
			this->buttonRemoveActivityADD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveActivityADD->BackColor = System::Drawing::Color::Lavender;
			this->buttonRemoveActivityADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRemoveActivityADD->Location = System::Drawing::Point(367, 384);
			this->buttonRemoveActivityADD->Margin = System::Windows::Forms::Padding(4);
			this->buttonRemoveActivityADD->Name = L"buttonRemoveActivityADD";
			this->buttonRemoveActivityADD->Size = System::Drawing::Size(116, 38);
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
			this->textBoxSelectedActivitylistADD->Location = System::Drawing::Point(28, 57);
			this->textBoxSelectedActivitylistADD->Multiline = true;
			this->textBoxSelectedActivitylistADD->Name = L"textBoxSelectedActivitylistADD";
			this->textBoxSelectedActivitylistADD->ReadOnly = true;
			this->textBoxSelectedActivitylistADD->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSelectedActivitylistADD->Size = System::Drawing::Size(455, 320);
			this->textBoxSelectedActivitylistADD->TabIndex = 15;
			// 
			// labelSelectedActivityADD
			// 
			this->labelSelectedActivityADD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedActivityADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedActivityADD->Location = System::Drawing::Point(191, 10);
			this->labelSelectedActivityADD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectedActivityADD->Name = L"labelSelectedActivityADD";
			this->labelSelectedActivityADD->Size = System::Drawing::Size(129, 36);
			this->labelSelectedActivityADD->TabIndex = 14;
			this->labelSelectedActivityADD->Text = L"Selected";
			// 
			// comboBoxFoodADD
			// 
			this->comboBoxFoodADD->FormattingEnabled = true;
			this->comboBoxFoodADD->Location = System::Drawing::Point(287, 181);
			this->comboBoxFoodADD->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxFoodADD->Name = L"comboBoxFoodADD";
			this->comboBoxFoodADD->Size = System::Drawing::Size(201, 32);
			this->comboBoxFoodADD->TabIndex = 52;
			// 
			// labelSearchProdADD
			// 
			this->labelSearchProdADD->AutoSize = true;
			this->labelSearchProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchProdADD->Location = System::Drawing::Point(33, 182);
			this->labelSearchProdADD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearchProdADD->Name = L"labelSearchProdADD";
			this->labelSearchProdADD->Size = System::Drawing::Size(244, 34);
			this->labelSearchProdADD->TabIndex = 51;
			this->labelSearchProdADD->Text = L"Search products:";
			this->labelSearchProdADD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddADD
			// 
			this->buttonAddADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddADD->Location = System::Drawing::Point(36, 304);
			this->buttonAddADD->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddADD->Name = L"buttonAddADD";
			this->buttonAddADD->Size = System::Drawing::Size(91, 42);
			this->buttonAddADD->TabIndex = 55;
			this->buttonAddADD->Text = L"Add";
			this->buttonAddADD->UseVisualStyleBackColor = true;
			this->buttonAddADD->Click += gcnew System::EventHandler(this, &AddRecipeMEALS::buttonAddADD_Click);
			// 
			// labelGramsProdADD
			// 
			this->labelGramsProdADD->AutoSize = true;
			this->labelGramsProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGramsProdADD->Location = System::Drawing::Point(33, 240);
			this->labelGramsProdADD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelGramsProdADD->Name = L"labelGramsProdADD";
			this->labelGramsProdADD->Size = System::Drawing::Size(110, 34);
			this->labelGramsProdADD->TabIndex = 54;
			this->labelGramsProdADD->Text = L"Grams:";
			this->labelGramsProdADD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxGramsProdADD
			// 
			this->textBoxGramsProdADD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxGramsProdADD->Location = System::Drawing::Point(170, 241);
			this->textBoxGramsProdADD->Margin = System::Windows::Forms::Padding(4);
			this->textBoxGramsProdADD->Name = L"textBoxGramsProdADD";
			this->textBoxGramsProdADD->Size = System::Drawing::Size(100, 30);
			this->textBoxGramsProdADD->TabIndex = 53;
			// 
			// textBoxAddNewMeals
			// 
			this->textBoxAddNewMeals->Location = System::Drawing::Point(163, 131);
			this->textBoxAddNewMeals->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxAddNewMeals->Name = L"textBoxAddNewMeals";
			this->textBoxAddNewMeals->Size = System::Drawing::Size(328, 29);
			this->textBoxAddNewMeals->TabIndex = 57;
			// 
			// labelNameNewFood
			// 
			this->labelNameNewFood->AutoSize = true;
			this->labelNameNewFood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewFood->Location = System::Drawing::Point(34, 130);
			this->labelNameNewFood->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNameNewFood->Name = L"labelNameNewFood";
			this->labelNameNewFood->Size = System::Drawing::Size(106, 34);
			this->labelNameNewFood->TabIndex = 56;
			this->labelNameNewFood->Text = L"Name:";
			// 
			// AddRecipeMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 710);
			this->Controls->Add(this->textBoxAddNewMeals);
			this->Controls->Add(this->labelNameNewFood);
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
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
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
		if (String::IsNullOrWhiteSpace(textBoxAddNewMeals->Text)) {
			MessageBox::Show("Enter recipe name");
			return;
		}
		if (recipe_total_grams <= 0) {
			MessageBox::Show("Add at least one product to recipe");
			return;
		}
		String^ name = textBoxAddNewMeals->Text->Trim();
		std::string recipeNameStd = msclr::interop::marshal_as<std::string>(name);
		Self_Cook finalRecipe(recipeNameStd);
		double totalProteins = current_recipe->get_proteins();
		double totalFats = current_recipe->get_fats();
		double totalCarbs = current_recipe->get_carbs();
		double proteinsPer100 = totalProteins / recipe_total_grams * 100.0;
		double fatsPer100 = totalFats / recipe_total_grams * 100.0;
		double carbsPer100 = totalCarbs / recipe_total_grams * 100.0;
		String^ line = name + ";" + proteinsPer100.ToString("F1") + ";" + fatsPer100.ToString("F1") + ";" + carbsPer100.ToString("F1") + Environment::NewLine;
		System::IO::File::AppendAllText("meals/meals_list.txt", line);
		MessageBox::Show("Recipe saved");
		this->Close();
	}
	private: System::Void LoadProductsFromFile() {
		comboBoxFoodADD->Items->Clear();
		if (!System::IO::File::Exists("meals/ingredients_list.txt")) {
			MessageBox::Show("ingredients list not found");
			return;
		}
		array<String^>^ lines = System::IO::File::ReadAllLines("meals/ingredients_list.txt");
		for each(String ^ line in lines) {
			if (String::IsNullOrWhiteSpace(line)) {
				continue;
			}
			array<String^>^ parts = line->Split(';');
			if (parts->Length >= 4) {
				String^ productName = parts[0]->Trim();
				comboBoxFoodADD->Items->Add(productName);
			}
		}
	}
	private: System::Void buttonAddADD_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(comboBoxFoodADD->Text)) {
			MessageBox::Show("Choose product first");
			return;
		}
		if (String::IsNullOrWhiteSpace(textBoxGramsProdADD->Text)) {
			MessageBox::Show("Enter grams");
			return;
		}
		double grams = Convert::ToDouble(textBoxGramsProdADD->Text);
		if (grams <= 0) {
			MessageBox::Show("Grams must be more than 0");
			return;
		}
		String^ productName = comboBoxFoodADD->Text;
		std::string productNameStd = msclr::interop::marshal_as<std::string>(productName);
		current_recipe->add_ingredient(productNameStd, grams);
		recipe_total_grams += grams;
		textBoxSelectedActivitylistADD->AppendText(
			productName + " - " + grams.ToString("F0") + "g" + Environment::NewLine
		);
		textBoxGramsProdADD->Clear();
	}
	private: System::Void AddRecipeMEALS_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
