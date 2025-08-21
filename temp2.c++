#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    static int count; // static data member

public:
    Student(int r) {
        rollNo = r;
        count++;   // increments for every object created
    }

    void show() {
        cout << "Roll No: " << rollNo << ", Student Count: " << count << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// define and initialize static data member outside class
int Student::count = 0;

int main() {
    Student s1(1), s2(2), s3(3),s4(4);

    s1.show();
    s2.show();
    s3.show();
    s4.show();

    // Accessing static data member using class name
    Student::showCount();

    return 0;
}
