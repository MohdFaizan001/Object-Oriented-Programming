#include<iostream>
using namespace std;

class Marks {
private:
    int m1, m2, m3, m4, m5;

public:
    void input() {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    int totalMarks() {
        return m1 + m2 + m3 + m4 + m5;
    }

    float percentage(int total) {
        return (total / 5.0);
    }

    string grade(float per) {
        if (per >= 90) return "A+";
        else if (per >= 80) return "A";
        else if (per >= 70) return "B";
        else if (per >= 60) return "C";
        else if (per >= 50) return "D";
        else return "Fail";
    }

    void display(int total, float per, string g) {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << per << endl;
        cout << "Grade: " << g << endl;
    }
};

int main() {
    Marks s1;
    s1.input();

    int total = s1.totalMarks();
    float per = s1.percentage(total);
    string g = s1.grade(per);

    s1.display(total, per, g);

    return 0;
}
