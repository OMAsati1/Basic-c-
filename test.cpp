#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure to store employee information
struct Employee {
    string name;
    int code;
    string designation;
    int experience;
    double salary;
    string dob;
};

// Function prototypes
void insertEntry(vector<Employee> &employees);
void editEntry(vector<Employee> &employees);
void searchRecord(const vector<Employee> &employees);

int main() {
    vector<Employee> employees;

    // Menu
    cout << "Welcome to Employee Management System\n";
    cout << "1. Insert a new entry\n";
    cout << "2. Edit an old entry\n";
    cout << "3. Search a record\n";
    cout << "4. Exit\n";

    int choice;
    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertEntry(employees);
                break;
            case 2:
                editEntry(employees);
                break;
            case 3:
                searchRecord(employees);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to insert a new entry
void insertEntry(vector<Employee> &employees) {
    Employee emp;
    cout << "Enter employee name: ";
    cin >> emp.name;
    cout << "Enter employee code: ";
    cin >> emp.code;
    cout << "Enter employee designation: ";
    cin >> emp.designation;
    cout << "Enter employee experience: ";
    cin >> emp.experience;
    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cout << "Enter employee date of birth (DD-MM-YYYY): ";
    cin >> emp.dob;

    employees.push_back(emp);
    cout << "New entry inserted successfully.\n";
}

// Function to edit an existing entry
void editEntry(vector<Employee> &employees) {
    int code;
    cout << "Enter employee code to edit: ";
    cin >> code;

    bool found = false;
    for (size_t i = 0; i < employees.size(); ++i) {
        if (employees[i].code == code) {
            cout << "Enter new information for the employee:\n";
            cout << "Name: ";
            cin >> employees[i].name;
            cout << "Designation: ";
            cin >> employees[i].designation;
            cout << "Experience: ";
            cin >> employees[i].experience;
            cout << "Salary: ";
            cin >> employees[i].salary;
            cout << "Date of Birth (DD-MM-YYYY): ";
            cin >> employees[i].dob;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee with code " << code << " not found.\n";
    } else {
        cout << "Employee details updated successfully.\n";
    }
}

// Function to search for a record
void searchRecord(const vector<Employee> &employees) {
    int code;
    cout << "Enter employee code to search: ";
    cin >> code;

    bool found = false;
    for (size_t i = 0; i < employees.size(); ++i) {
        if (employees[i].code == code) {
            cout << "Employee found:\n";
            cout << "Name: " << employees[i].name << endl;
            cout << "Code: " << employees[i].code << endl;
            cout << "Designation: " << employees[i].designation << endl;
            cout << "Experience: " << employees[i].experience << " years" << endl;
            cout << "Salary: $" << employees[i].salary << endl;
            cout << "Date of Birth: " << employees[i].dob << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee with code " << code << " not found.\n";
    }
}