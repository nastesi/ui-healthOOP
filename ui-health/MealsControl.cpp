#include "MealsControl.h"
using namespace uihealth;

System::Void MealsControl::LoadDishesFromFile() {
	comboBoxDishes->Items->Clear();
	if (!System::IO::File::Exists("meals/meals_list.txt")) {
		MessageBox::Show("File not found");
		return;
	}
	array<String^>^ lines = System::IO::File::ReadAllLines("meals/meals_list.txt");
	for each (String ^ line in lines) {
		if (String::IsNullOrWhiteSpace(line)) {
			continue;
		}
		array<String^>^ parts = line->Split(';');
		if (parts->Length > 0 && !String::IsNullOrWhiteSpace(parts[0])) {
			comboBoxDishes->Items->Add(parts[0]);
		}
	}
}
System::Void MealsControl::LoadProductsFromFile() {
	comboBoxFood->Items->Clear();
	if (!System::IO::File::Exists("meals/ingredients_list.txt")) {
		MessageBox::Show("ingredients_list.txt not found");
		return;
	}
	array<String^>^ lines = System::IO::File::ReadAllLines("meals/ingredients_list.txt");
	for each (String ^ line in lines) {
		if (String::IsNullOrWhiteSpace(line)) {
			continue;
		}
		array<String^>^ parts = line->Split(';');
		if (parts->Length >= 4) {
			String^ productName = parts[0]->Trim();
			comboBoxFood->Items->Add(productName);
		}
	}
}

System::Void MealsControl::buttonAdd1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(comboBoxFood->Text)) {
		MessageBox::Show("Choose product first");
		return;
	}
	if (String::IsNullOrWhiteSpace(textBoxGramsProducts->Text)) {
		MessageBox::Show("Enter grams");
		return;
	}
	String^ date = dateTimePicker1->Value.ToString("dd-MM-yyyy");
	String^ productName = comboBoxFood->Text;
	String^ gramsText = textBoxGramsProducts->Text;
	double grams = Convert::ToDouble(gramsText);
	if (grams <= 0) {
		MessageBox::Show("Grams must be more than 0");
		return;
	}
	std::string productNameStd = msclr::interop::marshal_as<std::string>(productName);
	Dishes product = Dishes::Ingredient(productNameStd);
	NutritionDecorator selectedProduct(&product, grams);
	double proteins = selectedProduct.get_proteins();
	double fats = selectedProduct.get_fats();
	double carbs = selectedProduct.get_carbs();
	double calories = selectedProduct.get_calories();
	textBoxSelectedFoodlist->Text +=
		productName + " - " + grams.ToString("F0") + " g\n";
	meals_rows += date + " " + productName + " " + grams.ToString("F0") + " " + proteins.ToString("F1") + " " + fats.ToString("F1") + " " + carbs.ToString("F1") + "\n";
	calories_rows += date + " " + calories.ToString("F1") + " kcal from " + productName + "\n";
	textBoxGramsProducts->Clear();
}

System::Void MealsControl::buttonAdd2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(comboBoxDishes->Text)) {
		MessageBox::Show("Choose dish first");
		return;
	}
	if (String::IsNullOrWhiteSpace(textBoxPortionsDishes->Text)) {
		MessageBox::Show("Enter grams");
		return;
	}
	String^ date = dateTimePicker1->Value.ToString("dd-MM-yyyy");
	String^ dishName = comboBoxDishes->Text;
	String^ gramsText = textBoxPortionsDishes->Text;
	double grams = Convert::ToDouble(gramsText);
	if (grams <= 0) {
		MessageBox::Show("Grams must be more than 0");
		return;
	}
	std::string dishNameStd = msclr::interop::marshal_as<std::string>(dishName);
	Dishes dish = Dishes::Dish(dishNameStd);
	NutritionDecorator selectedDish(&dish, grams);
	double proteins = selectedDish.get_proteins();
	double fats = selectedDish.get_fats();
	double carbs = selectedDish.get_carbs();
	double calories = selectedDish.get_calories();
	textBoxSelectedFoodlist->Text +=
		dishName + " - " + grams.ToString("F0") + " g\n";
	meals_rows += date + " " + dishName + " " + grams.ToString("F0") + proteins.ToString("F1") + " " + fats.ToString("F1") + " " + carbs.ToString("F1") + "\n";
	calories_rows += date + " " + calories.ToString("F1") + dishName + "\n";
	textBoxPortionsDishes->Clear();
}

