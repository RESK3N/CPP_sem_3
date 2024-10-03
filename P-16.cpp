//write a c++ program to count the number of faculty members in a department and display their details.
#include <iostream>
#include <string>
using namespace std;

// Structure to store faculty details
struct Faculty {
    string name;
    string designation;
    string department;
    int id;
};

int main() {
    int n;

    // Ask for the number of faculties
    cout << "Enter the number of faculties in the department: ";
    cin >> n;

    // Create an array of Faculty structures
    Faculty faculties[n];

    // Input details for each faculty member
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for faculty " << i + 1 << ":\n";
        cout << "Enter name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, faculties[i].name);

        cout << "Enter designation: ";
        getline(cin, faculties[i].designation);

        cout << "Enter department: ";
        getline(cin, faculties[i].department);

        cout << "Enter ID: ";
        cin >> faculties[i].id;
    }

    // Display the details of all faculties
    cout << "\nDetails of faculties in the department:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nFaculty " << i + 1 << ":\n";
        cout << "Name: " << faculties[i].name << endl;
        cout << "Designation: " << faculties[i].designation << endl;
        cout << "Department: " << faculties[i].department << endl;
        cout << "ID: " << faculties[i].id << endl;
    }

    // Display the total number of faculties
    cout << "\nTotal number of faculties: " << n << endl;

}
