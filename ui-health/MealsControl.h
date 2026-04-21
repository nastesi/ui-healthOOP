#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uihealth {

	/// <summary>
	/// Summary for MealsControl
	/// </summary>
	public ref class MealsControl : public System::Windows::Forms::UserControl
	{
	public:
		MealsControl(void)
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
		~MealsControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelMealsControl;
	private: System::Windows::Forms::Label^ labelDate2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ labelMealtype;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ labelSearchFood;
	private: System::Windows::Forms::ComboBox^ comboBoxFood;
	private: System::Windows::Forms::Label^ labelSearchDishes;
	private: System::Windows::Forms::ComboBox^ comboBoxDishes;
	private: System::Windows::Forms::Label^ labelSearchOwnRecipes;
	private: System::Windows::Forms::ComboBox^ comboBoxRecipes;
	private: System::Windows::Forms::Label^ labelAddWater;
	private: System::Windows::Forms::TextBox^ textBoxWaterAdd;
	private: System::Windows::Forms::Button^ buttonSaveMeal;
	private: System::Windows::Forms::Panel^ panelSelectedFood;
	private: System::Windows::Forms::Label^ labelSelectedFood;
	private: System::Windows::Forms::Label^ labelSelectedFoodlist;
	private: System::Windows::Forms::TextBox^ textBoxGramsProducts;
	private: System::Windows::Forms::Label^ labelGramsProducts;
	private: System::Windows::Forms::TextBox^ textBoxPortionsDishes;
	private: System::Windows::Forms::Label^ labelPortionsDishes;
	private: System::Windows::Forms::Button^ buttonRemoveFood;
	private: System::Windows::Forms::Label^ labelPortionsRecipes;
	private: System::Windows::Forms::TextBox^ textBoxPortionsRecipes;
	private: System::Windows::Forms::Button^ buttonAddNewProduct;
	private: System::Windows::Forms::Button^ buttonAddNewRecipe;





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
			this->labelMealsControl = (gcnew System::Windows::Forms::Label());
			this->labelDate2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelMealtype = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchFood = (gcnew System::Windows::Forms::Label());
			this->comboBoxFood = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchDishes = (gcnew System::Windows::Forms::Label());
			this->comboBoxDishes = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchOwnRecipes = (gcnew System::Windows::Forms::Label());
			this->comboBoxRecipes = (gcnew System::Windows::Forms::ComboBox());
			this->labelAddWater = (gcnew System::Windows::Forms::Label());
			this->textBoxWaterAdd = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveMeal = (gcnew System::Windows::Forms::Button());
			this->panelSelectedFood = (gcnew System::Windows::Forms::Panel());
			this->labelSelectedFood = (gcnew System::Windows::Forms::Label());
			this->labelSelectedFoodlist = (gcnew System::Windows::Forms::Label());
			this->textBoxGramsProducts = (gcnew System::Windows::Forms::TextBox());
			this->labelGramsProducts = (gcnew System::Windows::Forms::Label());
			this->textBoxPortionsDishes = (gcnew System::Windows::Forms::TextBox());
			this->labelPortionsDishes = (gcnew System::Windows::Forms::Label());
			this->labelPortionsRecipes = (gcnew System::Windows::Forms::Label());
			this->textBoxPortionsRecipes = (gcnew System::Windows::Forms::TextBox());
			this->buttonRemoveFood = (gcnew System::Windows::Forms::Button());
			this->buttonAddNewProduct = (gcnew System::Windows::Forms::Button());
			this->buttonAddNewRecipe = (gcnew System::Windows::Forms::Button());
			this->panelSelectedFood->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelMealsControl
			// 
			this->labelMealsControl->AutoSize = true;
			this->labelMealsControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelMealsControl->Location = System::Drawing::Point(63, 36);
			this->labelMealsControl->Name = L"labelMealsControl";
			this->labelMealsControl->Size = System::Drawing::Size(128, 38);
			this->labelMealsControl->TabIndex = 1;
			this->labelMealsControl->Text = L"MEALS";
			this->labelMealsControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDate2
			// 
			this->labelDate2->AutoSize = true;
			this->labelDate2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate2->Location = System::Drawing::Point(66, 84);
			this->labelDate2->Name = L"labelDate2";
			this->labelDate2->Size = System::Drawing::Size(59, 25);
			this->labelDate2->TabIndex = 8;
			this->labelDate2->Text = L"Date:";
			this->labelDate2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(131, 87);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// labelMealtype
			// 
			this->labelMealtype->AutoSize = true;
			this->labelMealtype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMealtype->Location = System::Drawing::Point(471, 87);
			this->labelMealtype->Name = L"labelMealtype";
			this->labelMealtype->Size = System::Drawing::Size(103, 25);
			this->labelMealtype->TabIndex = 11;
			this->labelMealtype->Text = L"Meal type:";
			this->labelMealtype->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(592, 89);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MealsControl::comboBox1_SelectedIndexChanged);
			// 
			// labelSearchFood
			// 
			this->labelSearchFood->AutoSize = true;
			this->labelSearchFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchFood->Location = System::Drawing::Point(66, 139);
			this->labelSearchFood->Name = L"labelSearchFood";
			this->labelSearchFood->Size = System::Drawing::Size(161, 25);
			this->labelSearchFood->TabIndex = 13;
			this->labelSearchFood->Text = L"Search products:";
			this->labelSearchFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSearchFood->Click += gcnew System::EventHandler(this, &MealsControl::labelSearchFood_Click);
			// 
			// comboBoxFood
			// 
			this->comboBoxFood->FormattingEnabled = true;
			this->comboBoxFood->Location = System::Drawing::Point(233, 140);
			this->comboBoxFood->Name = L"comboBoxFood";
			this->comboBoxFood->Size = System::Drawing::Size(378, 24);
			this->comboBoxFood->TabIndex = 15;
			// 
			// labelSearchDishes
			// 
			this->labelSearchDishes->AutoSize = true;
			this->labelSearchDishes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchDishes->Location = System::Drawing::Point(66, 232);
			this->labelSearchDishes->Name = L"labelSearchDishes";
			this->labelSearchDishes->Size = System::Drawing::Size(143, 25);
			this->labelSearchDishes->TabIndex = 16;
			this->labelSearchDishes->Text = L"Search dishes:";
			this->labelSearchDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxDishes
			// 
			this->comboBoxDishes->FormattingEnabled = true;
			this->comboBoxDishes->Location = System::Drawing::Point(233, 232);
			this->comboBoxDishes->Name = L"comboBoxDishes";
			this->comboBoxDishes->Size = System::Drawing::Size(378, 24);
			this->comboBoxDishes->TabIndex = 17;
			// 
			// labelSearchOwnRecipes
			// 
			this->labelSearchOwnRecipes->AutoSize = true;
			this->labelSearchOwnRecipes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSearchOwnRecipes->Location = System::Drawing::Point(67, 319);
			this->labelSearchOwnRecipes->Name = L"labelSearchOwnRecipes";
			this->labelSearchOwnRecipes->Size = System::Drawing::Size(190, 25);
			this->labelSearchOwnRecipes->TabIndex = 18;
			this->labelSearchOwnRecipes->Text = L"Search own recipes:";
			this->labelSearchOwnRecipes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSearchOwnRecipes->Click += gcnew System::EventHandler(this, &MealsControl::labelSearchOwnRecipes_Click);
			// 
			// comboBoxRecipes
			// 
			this->comboBoxRecipes->FormattingEnabled = true;
			this->comboBoxRecipes->Location = System::Drawing::Point(260, 319);
			this->comboBoxRecipes->Name = L"comboBoxRecipes";
			this->comboBoxRecipes->Size = System::Drawing::Size(352, 24);
			this->comboBoxRecipes->TabIndex = 19;
			// 
			// labelAddWater
			// 
			this->labelAddWater->AutoSize = true;
			this->labelAddWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddWater->Location = System::Drawing::Point(72, 404);
			this->labelAddWater->Name = L"labelAddWater";
			this->labelAddWater->Size = System::Drawing::Size(120, 25);
			this->labelAddWater->TabIndex = 20;
			this->labelAddWater->Text = L"Add water, l:";
			this->labelAddWater->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxWaterAdd
			// 
			this->textBoxWaterAdd->Location = System::Drawing::Point(198, 406);
			this->textBoxWaterAdd->Name = L"textBoxWaterAdd";
			this->textBoxWaterAdd->Size = System::Drawing::Size(75, 22);
			this->textBoxWaterAdd->TabIndex = 21;
			// 
			// buttonSaveMeal
			// 
			this->buttonSaveMeal->Location = System::Drawing::Point(964, 673);
			this->buttonSaveMeal->Name = L"buttonSaveMeal";
			this->buttonSaveMeal->Size = System::Drawing::Size(175, 41);
			this->buttonSaveMeal->TabIndex = 22;
			this->buttonSaveMeal->Text = L"SAVE";
			this->buttonSaveMeal->UseVisualStyleBackColor = true;
			// 
			// panelSelectedFood
			// 
			this->panelSelectedFood->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panelSelectedFood->Controls->Add(this->buttonRemoveFood);
			this->panelSelectedFood->Controls->Add(this->labelSelectedFoodlist);
			this->panelSelectedFood->Controls->Add(this->labelSelectedFood);
			this->panelSelectedFood->Location = System::Drawing::Point(793, 140);
			this->panelSelectedFood->Name = L"panelSelectedFood";
			this->panelSelectedFood->Size = System::Drawing::Size(346, 504);
			this->panelSelectedFood->TabIndex = 23;
			// 
			// labelSelectedFood
			// 
			this->labelSelectedFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedFood->AutoSize = true;
			this->labelSelectedFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSelectedFood->Location = System::Drawing::Point(116, 12);
			this->labelSelectedFood->Name = L"labelSelectedFood";
			this->labelSelectedFood->Size = System::Drawing::Size(89, 25);
			this->labelSelectedFood->TabIndex = 14;
			this->labelSelectedFood->Text = L"Selected";
			this->labelSelectedFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSelectedFoodlist
			// 
			this->labelSelectedFoodlist->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedFoodlist->AutoSize = true;
			this->labelSelectedFoodlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedFoodlist->Location = System::Drawing::Point(26, 57);
			this->labelSelectedFoodlist->Name = L"labelSelectedFoodlist";
			this->labelSelectedFoodlist->Size = System::Drawing::Size(129, 25);
			this->labelSelectedFoodlist->TabIndex = 15;
			this->labelSelectedFoodlist->Text = L"Apple - 100 g";
			this->labelSelectedFoodlist->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSelectedFoodlist->Click += gcnew System::EventHandler(this, &MealsControl::label1_Click);
			// 
			// textBoxGramsProducts
			// 
			this->textBoxGramsProducts->Location = System::Drawing::Point(154, 185);
			this->textBoxGramsProducts->Name = L"textBoxGramsProducts";
			this->textBoxGramsProducts->Size = System::Drawing::Size(75, 22);
			this->textBoxGramsProducts->TabIndex = 24;
			this->textBoxGramsProducts->TextChanged += gcnew System::EventHandler(this, &MealsControl::textBoxGramsProducts_TextChanged);
			// 
			// labelGramsProducts
			// 
			this->labelGramsProducts->AutoSize = true;
			this->labelGramsProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGramsProducts->Location = System::Drawing::Point(67, 182);
			this->labelGramsProducts->Name = L"labelGramsProducts";
			this->labelGramsProducts->Size = System::Drawing::Size(76, 25);
			this->labelGramsProducts->TabIndex = 25;
			this->labelGramsProducts->Text = L"Grams:";
			this->labelGramsProducts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPortionsDishes
			// 
			this->textBoxPortionsDishes->Location = System::Drawing::Point(167, 278);
			this->textBoxPortionsDishes->Name = L"textBoxPortionsDishes";
			this->textBoxPortionsDishes->Size = System::Drawing::Size(75, 22);
			this->textBoxPortionsDishes->TabIndex = 26;
			this->textBoxPortionsDishes->TextChanged += gcnew System::EventHandler(this, &MealsControl::textBoxPortionsDishes_TextChanged);
			// 
			// labelPortionsDishes
			// 
			this->labelPortionsDishes->AutoSize = true;
			this->labelPortionsDishes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPortionsDishes->Location = System::Drawing::Point(72, 275);
			this->labelPortionsDishes->Name = L"labelPortionsDishes";
			this->labelPortionsDishes->Size = System::Drawing::Size(89, 25);
			this->labelPortionsDishes->TabIndex = 27;
			this->labelPortionsDishes->Text = L"Portions:";
			this->labelPortionsDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelPortionsRecipes
			// 
			this->labelPortionsRecipes->AutoSize = true;
			this->labelPortionsRecipes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPortionsRecipes->Location = System::Drawing::Point(72, 359);
			this->labelPortionsRecipes->Name = L"labelPortionsRecipes";
			this->labelPortionsRecipes->Size = System::Drawing::Size(89, 25);
			this->labelPortionsRecipes->TabIndex = 29;
			this->labelPortionsRecipes->Text = L"Portions:";
			this->labelPortionsRecipes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPortionsRecipes
			// 
			this->textBoxPortionsRecipes->Location = System::Drawing::Point(167, 362);
			this->textBoxPortionsRecipes->Name = L"textBoxPortionsRecipes";
			this->textBoxPortionsRecipes->Size = System::Drawing::Size(75, 22);
			this->textBoxPortionsRecipes->TabIndex = 28;
			// 
			// buttonRemoveFood
			// 
			this->buttonRemoveFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveFood->Location = System::Drawing::Point(258, 468);
			this->buttonRemoveFood->Name = L"buttonRemoveFood";
			this->buttonRemoveFood->Size = System::Drawing::Size(75, 23);
			this->buttonRemoveFood->TabIndex = 30;
			this->buttonRemoveFood->Text = L"Remove";
			this->buttonRemoveFood->UseVisualStyleBackColor = true;
			// 
			// buttonAddNewProduct
			// 
			this->buttonAddNewProduct->Location = System::Drawing::Point(631, 141);
			this->buttonAddNewProduct->Name = L"buttonAddNewProduct";
			this->buttonAddNewProduct->Size = System::Drawing::Size(100, 23);
			this->buttonAddNewProduct->TabIndex = 30;
			this->buttonAddNewProduct->Text = L"+ add new";
			this->buttonAddNewProduct->UseVisualStyleBackColor = true;
			// 
			// buttonAddNewRecipe
			// 
			this->buttonAddNewRecipe->Location = System::Drawing::Point(631, 320);
			this->buttonAddNewRecipe->Name = L"buttonAddNewRecipe";
			this->buttonAddNewRecipe->Size = System::Drawing::Size(100, 23);
			this->buttonAddNewRecipe->TabIndex = 31;
			this->buttonAddNewRecipe->Text = L"+ add new";
			this->buttonAddNewRecipe->UseVisualStyleBackColor = true;
			// 
			// MealsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonAddNewRecipe);
			this->Controls->Add(this->buttonAddNewProduct);
			this->Controls->Add(this->labelPortionsRecipes);
			this->Controls->Add(this->textBoxPortionsRecipes);
			this->Controls->Add(this->labelPortionsDishes);
			this->Controls->Add(this->textBoxPortionsDishes);
			this->Controls->Add(this->labelGramsProducts);
			this->Controls->Add(this->textBoxGramsProducts);
			this->Controls->Add(this->panelSelectedFood);
			this->Controls->Add(this->buttonSaveMeal);
			this->Controls->Add(this->textBoxWaterAdd);
			this->Controls->Add(this->labelAddWater);
			this->Controls->Add(this->comboBoxRecipes);
			this->Controls->Add(this->labelSearchOwnRecipes);
			this->Controls->Add(this->comboBoxDishes);
			this->Controls->Add(this->labelSearchDishes);
			this->Controls->Add(this->comboBoxFood);
			this->Controls->Add(this->labelSearchFood);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->labelMealtype);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->labelDate2);
			this->Controls->Add(this->labelMealsControl);
			this->Name = L"MealsControl";
			this->Size = System::Drawing::Size(1280, 800);
			this->panelSelectedFood->ResumeLayout(false);
			this->panelSelectedFood->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelSearchFood_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelSearchOwnRecipes_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBoxGramsProducts_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBoxPortionsDishes_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
