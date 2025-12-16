#include <iostream>
using namespace std;

class Teacher {
protected:
    int teachingExp;
public:
    void getTeaching() {
        cout << "Enter teaching experience (years): ";
        cin >> teachingExp;
    }
};

class Researcher {
protected:
    int papers;
public:
    void getResearch() {
        cout << "Enter number of research papers: ";
        cin >> papers;
    }
};

class Faculty : public Teacher, public Researcher {
public:
    void display() {
        cout << "\nTeaching Experience: " << teachingExp
             << "\nResearch Papers: " << papers << endl;
    }
};

int main() {
    Faculty f;
    f.getTeaching();
    f.getResearch();
    f.display();
    return 0;
}
