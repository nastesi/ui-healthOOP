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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Dock = System::Windows::Forms::DockStyle::Fill;
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
	private: System::Windows::Forms::Label^ labelProteinAddnewproduct;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownProtein;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownFat;
	private: System::Windows::Forms::Label^ labelFatAddnewProduct;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCarbs;
	private: System::Windows::Forms::Label^ labelCarbsAddNewproduct;
	private: System::Windows::Forms::Button^ buttonSaveNewProduct;
	private: System::Windows::Forms::Button^ buttonCancelNewProduct;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddNewProductMEALS::typeid));
			this->labelAddNewproductItem = (gcnew System::Windows::Forms::Label());
			this->labelNameNewFood = (gcnew System::Windows::Forms::Label());
			this->textBoxAddNewProductname = (gcnew System::Windows::Forms::TextBox());
			this->labelProteinAddnewproduct = (gcnew System::Windows::Forms::Label());
			this->numericUpDownProtein = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownFat = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelFatAddnewProduct = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCarbs = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelCarbsAddNewproduct = (gcnew System::Windows::Forms::Label());
			this->buttonSaveNewProduct = (gcnew System::Windows::Forms::Button());
			this->buttonCancelNewProduct = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProtein))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbs))->BeginInit();
			this->SuspendLayout();
			// 
			// labelAddNewproductItem
			// 
			this->labelAddNewproductItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelAddNewproductItem->AutoSize = true;
			this->labelAddNewproductItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddNewproductItem->Location = System::Drawing::Point(258, 34);
			this->labelAddNewproductItem->Name = L"labelAddNewproductItem";
			this->labelAddNewproductItem->Size = System::Drawing::Size(304, 40);
			this->labelAddNewproductItem->TabIndex = 0;
			this->labelAddNewproductItem->Text = L"Add new product";
			// 
			// labelNameNewFood
			// 
			this->labelNameNewFood->AutoSize = true;
			this->labelNameNewFood->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewFood->Location = System::Drawing::Point(40, 117);
			this->labelNameNewFood->Name = L"labelNameNewFood";
			this->labelNameNewFood->Size = System::Drawing::Size(76, 23);
			this->labelNameNewFood->TabIndex = 1;
			this->labelNameNewFood->Text = L"Name:";
			// 
			// textBoxAddNewProductname
			// 
			this->textBoxAddNewProductname->Location = System::Drawing::Point(134, 118);
			this->textBoxAddNewProductname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAddNewProductname->Name = L"textBoxAddNewProductname";
			this->textBoxAddNewProductname->Size = System::Drawing::Size(240, 22);
			this->textBoxAddNewProductname->TabIndex = 2;
			// 
			// labelProteinAddnewproduct
			// 
			this->labelProteinAddnewproduct->AutoSize = true;
			this->labelProteinAddnewproduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProteinAddnewproduct->Location = System::Drawing::Point(43, 166);
			this->labelProteinAddnewproduct->Name = L"labelProteinAddnewproduct";
			this->labelProteinAddnewproduct->Size = System::Drawing::Size(105, 23);
			this->labelProteinAddnewproduct->TabIndex = 36;
			this->labelProteinAddnewproduct->Text = L"Protein, g:";
			// 
			// numericUpDownProtein
			// 
			this->numericUpDownProtein->Location = System::Drawing::Point(169, 170);
			this->numericUpDownProtein->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDownProtein->Name = L"numericUpDownProtein";
			this->numericUpDownProtein->Size = System::Drawing::Size(163, 22);
			this->numericUpDownProtein->TabIndex = 37;
			// 
			// numericUpDownFat
			// 
			this->numericUpDownFat->Location = System::Drawing::Point(139, 212);
			this->numericUpDownFat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDownFat->Name = L"numericUpDownFat";
			this->numericUpDownFat->Size = System::Drawing::Size(163, 22);
			this->numericUpDownFat->TabIndex = 39;
			this->numericUpDownFat->ValueChanged += gcnew System::EventHandler(this, &AddNewProductMEALS::numericUpDown1_ValueChanged);
			// 
			// labelFatAddnewProduct
			// 
			this->labelFatAddnewProduct->AutoSize = true;
			this->labelFatAddnewProduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFatAddnewProduct->Location = System::Drawing::Point(43, 208);
			this->labelFatAddnewProduct->Name = L"labelFatAddnewProduct";
			this->labelFatAddnewProduct->Size = System::Drawing::Size(70, 23);
			this->labelFatAddnewProduct->TabIndex = 38;
			this->labelFatAddnewProduct->Text = L"Fat, g:";
			this->labelFatAddnewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::label1_Click);
			// 
			// numericUpDownCarbs
			// 
			this->numericUpDownCarbs->Location = System::Drawing::Point(167, 255);
			this->numericUpDownCarbs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDownCarbs->Name = L"numericUpDownCarbs";
			this->numericUpDownCarbs->Size = System::Drawing::Size(163, 22);
			this->numericUpDownCarbs->TabIndex = 41;
			// 
			// labelCarbsAddNewproduct
			// 
			this->labelCarbsAddNewproduct->AutoSize = true;
			this->labelCarbsAddNewproduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCarbsAddNewproduct->Location = System::Drawing::Point(43, 251);
			this->labelCarbsAddNewproduct->Name = L"labelCarbsAddNewproduct";
			this->labelCarbsAddNewproduct->Size = System::Drawing::Size(97, 23);
			this->labelCarbsAddNewproduct->TabIndex = 40;
			this->labelCarbsAddNewproduct->Text = L"Carbs, g:";
			// 
			// buttonSaveNewProduct
			// 
			this->buttonSaveNewProduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSaveNewProduct->Location = System::Drawing::Point(206, 352);
			this->buttonSaveNewProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSaveNewProduct->Name = L"buttonSaveNewProduct";
			this->buttonSaveNewProduct->Size = System::Drawing::Size(175, 41);
			this->buttonSaveNewProduct->TabIndex = 42;
			this->buttonSaveNewProduct->Text = L"Save";
			this->buttonSaveNewProduct->UseVisualStyleBackColor = true;
			this->buttonSaveNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::buttonSaveNewProduct_Click);
			// 
			// buttonCancelNewProduct
			// 
			this->buttonCancelNewProduct->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCancelNewProduct->Location = System::Drawing::Point(387, 352);
			this->buttonCancelNewProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonCancelNewProduct->Name = L"buttonCancelNewProduct";
			this->buttonCancelNewProduct->Size = System::Drawing::Size(175, 41);
			this->buttonCancelNewProduct->TabIndex = 43;
			this->buttonCancelNewProduct->Text = L"Cancel";
			this->buttonCancelNewProduct->UseVisualStyleBackColor = true;
			this->buttonCancelNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::button1_Click);
			// 
			// AddNewProductMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 473);
			this->Controls->Add(this->buttonCancelNewProduct);
			this->Controls->Add(this->buttonSaveNewProduct);
			this->Controls->Add(this->numericUpDownCarbs);
			this->Controls->Add(this->labelCarbsAddNewproduct);
			this->Controls->Add(this->numericUpDownFat);
			this->Controls->Add(this->labelFatAddnewProduct);
			this->Controls->Add(this->numericUpDownProtein);
			this->Controls->Add(this->labelProteinAddnewproduct);
			this->Controls->Add(this->textBoxAddNewProductname);
			this->Controls->Add(this->labelNameNewFood);
			this->Controls->Add(this->labelAddNewproductItem);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AddNewProductMEALS";
			this->Text = L"AddNewProductMEALS";
			this->Load += gcnew System::EventHandler(this, &AddNewProductMEALS::AddNewProductMEALS_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProtein))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbs))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonSaveNewProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBoxAddNewProductname->Text)) {
		MessageBox::Show("Enter product name");
		return;
	}
	String^ name = textBoxAddNewProductname->Text->Trim();
	double protein = Convert::ToDouble(numericUpDownProtein->Value);
	double fat = Convert::ToDouble(numericUpDownFat->Value);
	double carbs = Convert::ToDouble(numericUpDownCarbs->Value);
	String^ line = Environment::NewLine + name + ";" + protein.ToString("F1") + ";" + fat.ToString("F1") + ";" + carbs.ToString("F1") + Environment::NewLine;
	System::IO::File::AppendAllText("meals/ingredients_list.txt", line);
	MessageBox::Show("Product saved");
	this->Close();
}
private: System::Void buttonCancelNewProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void AddNewProductMEALS_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
