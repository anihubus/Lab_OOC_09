#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
	int Patient_ID;
	string Patient_Name;
	int Age;
	int Consultation_Count;
	double Consultation_Fee;

public:
	Patient(int id, string name, int age, double fee, int consultations = 1) {
		Patient_ID = id;
		Patient_Name = name;
		Age = age;
		Consultation_Fee = fee;
		Consultation_Count = consultations;
	}

	double calculateConsultationCharges() const {
		return Consultation_Fee * Consultation_Count;
	}

	void display() const {
		cout << "\n[Patient Information]" << endl;
		cout << "Patient ID: " << Patient_ID << endl;
		cout << "Patient Name: " << Patient_Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Consultations: " << Consultation_Count << endl;
		cout << "Consultation Fee: Rs. " << Consultation_Fee << endl;
		cout << "Total Consultation Charges: Rs. "
			 << calculateConsultationCharges() << endl;
	}
};

int main() {
	Patient patient1(101, "Sujal", 20, 500.0, 2);
	Patient patient2(102, "Anita", 35, 750.0);

	patient1.display();
	patient2.display();

	return 0;
}
