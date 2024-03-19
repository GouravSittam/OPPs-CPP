#include <iostream>
#include <iomanip>
using namespace std;

union Employee {
    int id;
    char name[20];
    char dob[11];
    char doj[11];
    float salary;
};

int main() {
    Employee emp;

    cout << "Enter employee ID: ";
    cin >> emp.id;

    cout << "Enter employee name: ";
    cin.ignore(); // Clear newline from the buffer
    cin.getline(emp.name, 20);

    cout << "Enter date of birth (dd/mm/yyyy): ";
    cin.getline(emp.dob, 11);

    cout << "Enter date of joining (dd/mm/yyyy): ";
    cin.getline(emp.doj, 11);

    cout << "Enter salary: ";
    cin >> emp.salary;

    cout << "ID : " << emp.id << endl;
    cout << "Name : " << emp.name << endl;
    cout << "DOB : " << emp.dob << endl;
    cout << "DOJ : " << emp.doj << endl;
    cout << fixed << setprecision(1);
    cout << "Salary : " << emp.salary << endl;

    return 0;
}

