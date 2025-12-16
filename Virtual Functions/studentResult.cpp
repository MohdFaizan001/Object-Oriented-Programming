#include <iostream>
using namespace std;

class Student {
protected:
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    virtual void calculateResult() = 0;
};

class Undergraduate : public Student {
public:
    Undergraduate(int m) : Student(m) {}
    void calculateResult() {
        cout << "Undergraduate Result: ";
        if (marks >= 40)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

class Postgraduate : public Student {
public:
    Postgraduate(int m) : Student(m) {}
    void calculateResult() {
        cout << "Postgraduate Result: ";
        if (marks >= 50)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() {
    Student* s;

    Undergraduate ug(45);
    Postgraduate pg(48);

    s = &ug;
    s->calculateResult();

    s = &pg;
    s->calculateResult();

    return 0;
}
