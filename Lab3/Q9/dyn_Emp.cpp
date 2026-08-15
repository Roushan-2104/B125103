#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    int EmployeeID;
    char EmployeeName[50];
    float Salary;

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> EmployeeID;
        cout << "Enter Employee Name: ";
        cin.ignore();
        cin.getline(EmployeeName, 50);
        cout << "Enter Salary: ";
        cin >> Salary;
    }

    void display() {
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Salary: " << Salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee **employees = new Employee*[n];
    for (int i = 0; i < n; i++) {
        employees[i] = new Employee;
        cout << "Employee " << i+1 << " Details:" << endl;
        employees[i]->accept();
    }

    int highestSalary = 0;
    int highestIndex = -1;
    float totalSalary = 0;
    cout<<endl;
    cout<<"Employee Details:-";
    cout<<endl;
    for (int i = 0; i < n; i++) {
        employees[i]->display();
        totalSalary += employees[i]->Salary;
        if (employees[i]->Salary > highestSalary) {
            highestSalary = employees[i]->Salary;
            highestIndex = i;
        }
    }

    cout << "\nEmployee with highest salary:" << endl;
    employees[highestIndex]->display();

    cout << "\nAverage Salary: " << totalSalary / n << endl;

    for (int i = 0; i < n; i++) {
        delete employees[i];
        employees[i] = nullptr;
    }
    delete[] employees;
    employees = nullptr;
    return 0;
}
