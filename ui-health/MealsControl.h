#pragma once
#include <msclr/marshal_cppstd.h>
#include "meals/nutritions.h"
#include "AddRecipeMEALS.h"
#include "AddNewProductMEALS.h"
#include <string>
#include <fstream>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace uihealth {
	public ref class MealsControl : public System::Windows::Forms::UserControl
	{
	public:
		MealsControl(void)
		{
			InitializeComponent();
			LoadDishesFromFile();
			LoadProductsFromFile();
			meals_rows = "";
			calories_rows = "";
		}

	protected:
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
	private: System::Windows::Forms::Label^ labelSearchFood;
	private: System::Windows::Forms::ComboBox^ comboBoxFood;
	private: System::Windows::Forms::Label^ labelSearchDishes;
	private: System::Windows::Forms::ComboBox^ comboBoxDishes;
	private: System::Windows::Forms::Label^ labelAddWater;
	private: System::Windows::Forms::TextBox^ textBoxWaterAdd;
	private: System::Windows::Forms::Button^ buttonSaveMeal;
	private: System::Windows::Forms::Panel^ panelSelectedFood;
	private: System::Windows::Forms::Label^ labelSelectedFood;
	private: System::Windows::Forms::TextBox^ textBoxSelectedFoodlist;
	private: System::Windows::Forms::TextBox^ textBoxGramsProducts;
	private: System::Windows::Forms::Label^ labelGramsProducts;
	private: System::Windows::Forms::TextBox^ textBoxPortionsDishes;
	private: System::Windows::Forms::Label^ labelPortionsDishes;
	private: System::Windows::Forms::Button^ buttonRemoveFood;
	private: System::Windows::Forms::Button^ buttonAddNewProduct;
	private: System::Windows::Forms::Button^ buttonAddNewRecipe;
	private: System::Windows::Forms::Button^ buttonAdd1;
	private: System::Windows::Forms::Button^ buttonAdd2;
	private: System::Windows::Forms::Button^ buttonAdd4;
	private: System::Windows::Forms::Button^ buttonBackMeals;
	private: System::String^ meals_rows;
	private: System::String^ calories_rows;
	System::ComponentModel::Container ^components;
	
	public:
		System::EventHandler^ BackRequested;
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (BackRequested != nullptr)
			BackRequested(this, System::EventArgs::Empty);
	}
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->labelMealsControl = (gcnew System::Windows::Forms::Label());
			this->labelDate2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelSearchFood = (gcnew System::Windows::Forms::Label());
			this->comboBoxFood = (gcnew System::Windows::Forms::ComboBox());
			this->labelSearchDishes = (gcnew System::Windows::Forms::Label());
			this->comboBoxDishes = (gcnew System::Windows::Forms::ComboBox());
			this->labelAddWater = (gcnew System::Windows::Forms::Label());
			this->textBoxWaterAdd = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveMeal = (gcnew System::Windows::Forms::Button());
			this->panelSelectedFood = (gcnew System::Windows::Forms::Panel());
			this->buttonRemoveFood = (gcnew System::Windows::Forms::Button());
			this->textBoxSelectedFoodlist = (gcnew System::Windows::Forms::TextBox());
			this->labelSelectedFood = (gcnew System::Windows::Forms::Label());
			this->textBoxGramsProducts = (gcnew System::Windows::Forms::TextBox());
			this->labelGramsProducts = (gcnew System::Windows::Forms::Label());
			this->textBoxPortionsDishes = (gcnew System::Windows::Forms::TextBox());
			this->labelPortionsDishes = (gcnew System::Windows::Forms::Label());
			this->buttonAddNewProduct = (gcnew System::Windows::Forms::Button());
			this->buttonAddNewRecipe = (gcnew System::Windows::Forms::Button());
			this->buttonAdd1 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd2 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd4 = (gcnew System::Windows::Forms::Button());
			this->buttonBackMeals = (gcnew System::Windows::Forms::Button());
			this->panelSelectedFood->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelMealsControl
			// 
			this->labelMealsControl->AutoSize = true;
			this->labelMealsControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelMealsControl->Location = System::Drawing::Point(86, 54);
			this->labelMealsControl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMealsControl->Name = L"labelMealsControl";
			this->labelMealsControl->Size = System::Drawing::Size(148, 54);
			this->labelMealsControl->TabIndex = 1;
			this->labelMealsControl->Text = L"Meals";
			this->labelMealsControl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelDate2
			// 
			this->labelDate2->AutoSize = true;
			this->labelDate2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate2->Location = System::Drawing::Point(94, 135);
			this->labelDate2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDate2->Name = L"labelDate2";
			this->labelDate2->Size = System::Drawing::Size(82, 32);
			this->labelDate2->TabIndex = 8;
			this->labelDate2->Text = L"Date:";
			this->labelDate2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(189, 135);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(274, 29);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// labelSearchFood
			// 
			this->labelSearchFood->AutoSize = true;
			this->labelSearchFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchFood->Location = System::Drawing::Point(92, 209);
			this->labelSearchFood->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearchFood->Name = L"labelSearchFood";
			this->labelSearchFood->Size = System::Drawing::Size(228, 32);
			this->labelSearchFood->TabIndex = 13;
			this->labelSearchFood->Text = L"Search products:";
			this->labelSearchFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxFood
			// 
			this->comboBoxFood->FormattingEnabled = true;
			this->comboBoxFood->Location = System::Drawing::Point(337, 209);
			this->comboBoxFood->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBoxFood->Name = L"comboBoxFood";
			this->comboBoxFood->Size = System::Drawing::Size(517, 32);
			this->comboBoxFood->TabIndex = 15;
			// 
			// labelSearchDishes
			// 
			this->labelSearchDishes->AutoSize = true;
			this->labelSearchDishes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchDishes->Location = System::Drawing::Point(92, 402);
			this->labelSearchDishes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearchDishes->Name = L"labelSearchDishes";
			this->labelSearchDishes->Size = System::Drawing::Size(202, 32);
			this->labelSearchDishes->TabIndex = 16;
			this->labelSearchDishes->Text = L"Search dishes:";
			this->labelSearchDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxDishes
			// 
			this->comboBoxDishes->FormattingEnabled = true;
			this->comboBoxDishes->Location = System::Drawing::Point(337, 401);
			this->comboBoxDishes->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBoxDishes->Name = L"comboBoxDishes";
			this->comboBoxDishes->Size = System::Drawing::Size(517, 32);
			this->comboBoxDishes->TabIndex = 17;
			// 
			// labelAddWater
			// 
			this->labelAddWater->AutoSize = true;
			this->labelAddWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddWater->Location = System::Drawing::Point(94, 591);
			this->labelAddWater->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAddWater->Name = L"labelAddWater";
			this->labelAddWater->Size = System::Drawing::Size(194, 32);
			this->labelAddWater->TabIndex = 20;
			this->labelAddWater->Text = L"Add water, ml:";
			this->labelAddWater->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxWaterAdd
			// 
			this->textBoxWaterAdd->Location = System::Drawing::Point(301, 591);
			this->textBoxWaterAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxWaterAdd->Name = L"textBoxWaterAdd";
			this->textBoxWaterAdd->Size = System::Drawing::Size(101, 29);
			this->textBoxWaterAdd->TabIndex = 21;
			// 
			// buttonSaveMeal
			// 
			this->buttonSaveMeal->Location = System::Drawing::Point(1328, 990);
			this->buttonSaveMeal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonSaveMeal->Name = L"buttonSaveMeal";
			this->buttonSaveMeal->Size = System::Drawing::Size(240, 61);
			this->buttonSaveMeal->TabIndex = 22;
			this->buttonSaveMeal->Text = L"Save";
			this->buttonSaveMeal->UseVisualStyleBackColor = true;
			this->buttonSaveMeal->Click += gcnew System::EventHandler(this, &MealsControl::buttonSaveMeal_Click);
			// 
			// panelSelectedFood
			// 
			this->panelSelectedFood->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panelSelectedFood->Controls->Add(this->buttonRemoveFood);
			this->panelSelectedFood->Controls->Add(this->textBoxSelectedFoodlist);
			this->panelSelectedFood->Controls->Add(this->labelSelectedFood);
			this->panelSelectedFood->Location = System::Drawing::Point(1091, 210);
			this->panelSelectedFood->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelSelectedFood->Name = L"panelSelectedFood";
			this->panelSelectedFood->Size = System::Drawing::Size(477, 757);
			this->panelSelectedFood->TabIndex = 23;
			// 
			// buttonRemoveFood
			// 
			this->buttonRemoveFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveFood->Location = System::Drawing::Point(356, 702);
			this->buttonRemoveFood->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonRemoveFood->Name = L"buttonRemoveFood";
			this->buttonRemoveFood->Size = System::Drawing::Size(103, 35);
			this->buttonRemoveFood->TabIndex = 30;
			this->buttonRemoveFood->Text = L"Remove";
			this->buttonRemoveFood->UseVisualStyleBackColor = true;
			this->buttonRemoveFood->Click += gcnew System::EventHandler(this, &MealsControl::buttonRemoveFood_Click);
			// 
			// textBoxSelectedFoodlist
			// 
			this->textBoxSelectedFoodlist->BackColor = System::Drawing::Color::White;
			this->textBoxSelectedFoodlist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSelectedFoodlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxSelectedFoodlist->Location = System::Drawing::Point(28, 67);
			this->textBoxSelectedFoodlist->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBoxSelectedFoodlist->Multiline = true;
			this->textBoxSelectedFoodlist->Name = L"textBoxSelectedFoodlist";
			this->textBoxSelectedFoodlist->ReadOnly = true;
			this->textBoxSelectedFoodlist->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSelectedFoodlist->Size = System::Drawing::Size(443, 616);
			this->textBoxSelectedFoodlist->TabIndex = 15;
			// 
			// labelSelectedFood
			// 
			this->labelSelectedFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedFood->AutoSize = true;
			this->labelSelectedFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSelectedFood->Location = System::Drawing::Point(160, 18);
			this->labelSelectedFood->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectedFood->Name = L"labelSelectedFood";
			this->labelSelectedFood->Size = System::Drawing::Size(126, 32);
			this->labelSelectedFood->TabIndex = 14;
			this->labelSelectedFood->Text = L"Selected";
			this->labelSelectedFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxGramsProducts
			// 
			this->textBoxGramsProducts->Location = System::Drawing::Point(301, 277);
			this->textBoxGramsProducts->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxGramsProducts->Name = L"textBoxGramsProducts";
			this->textBoxGramsProducts->Size = System::Drawing::Size(101, 29);
			this->textBoxGramsProducts->TabIndex = 24;
			// 
			// labelGramsProducts
			// 
			this->labelGramsProducts->AutoSize = true;
			this->labelGramsProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGramsProducts->Location = System::Drawing::Point(92, 273);
			this->labelGramsProducts->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelGramsProducts->Name = L"labelGramsProducts";
			this->labelGramsProducts->Size = System::Drawing::Size(106, 32);
			this->labelGramsProducts->TabIndex = 25;
			this->labelGramsProducts->Text = L"Grams:";
			this->labelGramsProducts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPortionsDishes
			// 
			this->textBoxPortionsDishes->Location = System::Drawing::Point(301, 467);
			this->textBoxPortionsDishes->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPortionsDishes->Name = L"textBoxPortionsDishes";
			this->textBoxPortionsDishes->Size = System::Drawing::Size(101, 29);
			this->textBoxPortionsDishes->TabIndex = 26;
			// 
			// labelPortionsDishes
			// 
			this->labelPortionsDishes->AutoSize = true;
			this->labelPortionsDishes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPortionsDishes->Location = System::Drawing::Point(94, 467);
			this->labelPortionsDishes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPortionsDishes->Name = L"labelPortionsDishes";
			this->labelPortionsDishes->Size = System::Drawing::Size(106, 32);
			this->labelPortionsDishes->TabIndex = 27;
			this->labelPortionsDishes->Text = L"Grams:";
			this->labelPortionsDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddNewProduct
			// 
			this->buttonAddNewProduct->Location = System::Drawing::Point(873, 210);
			this->buttonAddNewProduct->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAddNewProduct->Name = L"buttonAddNewProduct";
			this->buttonAddNewProduct->Size = System::Drawing::Size(138, 35);
			this->buttonAddNewProduct->TabIndex = 30;
			this->buttonAddNewProduct->Text = L"+ add new";
			this->buttonAddNewProduct->UseVisualStyleBackColor = true;
			this->buttonAddNewProduct->Click += gcnew System::EventHandler(this, &MealsControl::buttonAddNewProduct_Click);
			// 
			// buttonAddNewRecipe
			// 
			this->buttonAddNewRecipe->Location = System::Drawing::Point(873, 401);
			this->buttonAddNewRecipe->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAddNewRecipe->Name = L"buttonAddNewRecipe";
			this->buttonAddNewRecipe->Size = System::Drawing::Size(138, 35);
			this->buttonAddNewRecipe->TabIndex = 31;
			this->buttonAddNewRecipe->Text = L"+ add new";
			this->buttonAddNewRecipe->UseVisualStyleBackColor = true;
			this->buttonAddNewRecipe->Click += gcnew System::EventHandler(this, &MealsControl::buttonAddNewRecipe_Click);
			// 
			// buttonAdd1
			// 
			this->buttonAdd1->Location = System::Drawing::Point(101, 327);
			this->buttonAdd1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAdd1->Name = L"buttonAdd1";
			this->buttonAdd1->Size = System::Drawing::Size(95, 37);
			this->buttonAdd1->TabIndex = 32;
			this->buttonAdd1->Text = L"Add";
			this->buttonAdd1->UseVisualStyleBackColor = true;
			this->buttonAdd1->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd1_Click);
			// 
			// buttonAdd2
			// 
			this->buttonAdd2->Location = System::Drawing::Point(101, 526);
			this->buttonAdd2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAdd2->Name = L"buttonAdd2";
			this->buttonAdd2->Size = System::Drawing::Size(95, 37);
			this->buttonAdd2->TabIndex = 34;
			this->buttonAdd2->Text = L"Add";
			this->buttonAdd2->UseVisualStyleBackColor = true;
			this->buttonAdd2->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd2_Click);
			// 
			// buttonAdd4
			// 
			this->buttonAdd4->Location = System::Drawing::Point(99, 650);
			this->buttonAdd4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAdd4->Name = L"buttonAdd4";
			this->buttonAdd4->Size = System::Drawing::Size(95, 37);
			this->buttonAdd4->TabIndex = 36;
			this->buttonAdd4->Text = L"Add";
			this->buttonAdd4->UseVisualStyleBackColor = true;
			this->buttonAdd4->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd4_Click);
			// 
			// buttonBackMeals
			// 
			this->buttonBackMeals->Location = System::Drawing::Point(1474, 54);
			this->buttonBackMeals->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonBackMeals->Name = L"buttonBackMeals";
			this->buttonBackMeals->Size = System::Drawing::Size(92, 61);
			this->buttonBackMeals->TabIndex = 37;
			this->buttonBackMeals->Text = L"Home";
			this->buttonBackMeals->UseVisualStyleBackColor = true;
			this->buttonBackMeals->Click += gcnew System::EventHandler(this, &MealsControl::buttonBack_Click);
			// 
			// MealsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonBackMeals);
			this->Controls->Add(this->buttonAdd4);
			this->Controls->Add(this->buttonAdd2);
			this->Controls->Add(this->buttonAdd1);
			this->Controls->Add(this->buttonAddNewRecipe);
			this->Controls->Add(this->buttonAddNewProduct);
			this->Controls->Add(this->labelPortionsDishes);
			this->Controls->Add(this->textBoxPortionsDishes);
			this->Controls->Add(this->labelGramsProducts);
			this->Controls->Add(this->textBoxGramsProducts);
			this->Controls->Add(this->panelSelectedFood);
			this->Controls->Add(this->buttonSaveMeal);
			this->Controls->Add(this->textBoxWaterAdd);
			this->Controls->Add(this->labelAddWater);
			this->Controls->Add(this->comboBoxDishes);
			this->Controls->Add(this->labelSearchDishes);
			this->Controls->Add(this->comboBoxFood);
			this->Controls->Add(this->labelSearchFood);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->labelDate2);
			this->Controls->Add(this->labelMealsControl);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MealsControl";
			this->Size = System::Drawing::Size(1600, 1070);
			this->panelSelectedFood->ResumeLayout(false);
			this->panelSelectedFood->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoadDishesFromFile();
	private: System::Void LoadProductsFromFile();
	private: System::Void buttonAdd1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAdd2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAdd4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSaveMeal_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddNewRecipe_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddNewProduct_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_to_calendar(System::String^ sectionName, System::String^ newLine);
	private: System::String^ remove_last_line(System::String^ text);
	private: System::String^ get_last_line(System::String^ text);
	private: System::Void buttonRemoveFood_Click(System::Object^ sender, System::EventArgs^ e);
};
}

