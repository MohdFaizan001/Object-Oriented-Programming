#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Sports : virtual public Student {
protected:
    int sportsScore;
public:
    void getSports() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
};

class Academics : virtual public Student {
protected:
    int academicScore;
public:
    void getAcademics() {
        cout << "Enter academic score: ";
        cin >> academicScore;
    }
};

class Result : public Sports, public Academics {
public:
    void display() {
        cout << "\nRoll: " << roll
             << "\nFinal Score: " << sportsScore + academicScore << endl;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getSports();
    r.getAcademics();
    r.display();
    return 0;
}
