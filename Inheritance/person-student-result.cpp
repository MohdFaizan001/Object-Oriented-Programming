#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
protected:
    int roll;
public:
    void getStudent() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Result : public Student {
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter 3 subject marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void display() {
        int total = m1 + m2 + m3;
        float avg = total / 3.0;
        cout << "\nName: " << name
             << "\nAge: " << age
             << "\nRoll: " << roll
             << "\nTotal: " << total
             << "\nAverage: " << avg << endl;
    }
};

int main() {
    Result r;
    r.getPerson();
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}
