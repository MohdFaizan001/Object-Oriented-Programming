#include <iostream>
using namespace std;

class Notification {
public:
    virtual void send() = 0;
};

class EmailNotification : public Notification {
public:
    void send() {
        cout << "Sending Email Notification..." << endl;
    }
};

class SMSNotification : public Notification {
public:
    void send() {
        cout << "Sending SMS Notification..." << endl;
    }
};

class AppNotification : public Notification {
public:
    void send() {
        cout << "Sending App Notification..." << endl;
    }
};

int main() {
    Notification* n;
    int choice;

    cout << "1. Email\n2. SMS\n3. App\nEnter choice: ";
    cin >> choice;

    EmailNotification e;
    SMSNotification s;
    AppNotification a;

    switch (choice) {
    case 1: n = &e; break;
    case 2: n = &s; break;
    case 3: n = &a; break;
    default:
        cout << "Invalid choice";
        return 0;
    }

    n->send();
    return 0;
}