System::Void MealsControl::buttonAdd4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBoxWaterAdd->Text)) {
		MessageBox::Show("Enter water amount");
		return;
	}
	String^ date = dateTimePicker1->Value.ToString("dd-MM-yyyy");
	double waterMl = Convert::ToDouble(textBoxWaterAdd->Text);
	if (waterMl <= 0) {
		MessageBox::Show("Water amount must be more than 0");
		return;
	}
	textBoxSelectedFoodlist->Text +=
		"Water - " + waterMl.ToString("F0") + " ml\n";
	meals_rows +=
		date + " Water " + waterMl.ToString("F0") + "ml " + "P:0.0 F:0.0 C:0.0\n";
		textBoxWaterAdd->Clear();
	}

System::Void MealsControl::buttonSaveMeal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(meals_rows) &&
		String::IsNullOrWhiteSpace(calories_rows)) {
		MessageBox::Show("Nothing to save");
		return;
	}
	array<String^>^ foodLines = meals_rows->Split(
		gcnew array<wchar_t>{ '\n' },
		System::StringSplitOptions::RemoveEmptyEntries
	);
	for each (String ^ line in foodLines) {
		add_to_calendar("[food]", line);
	}
	array<String^>^ calorieLines = calories_rows->Split(
		gcnew array<wchar_t>{ '\n' },
		System::StringSplitOptions::RemoveEmptyEntries
	);
	for each (String ^ line in calorieLines) {
		add_to_calendar("[calories]", line);
	}
	MessageBox::Show("Meal saved");
	meals_rows = "";
	calories_rows = "";
	textBoxSelectedFoodlist->Text = "";
}

System::Void MealsControl::buttonAddNewRecipe_Click(System::Object^ sender, System::EventArgs^ e) {
	AddRecipeMEALS^ addRecipeMEALS = gcnew AddRecipeMEALS();
	addRecipeMEALS->ShowDialog();
	LoadDishesFromFile();
}

System::Void MealsControl::buttonAddNewProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewProductMEALS^ addProductForm = gcnew AddNewProductMEALS();
	addProductForm->ShowDialog();
	LoadProductsFromFile();
}

System::Void MealsControl::add_to_calendar(String^ sectionName, String^ newLine) {
	String^ fileName = "calendar.txt";
	if (!System::IO::File::Exists(fileName)) {
		System::IO::File::WriteAllText(
			fileName,
			"[activity]\n[food]\n[calories]\n[mood]\n"
		);
	}
	array<String^>^ lines = System::IO::File::ReadAllLines(fileName);
	System::Collections::Generic::List<String^>^ result = gcnew System::Collections::Generic::List<String^>();
	bool added = false;
	bool insideTargetSection = false;
	for each (String ^ line in lines) {
		if (line == sectionName) {
			result->Add(line);
			insideTargetSection = true;
			continue;
		}
		if (insideTargetSection && line->StartsWith("[") && line->EndsWith("]")) {
			result->Add(newLine);
			added = true;
			insideTargetSection = false;
		}
		result->Add(line);
	} if (insideTargetSection && !added) {
		result->Add(newLine);
		added = true;
	} if (!added) {
		result->Add(sectionName);
		result->Add(newLine);
	}
	System::IO::File::WriteAllLines(fileName, result);
}

System::String^ MealsControl::remove_last_line(System::String^ text) {
	if (String::IsNullOrWhiteSpace(text)) {
		return "";
	}
	array<String^>^ lines = text->Split(
		gcnew array<wchar_t>{ '\n' },
		System::StringSplitOptions::RemoveEmptyEntries
	);
	if (lines->Length <= 1) {
		return "";
	}
	String^ result = "";
	for (int i = 0; i < lines->Length - 1; i++) {
		result += lines[i] + Environment::NewLine;
	}
	return result;
}

System::String^ MealsControl::get_last_line(System::String^ text) {
	if (String::IsNullOrWhiteSpace(text)) {
		return "";
	}
	array<String^>^ lines = text->Split(
		gcnew array<wchar_t>{ '\n' },
		System::StringSplitOptions::RemoveEmptyEntries
	);
	if (lines->Length == 0) {
		return "";
	}
	return lines[lines->Length - 1]->Trim();
}

System::Void MealsControl::buttonRemoveFood_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(textBoxSelectedFoodlist->Text)) {
		MessageBox::Show("Nothing to remove");
		return;
	}
	String^ lastVisibleLine = get_last_line(textBoxSelectedFoodlist->Text);
	textBoxSelectedFoodlist->Text = remove_last_line(textBoxSelectedFoodlist->Text);
	meals_rows = remove_last_line(meals_rows);
	if (!lastVisibleLine->StartsWith("Water")) {
		calories_rows = remove_last_line(calories_rows);
	}
}