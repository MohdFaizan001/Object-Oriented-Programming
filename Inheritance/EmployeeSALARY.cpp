#include <iostream>
using namespace std;


class Employee {
protected:
    int empID;
    string name;
    float basicSalary;

public:
    void inputEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};


class Salary : public Employee {
private:
    float hra, da, pf, gross, net;

public:
    void calculate() {
        hra = 0.20 * basicSalary;   
        da  = 0.10 * basicSalary;   
        pf  = 0.05 * basicSalary;   

        gross = basicSalary + hra + da;
        net   = gross - pf;
    }

    void displaySlip() {
        cout << "\n SALARY SLIP \n";
        cout << "Employee ID       : " << empID << endl;
        cout << "Employee Name     : " << name << endl;
        cout << "Basic Salary      : " << basicSalary << endl;
        cout << "HRA (20%)         : " << hra << endl;
        cout << "DA  (10%)         : " << da << endl;
        cout << "PF  Deduction (5%): " << pf << endl;
       
        cout << "Gross Salary      : " << gross << endl;
        cout << "Net Salary        : " << net << endl;
        
    }
};


int main() {
    Salary s1;

    s1.inputEmployee();
    s1.calculate();
    s1.displaySlip();

    return 0;
}
