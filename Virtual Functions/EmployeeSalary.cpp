#include <iostream>
using namespace std;

class Employee {
protected:
    float salary;
public:
    virtual void calculateSalary() = 0;
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
public:
    void calculateSalary() {
        cout << "Salary per hour: 10000" << endl;
        salary = 8 * 10000;
        cout << "Salary: " << salary << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    void calculateSalary() {
        cout << "Salary per hour: 10000" << endl;
        salary = 4 * 10000;
        cout << "Salary: " << salary << endl;
    }
};

class Intern : public Employee {
public:
    void calculateSalary() {
        salary = 100;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee *ptr;
    int choice;

    cout << "Employee salary processing.\n";
    cout << "1. Full Time Employee\n";
    cout << "2. Part Time Employee\n";
    cout << "3. Intern\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        FullTimeEmployee f;
        ptr = &f;
        ptr->calculateSalary();
        break;
    }
    case 2: {
        PartTimeEmployee p;
        ptr = &p;
        ptr->calculateSalary();
        break;
    }
    case 3: {
        Intern i;
        ptr = &i;
        ptr->calculateSalary();
        break;
    }
    default:
        cout << "Invalid choice";
    }

    return 0;
}
