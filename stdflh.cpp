#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // Function to get employee details from the user
    void getDetails() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to write employee details to file
    void writeToFile() {
        ofstream outFile("employees.txt", ios::app); // Append mode
        if (outFile.is_open()) {
            outFile << name << " " << id << " " << salary << endl;
            outFile.close();
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Static function to read employee details from file
    static void readFromFile() {
        ifstream inFile("employees.txt");
        if (inFile.is_open()) {
            string name;
            int id;
            double salary;
            cout << "Employee details:" << endl;
            while (inFile >> name >> id >> salary) {
                cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
            }
            inFile.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    emp.writeToFile();
    Employee::readFromFile();

    return 0;
}
