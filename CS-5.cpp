#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Base class for employee details
class Employee {
protected:
    int id;
    string name, department, role;
    float salary;

public:
    Employee() = default;
    Employee(int id, string name, string dept, string role, float salary)
            : id(id), name(name), department(dept), role(role), salary(salary) {}

    int getID() const { return id; }
    void display() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Dept: " << department
             << ", Role: " << role
             << ", Salary: " << salary << endl;
    }
    void modify(string newName, string newDept, string newRole, float newSalary) {
        name = newName; department = newDept; role = newRole; salary = newSalary;
    }
};

// Derived class for employee operations
class EmployeeManager : public Employee {
private:
    vector<Employee> employees;

    auto findEmployee(int id) {
        return find_if(employees.begin(), employees.end(),
                       [id](const Employee &e) { return e.getID() == id; });
    }

public:
    void addEmployee(int id, string name, string dept, string role, float salary) {
        if (findEmployee(id) != employees.end()) {
            cout << "Error: Employee ID already exists.\n";
            return;
        }
        employees.emplace_back(id, name, dept, role, salary);
        cout << "Employee added successfully!\n";
    }

    void displayAll() const {
        if (employees.empty()) {
            cout << "No employees to display.\n";
            return;
        }
        cout << "\nEmployee List:\n";
        for (const auto &e : employees)
            e.display();
    }

    void modifyEmployee(int id, string name, string dept, string role, float salary) {
        auto it = findEmployee(id);
        if (it != employees.end()) {
            it->modify(name, dept, role, salary);
            cout << "Employee details updated successfully.\n";
        } else {
            cout << "Error: Employee not found.\n";
        }
    }

    void deleteEmployee(int id) {
        auto it = findEmployee(id);
        if (it != employees.end()) {
            employees.erase(it);
            cout << "Employee deleted successfully.\n";
        } else {
            cout << "Error: Employee not found.\n";
        }
    }
};

// Main function
int main() {
    EmployeeManager manager;
    int choice, id;
    string name, dept, role;
    float salary;

    while (true) {
        cout << "\n1. Add Employee\n2. Display Employees\n3. Modify Employee\n4. Delete Employee\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID, Name, Dept, Role, Salary: ";
                cin >> id >> name >> dept >> role >> salary;
                manager.addEmployee(id, name, dept, role, salary);
                break;
            case 2:
                manager.displayAll();
                break;
            case 3:
                cout << "Enter ID to modify, followed by new Name, Dept, Role, Salary: ";
                cin >> id >> name >> dept >> role >> salary;
                manager.modifyEmployee(id, name, dept, role, salary);
                break;
            case 4:
                cout << "Enter ID to delete: ";
                cin >> id;
                manager.deleteEmployee(id);
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
