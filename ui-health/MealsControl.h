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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Dock = System::Windows::Forms::DockStyle::Fill;
			LoadDishesFromFile();
			LoadProductsFromFile();
			meals_rows = "";
			calories_rows = "";
			water_rows = "";
		}

	protected:
		~MealsControl()
		{
			if (components)
			{
				delete components;
			}
		}

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
	private: System::String^ water_rows;
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
			// labelDate2
			// 
			this->labelDate2->AutoSize = true;
			this->labelDate2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDate2->Location = System::Drawing::Point(73, 69);
			this->labelDate2->Margin = System::Windows::Forms::Padding(3, 0, 10, 0);
			this->labelDate2->Name = L"labelDate2";
			this->labelDate2->Size = System::Drawing::Size(64, 23);
			this->labelDate2->TabIndex = 8;
			this->labelDate2->Text = L"Date:";
			this->labelDate2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(150, 66);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(147, 28);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// labelSearchFood
			// 
			this->labelSearchFood->AutoSize = true;
			this->labelSearchFood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchFood->Location = System::Drawing::Point(72, 142);
			this->labelSearchFood->Name = L"labelSearchFood";
			this->labelSearchFood->Size = System::Drawing::Size(176, 23);
			this->labelSearchFood->TabIndex = 13;
			this->labelSearchFood->Text = L"Search products:";
			this->labelSearchFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxFood
			// 
			this->comboBoxFood->FormattingEnabled = true;
			this->comboBoxFood->Location = System::Drawing::Point(273, 141);
			this->comboBoxFood->Name = L"comboBoxFood";
			this->comboBoxFood->Size = System::Drawing::Size(147, 24);
			this->comboBoxFood->TabIndex = 15;
			// 
			// labelSearchDishes
			// 
			this->labelSearchDishes->AutoSize = true;
			this->labelSearchDishes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearchDishes->Location = System::Drawing::Point(72, 301);
			this->labelSearchDishes->Name = L"labelSearchDishes";
			this->labelSearchDishes->Size = System::Drawing::Size(147, 23);
			this->labelSearchDishes->TabIndex = 16;
			this->labelSearchDishes->Text = L"Search dishes:";
			this->labelSearchDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxDishes
			// 
			this->comboBoxDishes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDishes->FormattingEnabled = true;
			this->comboBoxDishes->Location = System::Drawing::Point(246, 300);
			this->comboBoxDishes->Name = L"comboBoxDishes";
			this->comboBoxDishes->Size = System::Drawing::Size(179, 25);
			this->comboBoxDishes->TabIndex = 17;
			// 
			// labelAddWater
			// 
			this->labelAddWater->AutoSize = true;
			this->labelAddWater->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddWater->Location = System::Drawing::Point(74, 462);
			this->labelAddWater->Name = L"labelAddWater";
			this->labelAddWater->Size = System::Drawing::Size(157, 23);
			this->labelAddWater->TabIndex = 20;
			this->labelAddWater->Text = L"Add water, ml:";
			this->labelAddWater->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxWaterAdd
			// 
			this->textBoxWaterAdd->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxWaterAdd->Location = System::Drawing::Point(255, 462);
			this->textBoxWaterAdd->Name = L"textBoxWaterAdd";
			this->textBoxWaterAdd->Size = System::Drawing::Size(75, 23);
			this->textBoxWaterAdd->TabIndex = 21;
			// 
			// buttonSaveMeal
			// 
			this->buttonSaveMeal->BackColor = System::Drawing::SystemColors::Window;
			this->buttonSaveMeal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveMeal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonSaveMeal->Location = System::Drawing::Point(801, 601);
			this->buttonSaveMeal->Name = L"buttonSaveMeal";
			this->buttonSaveMeal->Size = System::Drawing::Size(171, 45);
			this->buttonSaveMeal->TabIndex = 22;
			this->buttonSaveMeal->Text = L"Save";
			this->buttonSaveMeal->UseVisualStyleBackColor = false;
			this->buttonSaveMeal->Click += gcnew System::EventHandler(this, &MealsControl::buttonSaveMeal_Click);
			// 
			// panelSelectedFood
			// 
			this->panelSelectedFood->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelSelectedFood->Controls->Add(this->buttonRemoveFood);
			this->panelSelectedFood->Controls->Add(this->textBoxSelectedFoodlist);
			this->panelSelectedFood->Controls->Add(this->labelSelectedFood);
			this->panelSelectedFood->Location = System::Drawing::Point(585, 69);
			this->panelSelectedFood->Name = L"panelSelectedFood";
			this->panelSelectedFood->Size = System::Drawing::Size(387, 522);
			this->panelSelectedFood->TabIndex = 23;
			// 
			// buttonRemoveFood
			// 
			this->buttonRemoveFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRemoveFood->BackColor = System::Drawing::Color::Lavender;
			this->buttonRemoveFood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRemoveFood->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonRemoveFood->Location = System::Drawing::Point(272, 482);
			this->buttonRemoveFood->Name = L"buttonRemoveFood";
			this->buttonRemoveFood->Size = System::Drawing::Size(98, 27);
			this->buttonRemoveFood->TabIndex = 30;
			this->buttonRemoveFood->Text = L"Remove";
			this->buttonRemoveFood->UseVisualStyleBackColor = false;
			this->buttonRemoveFood->Click += gcnew System::EventHandler(this, &MealsControl::buttonRemoveFood_Click);
			// 
			// textBoxSelectedFoodlist
			// 
			this->textBoxSelectedFoodlist->BackColor = System::Drawing::Color::White;
			this->textBoxSelectedFoodlist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSelectedFoodlist->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxSelectedFoodlist->Location = System::Drawing::Point(15, 41);
			this->textBoxSelectedFoodlist->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBoxSelectedFoodlist->Multiline = true;
			this->textBoxSelectedFoodlist->Name = L"textBoxSelectedFoodlist";
			this->textBoxSelectedFoodlist->ReadOnly = true;
			this->textBoxSelectedFoodlist->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSelectedFoodlist->Size = System::Drawing::Size(355, 434);
			this->textBoxSelectedFoodlist->TabIndex = 15;
			// 
			// labelSelectedFood
			// 
			this->labelSelectedFood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelSelectedFood->AutoSize = true;
			this->labelSelectedFood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSelectedFood->Location = System::Drawing::Point(144, 10);
			this->labelSelectedFood->Name = L"labelSelectedFood";
			this->labelSelectedFood->Size = System::Drawing::Size(96, 23);
			this->labelSelectedFood->TabIndex = 14;
			this->labelSelectedFood->Text = L"Selected";
			this->labelSelectedFood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxGramsProducts
			// 
			this->textBoxGramsProducts->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxGramsProducts->Location = System::Drawing::Point(172, 185);
			this->textBoxGramsProducts->Name = L"textBoxGramsProducts";
			this->textBoxGramsProducts->Size = System::Drawing::Size(74, 23);
			this->textBoxGramsProducts->TabIndex = 24;
			// 
			// labelGramsProducts
			// 
			this->labelGramsProducts->AutoSize = true;
			this->labelGramsProducts->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGramsProducts->Location = System::Drawing::Point(72, 184);
			this->labelGramsProducts->Name = L"labelGramsProducts";
			this->labelGramsProducts->Size = System::Drawing::Size(79, 23);
			this->labelGramsProducts->TabIndex = 25;
			this->labelGramsProducts->Text = L"Grams:";
			this->labelGramsProducts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPortionsDishes
			// 
			this->textBoxPortionsDishes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPortionsDishes->Location = System::Drawing::Point(171, 347);
			this->textBoxPortionsDishes->Name = L"textBoxPortionsDishes";
			this->textBoxPortionsDishes->Size = System::Drawing::Size(74, 23);
			this->textBoxPortionsDishes->TabIndex = 26;
			// 
			// labelPortionsDishes
			// 
			this->labelPortionsDishes->AutoSize = true;
			this->labelPortionsDishes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPortionsDishes->Location = System::Drawing::Point(72, 347);
			this->labelPortionsDishes->Name = L"labelPortionsDishes";
			this->labelPortionsDishes->Size = System::Drawing::Size(79, 23);
			this->labelPortionsDishes->TabIndex = 27;
			this->labelPortionsDishes->Text = L"Grams:";
			this->labelPortionsDishes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAddNewProduct
			// 
			this->buttonAddNewProduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddNewProduct->Location = System::Drawing::Point(436, 141);
			this->buttonAddNewProduct->Name = L"buttonAddNewProduct";
			this->buttonAddNewProduct->Size = System::Drawing::Size(109, 26);
			this->buttonAddNewProduct->TabIndex = 30;
			this->buttonAddNewProduct->Text = L"+ add new";
			this->buttonAddNewProduct->UseVisualStyleBackColor = true;
			this->buttonAddNewProduct->Click += gcnew System::EventHandler(this, &MealsControl::buttonAddNewProduct_Click);
			// 
			// buttonAddNewRecipe
			// 
			this->buttonAddNewRecipe->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddNewRecipe->Location = System::Drawing::Point(436, 300);
			this->buttonAddNewRecipe->Name = L"buttonAddNewRecipe";
			this->buttonAddNewRecipe->Size = System::Drawing::Size(109, 26);
			this->buttonAddNewRecipe->TabIndex = 31;
			this->buttonAddNewRecipe->Text = L"+ add new";
			this->buttonAddNewRecipe->UseVisualStyleBackColor = true;
			this->buttonAddNewRecipe->Click += gcnew System::EventHandler(this, &MealsControl::buttonAddNewRecipe_Click);
			// 
			// buttonAdd1
			// 
			this->buttonAdd1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd1->Location = System::Drawing::Point(74, 227);
			this->buttonAdd1->Name = L"buttonAdd1";
			this->buttonAdd1->Size = System::Drawing::Size(66, 28);
			this->buttonAdd1->TabIndex = 32;
			this->buttonAdd1->Text = L"Add";
			this->buttonAdd1->UseVisualStyleBackColor = true;
			this->buttonAdd1->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd1_Click);
			// 
			// buttonAdd2
			// 
			this->buttonAdd2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd2->Location = System::Drawing::Point(76, 389);
			this->buttonAdd2->Name = L"buttonAdd2";
			this->buttonAdd2->Size = System::Drawing::Size(69, 27);
			this->buttonAdd2->TabIndex = 34;
			this->buttonAdd2->Text = L"Add";
			this->buttonAdd2->UseVisualStyleBackColor = true;
			this->buttonAdd2->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd2_Click);
			// 
			// buttonAdd4
			// 
			this->buttonAdd4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd4->Location = System::Drawing::Point(76, 503);
			this->buttonAdd4->Name = L"buttonAdd4";
			this->buttonAdd4->Size = System::Drawing::Size(69, 27);
			this->buttonAdd4->TabIndex = 36;
			this->buttonAdd4->Text = L"Add";
			this->buttonAdd4->UseVisualStyleBackColor = true;
			this->buttonAdd4->Click += gcnew System::EventHandler(this, &MealsControl::buttonAdd4_Click);
			// 
			// buttonBackMeals
			// 
			this->buttonBackMeals->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBackMeals->Location = System::Drawing::Point(878, 19);
			this->buttonBackMeals->Name = L"buttonBackMeals";
			this->buttonBackMeals->Size = System::Drawing::Size(94, 44);
			this->buttonBackMeals->TabIndex = 37;
			this->buttonBackMeals->Text = L"Home";
			this->buttonBackMeals->UseVisualStyleBackColor = true;
			this->buttonBackMeals->Click += gcnew System::EventHandler(this, &MealsControl::buttonBack_Click);
			// 
			// MealsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
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
			this->Name = L"MealsControl";
			this->Size = System::Drawing::Size(1000, 683);
			this->Load += gcnew System::EventHandler(this, &MealsControl::MealsControl_Load);
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
private: System::Void MealsControl_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void labelMealsControl_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}

