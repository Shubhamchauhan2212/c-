#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure Virtual Function
    virtual void draw() = 0;  

    // A normal function (optional)
    // void info() {
    //     cout << "This is a shape.\n";
    // }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle.\n";
    }
};

// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle.\n";
    }
};

int main() {
    // Shape s;  ❌ Error: cannot create object of abstract class
    
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();  // Output: Drawing a Circle.
    s2->draw();  // Output: Drawing a Rectangle.

    // delete s1;
    // delete s2;
    return 0;
}
