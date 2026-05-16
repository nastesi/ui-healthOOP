#include "ExcerciseControl.h"
using namespace uihealth;

	System::Void ExcerciseControl::buttonAddStrength_Click(System::Object^ sender, System::EventArgs^ e) {
		double series = Convert::ToDouble(numericUpDownSeries->Value);
		double reps = Convert::ToDouble(numericUpDownRepStrength->Value);
		double trainingWeight = Convert::ToDouble(numericUpDownWeightStr->Value);
		if (series <= 0 || reps <= 0) {
			MessageBox::Show("Series and repetitions must be more than 0");
			return;
		}
		String^ date = dateTimePickerActivity->Value.ToString("dd-MM-yyyy");
		double userWeight = 60.0;
		double duration = series * reps;
		ActivityInfo info = ActivityInfo::find_activity("Strength_Training");
		activity selectedActivity(info, duration, userWeight);
		double burnedCalories = selectedActivity.calculate();
		textBoxSelectedActivitylist->Text +=
			"Strength Training: " + " " +
			series.ToString("F0") + " sets, " +
			reps.ToString("F0") + " reps, " +
			trainingWeight.ToString("F1") + " kg, " +
			burnedCalories.ToString("F1") + " kcal\n";
		activity_rows_calendar += date + " " + "Strength Training" + " " + duration.ToString("F0") + " " + burnedCalories.ToString("F1") + "\n";
		activity_rows_save +=
			date + ";" +
			"Strength Training" + ";" +
			duration.ToString("F0") + ";" +
			"0;0;" +
			series.ToString("F0") + ";" +
			reps.ToString("F0") + ";" +
			trainingWeight.ToString("F1") + ";" +
			burnedCalories.ToString("F0") + "\n";
		numericUpDownSeries->Value = 0;
		numericUpDownRepStrength->Value = 0;
		numericUpDownWeightStr->Value = 0;
	}

	System::Void ExcerciseControl::buttonAddCardio_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(comboBoxCardioType->Text)) {
			MessageBox::Show("Choose cardio activity first");
			return;
		}
		double duration = Convert::ToDouble(numericUpDownDurCardio->Value);
		double distance = Convert::ToDouble(numericUpDownDistCardio->Value);
		double speed = Convert::ToDouble(numericUpDownSpeedCardio->Value);
		if (duration <= 0) {
			MessageBox::Show("Duration must be more than 0");
			return;
		}
		String^ date = dateTimePickerActivity->Value.ToString("dd-MM-yyyy");
		String^ activityName = comboBoxCardioType->Text;
		std::string activityNameStd = msclr::interop::marshal_as<std::string>(activityName);
		double userWeight = 60.0;
		ActivityInfo info = ActivityInfo::find_activity(activityNameStd);
		activity selectedActivity(info, duration, userWeight);
		double burnedCalories = selectedActivity.calculate();
		activity_rows_calendar += date + " " + activityName + " " + duration.ToString("F0") + " " + burnedCalories.ToString("F1") + "\n";
		textBoxSelectedActivitylist->Text +=
			activityName + " - " +
			duration.ToString("F0") + " min, " +
			distance.ToString("F1") + " km, " +
			speed.ToString("F1") + " km/h, " +
			burnedCalories.ToString("F1") + " kcal\n";
		activity_rows_save +=
			date + ";" + activityName + ";" + duration.ToString("F0") + ";" + distance.ToString("F1") + ";" + speed.ToString("F1") + ";" + "0;0;" +
			userWeight.ToString("F1") + ";" +
			burnedCalories.ToString("F1") + "\n";
		numericUpDownDurCardio->Value = 0;
		numericUpDownDistCardio->Value = 0;
		numericUpDownSpeedCardio->Value = 0;
	}

	System::Void ExcerciseControl::load_activities() {
		comboBoxCardioType->Items->Clear();
		if (!System::IO::File::Exists("activity/activity_MET.txt")) {
			MessageBox::Show("activity_MET.txt not found");
			return;
		}
		array<String^>^ lines = System::IO::File::ReadAllLines("activity/activity_MET.txt");
		for (int i = 0; i < lines->Length - 1; i++) {
			String^ line = lines[i];
			if (String::IsNullOrWhiteSpace(line)) {
				continue;
			}
			array<String^>^ parts = line->Split(' ');
			if (parts->Length >= 2) {
				String^ activityName = parts[0]->Trim();
				comboBoxCardioType->Items->Add(activityName);
			}
		}
	}

	System::Void ExcerciseControl::buttonSaveActivity_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(activity_rows_calendar)) {
			MessageBox::Show("Nothing to save");
			return;
		}
		array<String^>^ activityLines = activity_rows_calendar->Split(
			gcnew array<wchar_t>{ '\n' },
			System::StringSplitOptions::RemoveEmptyEntries
		);
		for each (String ^ line in activityLines) {
			add_to_calendar("[activity]", line);
		}
		MessageBox::Show("Activity saved");
		activity_rows_calendar = "";
		activity_rows_save = "";
		textBoxSelectedActivitylist->Text = "";
	}

	System::Void ExcerciseControl::add_to_calendar(String^ sectionName, String^ newLine) {
		String^ fileName = "calendar.txt";
		if (!System::IO::File::Exists(fileName)) {
			System::IO::File::WriteAllText(
				fileName,
				"[activity]\n[food]\n[calories]\n[mood]\n"
			);
		}
		array<String^>^ lines = System::IO::File::ReadAllLines(fileName);
		System::Collections::Generic::List<String^>^ result =
			gcnew System::Collections::Generic::List<String^>();
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

	System::String^ ExcerciseControl::remove_line(String^ text) {
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
		System::String^ result = "";
		for (int i = 0; i < lines->Length - 1; i++) {
			result += lines[i] + "\n";
		}
		return result;
	}

	System::Void ExcerciseControl::buttonRemoveActivity_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBoxSelectedActivitylist->Text)) {
			MessageBox::Show("Nothing to remove");
			return;
		}
		textBoxSelectedActivitylist->Text = remove_line(textBoxSelectedActivitylist->Text);
		activity_rows_calendar = remove_line(activity_rows_calendar);
		activity_rows_save = remove_line(activity_rows_save);
	}