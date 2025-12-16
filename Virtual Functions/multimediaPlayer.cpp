#include <iostream>
using namespace std;

class MediaFile {
public:
    virtual void play() = 0;
};

class Audio : public MediaFile {
public:
    void play() {
        cout << "Playing audio file..." << endl;
    }
};

class Video : public MediaFile {
public:
    void play() {
        cout << "Playing video file..." << endl;
    }
};

class Image : public MediaFile {
public:
    void play() {
        cout << "Displaying image..." << endl;
    }
};

int main() {
    MediaFile* media[3];

    Audio a;
    Video v;
    Image i;

    media[0] = &a;
    media[1] = &v;
    media[2] = &i;

    for (int j = 0; j < 3; j++) {
        media[j]->play();
    }
}
