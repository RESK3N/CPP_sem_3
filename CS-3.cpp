#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string disease;
};

class HospitalManagementSystem {
    vector<Patient> patients;

public:
    void addPatient() {
        Patient p;
        cout << "Enter Patient ID: ";
        cin >> p.id;
        cin.ignore(); // Clear input buffer
        cout << "Enter Patient Name: ";
        getline(cin, p.name);
        cout << "Enter Patient Age: ";
        cin >> p.age;
        cin.ignore();
        cout << "Enter Disease: ";
        getline(cin, p.disease);
        patients.push_back(p);
        cout << "Patient added successfully!\n";
    }

    void displayPatients() {
        if (patients.empty()) {
            cout << "No patients to display.\n";
            return;
        }
        cout << "Patient Records:\n";
        for (const auto& p : patients) {
            cout << "ID: " << p.id << ", Name: " << p.name
                 << ", Age: " << p.age << ", Disease: " << p.disease << "\n";
        }
    }

    void searchPatient() {
        int searchId;
        cout << "Enter Patient ID to search: ";
        cin >> searchId;
        for (const auto& p : patients) {
            if (p.id == searchId) {
                cout << "Patient Found:\n";
                cout << "ID: " << p.id << ", Name: " << p.name
                     << ", Age: " << p.age << ", Disease: " << p.disease << "\n";
                return;
            }
        }
        cout << "Patient with ID " << searchId << " not found.\n";
    }
};

int main() {
    HospitalManagementSystem hms;
    int choice;

    while (true) {
        cout << "\nHospital Management System\n";
        cout << "1. Add Patient\n2. Display All Patients\n3. Search Patient\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hms.addPatient();
                break;
            case 2:
                hms.displayPatients();
                break;
            case 3:
                hms.searchPatient();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
