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
			this->labelAddNewproductItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddNewproductItem->Location = System::Drawing::Point(221, 27);
			this->labelAddNewproductItem->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAddNewproductItem->Name = L"labelAddNewproductItem";
			this->labelAddNewproductItem->Size = System::Drawing::Size(170, 24);
			this->labelAddNewproductItem->TabIndex = 0;
			this->labelAddNewproductItem->Text = L"Add new product";
			// 
			// labelNameNewFood
			// 
			this->labelNameNewFood->AutoSize = true;
			this->labelNameNewFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNameNewFood->Location = System::Drawing::Point(30, 95);
			this->labelNameNewFood->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNameNewFood->Name = L"labelNameNewFood";
			this->labelNameNewFood->Size = System::Drawing::Size(55, 20);
			this->labelNameNewFood->TabIndex = 1;
			this->labelNameNewFood->Text = L"Name:";
			// 
			// textBoxAddNewProductname
			// 
			this->textBoxAddNewProductname->Location = System::Drawing::Point(89, 95);
			this->textBoxAddNewProductname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxAddNewProductname->Name = L"textBoxAddNewProductname";
			this->textBoxAddNewProductname->Size = System::Drawing::Size(181, 20);
			this->textBoxAddNewProductname->TabIndex = 2;
			// 
			// labelProteinAddnewproduct
			// 
			this->labelProteinAddnewproduct->AutoSize = true;
			this->labelProteinAddnewproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelProteinAddnewproduct->Location = System::Drawing::Point(32, 135);
			this->labelProteinAddnewproduct->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelProteinAddnewproduct->Name = L"labelProteinAddnewproduct";
			this->labelProteinAddnewproduct->Size = System::Drawing::Size(80, 20);
			this->labelProteinAddnewproduct->TabIndex = 36;
			this->labelProteinAddnewproduct->Text = L"Protein, g:";
			// 
			// numericUpDownProtein
			// 
			this->numericUpDownProtein->Location = System::Drawing::Point(116, 138);
			this->numericUpDownProtein->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDownProtein->Name = L"numericUpDownProtein";
			this->numericUpDownProtein->Size = System::Drawing::Size(122, 20);
			this->numericUpDownProtein->TabIndex = 37;
			// 
			// numericUpDownFat
			// 
			this->numericUpDownFat->Location = System::Drawing::Point(116, 172);
			this->numericUpDownFat->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDownFat->Name = L"numericUpDownFat";
			this->numericUpDownFat->Size = System::Drawing::Size(122, 20);
			this->numericUpDownFat->TabIndex = 39;
			this->numericUpDownFat->ValueChanged += gcnew System::EventHandler(this, &AddNewProductMEALS::numericUpDown1_ValueChanged);
			// 
			// labelFatAddnewProduct
			// 
			this->labelFatAddnewProduct->AutoSize = true;
			this->labelFatAddnewProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFatAddnewProduct->Location = System::Drawing::Point(32, 169);
			this->labelFatAddnewProduct->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelFatAddnewProduct->Name = L"labelFatAddnewProduct";
			this->labelFatAddnewProduct->Size = System::Drawing::Size(54, 20);
			this->labelFatAddnewProduct->TabIndex = 38;
			this->labelFatAddnewProduct->Text = L"Fat, g:";
			this->labelFatAddnewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::label1_Click);
			// 
			// numericUpDownCarbs
			// 
			this->numericUpDownCarbs->Location = System::Drawing::Point(116, 207);
			this->numericUpDownCarbs->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDownCarbs->Name = L"numericUpDownCarbs";
			this->numericUpDownCarbs->Size = System::Drawing::Size(122, 20);
			this->numericUpDownCarbs->TabIndex = 41;
			// 
			// labelCarbsAddNewproduct
			// 
			this->labelCarbsAddNewproduct->AutoSize = true;
			this->labelCarbsAddNewproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCarbsAddNewproduct->Location = System::Drawing::Point(32, 204);
			this->labelCarbsAddNewproduct->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCarbsAddNewproduct->Name = L"labelCarbsAddNewproduct";
			this->labelCarbsAddNewproduct->Size = System::Drawing::Size(72, 20);
			this->labelCarbsAddNewproduct->TabIndex = 40;
			this->labelCarbsAddNewproduct->Text = L"Carbs, g:";
			// 
			// buttonSaveNewProduct
			// 
			this->buttonSaveNewProduct->Location = System::Drawing::Point(154, 286);
			this->buttonSaveNewProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonSaveNewProduct->Name = L"buttonSaveNewProduct";
			this->buttonSaveNewProduct->Size = System::Drawing::Size(131, 33);
			this->buttonSaveNewProduct->TabIndex = 42;
			this->buttonSaveNewProduct->Text = L"Save";
			this->buttonSaveNewProduct->UseVisualStyleBackColor = true;
			this->buttonSaveNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::buttonSaveNewProduct_Click);
			// 
			// buttonCancelNewProduct
			// 
			this->buttonCancelNewProduct->Location = System::Drawing::Point(290, 286);
			this->buttonCancelNewProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonCancelNewProduct->Name = L"buttonCancelNewProduct";
			this->buttonCancelNewProduct->Size = System::Drawing::Size(131, 33);
			this->buttonCancelNewProduct->TabIndex = 43;
			this->buttonCancelNewProduct->Text = L"Cancel";
			this->buttonCancelNewProduct->UseVisualStyleBackColor = true;
			this->buttonCancelNewProduct->Click += gcnew System::EventHandler(this, &AddNewProductMEALS::button1_Click);
			// 
			// AddNewProductMEALS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 384);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"AddNewProductMEALS";
			this->Text = L"AddNewProductMEALS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProtein))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCarbs))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {}
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
};
}
