#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empID;
    string empName;
    float empSalary;
};

void AcceptData(Employee &e)
{
    cout << "Enter Employee ID : ";
    cin >> e.empID;

    cout << "Enter Employee Name : ";
    cin >> e.empName;

    cout << "Enter Employee Salary : ";
    cin >> e.empSalary;
}

void printData(Employee e)
{
    cout << "\nEmployee Details\n";

    cout << "Employee ID : " << e.empID << endl;
    cout << "Employee Name : " << e.empName << endl;
    cout << "Employee Salary : " << e.empSalary << endl;
}

int main()
{
    Employee e;

    AcceptData(e);

    printData(e);

    return 0;
}
