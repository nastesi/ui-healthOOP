#pragma once

namespace uihealth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddNewProductMEALS
	/// </summary>
	public ref class AddNewProductMEALS : public System::Windows::Forms::Form
	{
	public:
		AddNewProductMEALS(void)
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
		~AddNewProductMEALS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelAddNewproductItem;
	protected:
	private: System::Windows::Forms::Label^ labelNameNewFood;
	private: System::Windows::Forms::TextBox^ textBoxAddNewProductname;

	private: System::Windows::Forms::Label^ labelCaloriesproductadd;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCaloriesproductadd;
	private: System::Windows::Forms::Label^ labelProteinAddnewproduct;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownProtein;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownFat;

	private: System::Windows::Forms::Label^ labelFatAddnewProduct;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCarbs;
	private: System::Windows::Forms::Label^ labelCarbsAddNewproduct;
	private: System::Windows::Forms::Button^ buttonSaveNewProduct;
	private: System::Windows::Forms::Button^ buttonCancelNewProduct;



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
			this->labelAddNewproductItem = (gcnew System::Windows::Forms::Label());
			this->labelNameNewFood = (gcnew System::Windows::Forms::Label());
			this->textBoxAddNewProductname = (gcnew System::Windows::Forms::TextBox());
			this->labelCaloriesproductadd = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCaloriesproductadd = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelProteinAddnewproduct = (gcnew System::Windows::Forms::Label());
			this->numericUpDownProtein = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownFat = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelFatAddnewProduct = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCarbs = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCarbsAddNewproduct = (gcnew System::Windows::Forms::Label());
			this->buttonSaveNewProduct = (gcnew System::Windows::Forms::Button());
			this->buttonCancelNewProduct = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCaloriesproductadd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProtein))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbs))->BeginInit();
			this->SuspendLayout();
			// 
			// labelAddNewproductItem
			// 
			this->labelAddNewproductItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelAddNewproductItem->AutoSize = true;
			this->labelAddNewproductItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddNewproductItem->Location = System::Drawing::Point(228, 33);
			this->labelAddNewproductItem->Name = L"labelAddNewproductItem";
			this->labelAddNewproductItem->Size = System::Drawing::Size(333, 29);
			this->labelAddNewproductItem->TabIndex = 0;
			this->labelAddNewproductItem->Text = L"ADD NEW PRODUCT ITEM";
			// 
			// labelNameNewFood
			// 
			this->labelNameNewFood->AutoSize = true;
			this->labelNameNewFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewFood->Location = System::Drawing::Point(37, 87);
			this->labelNameNewFood->Name = L"labelNameNewFood";
			this->labelNameNewFood->Size = System::Drawing::Size(70, 25);
			this->labelNameNewFood->TabIndex = 1;
			this->labelNameNewFood->Text = L"Name:";
			// 
			// textBoxAddNewProductname
			// 
			this->textBoxAddNewProductname->Location = System::Drawing::Point(113, 90);
			this->textBoxAddNewProductname->Name = L"textBoxAddNewProductname";
			this->textBoxAddNewProductname->Size = System::Drawing::Size(240, 22);
			this->textBoxAddNewProductname->TabIndex = 2;
			// 
			// labelCaloriesproductadd
			// 
			this->labelCaloriesproductadd->AutoSize = true;
			this->labelCaloriesproductadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCaloriesproductadd->Location = System::Drawing::Point(37, 137);
			this->labelCaloriesproductadd->Name = L"labelCaloriesproductadd";
			this->labelCaloriesproductadd->Size = System::Drawing::Size(145, 25);
			this->labelCaloriesproductadd->TabIndex = 32;
			this->labelCaloriesproductadd->Text = L"Calories/100 g:";
			// 
			// numericUpDownCaloriesproductadd
			// 
			this->numericUpDownCaloriesproductadd->Location = System::Drawing::Point(191, 140);
			this->numericUpDownCaloriesproductadd->Name = L"numericUpDownCaloriesproductadd";
			this->numericUpDownCaloriesproductadd->Size = System::Drawing::Size(162, 22);
			this->numericUpDownCaloriesproductadd->TabIndex = 35;
			// 
			// labelProteinAddnewproduct
			// 
			this->labelProteinAddnewproduct->AutoSize = true;
			this->labelProteinAddnewproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProteinAddnewproduct->Location = System::Drawing::Point(40, 188);
			this->labelProteinAddnewproduct->Name = L"labelProteinAddnewproduct";
			this->labelProteinAddnewproduct->Size = System::Drawing::Size(100, 25);
			this->labelProteinAddnewproduct->TabIndex = 36;
			this->labelProteinAddnewproduct->Text = L"Protein, g:";
			// 
			// numericUpDownProtein
			// 
			this->numericUpDownProtein->Location = System::Drawing::Point(146, 191);
			this->numericUpDownProtein->Name = L"numericUpDownProtein";
			this->numericUpDownProtein->Size = System::Drawing::Size(162, 22);
			this->numericUpDownProtein->TabIndex = 37;
			// 
			// numericUpDownFat
			// 
			this->numericUpDownFat->Location = System::Drawing::Point(146, 233);
			this->numericUpDownFat->Name = L"numericUpDownFat";
			this->numericUpDownFat->Size = System::Drawing::Size(162, 22);
			this->numericUpDownFat->TabIndex = 39;
			this->numericUpDownFat->ValueChanged += gcnew System::EventHandler(this, &AddNewProductMEALS::numericUpDown1_ValueChanged);
			// 
			// labelFatAddnewProduct
			// 
			this->labelFatAddnewProduct->AutoSize = true;
			this->labelFatAddnewProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFatAddnewProduct->Location = System::Drawing::Point(40, 230);
			this->labelFatAddnewProduct->Name = L"labelFatAddnewProduct";
			this->labelFatAddnewProduct->Size = System::Drawing::Size(67, 25);
			this->labelFatAddnewProduct->TabIndex = 38;
			this->labelFatAddnewProduct->Text = L"Fat, g:";
			this->labelFatAddnewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::label1_Click);
			// 
			// numericUpDownCarbs
			// 
			this->numericUpDownCarbs->Location = System::Drawing::Point(146, 276);
			this->numericUpDownCarbs->Name = L"numericUpDownCarbs";
			this->numericUpDownCarbs->Size = System::Drawing::Size(162, 22);
			this->numericUpDownCarbs->TabIndex = 41;
			// 
			// labelCarbsAddNewproduct
			// 
			this->labelCarbsAddNewproduct->AutoSize = true;
			this->labelCarbsAddNewproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCarbsAddNewproduct->Location = System::Drawing::Point(40, 273);
			this->labelCarbsAddNewproduct->Name = L"labelCarbsAddNewproduct";
			this->labelCarbsAddNewproduct->Size = System::Drawing::Size(92, 25);
			this->labelCarbsAddNewproduct->TabIndex = 40;
			this->labelCarbsAddNewproduct->Text = L"Carbs, g:";
			// 
			// buttonSaveNewProduct
			// 
			this->buttonSaveNewProduct->Location = System::Drawing::Point(205, 352);
			this->buttonSaveNewProduct->Name = L"buttonSaveNewProduct";
			this->buttonSaveNewProduct->Size = System::Drawing::Size(175, 41);
			this->buttonSaveNewProduct->TabIndex = 42;
			this->buttonSaveNewProduct->Text = L"SAVE";
			this->buttonSaveNewProduct->UseVisualStyleBackColor = true;
			this->buttonSaveNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::buttonSaveNewProduct_Click);
			// 
			// buttonCancelNewProduct
			// 
			this->buttonCancelNewProduct->Location = System::Drawing::Point(386, 352);
			this->buttonCancelNewProduct->Name = L"buttonCancelNewProduct";
			this->buttonCancelNewProduct->Size = System::Drawing::Size(175, 41);
			this->buttonCancelNewProduct->TabIndex = 43;
			this->buttonCancelNewProduct->Text = L"CANCEL";
			this->buttonCancelNewProduct->UseVisualStyleBackColor = true;
			this->buttonCancelNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::button1_Click);
			// 
			// AddNewProductMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 473);
			this->Controls->Add(this->buttonCancelNewProduct);
			this->Controls->Add(this->buttonSaveNewProduct);
			this->Controls->Add(this->numericUpDownCarbs);
			this->Controls->Add(this->labelCarbsAddNewproduct);
			this->Controls->Add(this->numericUpDownFat);
			this->Controls->Add(this->labelFatAddnewProduct);
			this->Controls->Add(this->numericUpDownProtein);
			this->Controls->Add(this->labelProteinAddnewproduct);
			this->Controls->Add(this->numericUpDownCaloriesproductadd);
			this->Controls->Add(this->labelCaloriesproductadd);
			this->Controls->Add(this->textBoxAddNewProductname);
			this->Controls->Add(this->labelNameNewFood);
			this->Controls->Add(this->labelAddNewproductItem);
			this->Name = L"AddNewProductMEALS";
			this->Text = L"AddNewProductMEALS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCaloriesproductadd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProtein))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbs))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void buttonSaveNewProduct_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
