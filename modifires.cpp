#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;   // private variables

public:
    int d, e;      // public variables

    // declaration
    void setData(int a1, int b1, int c1);

    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// ✅ Correct function definition
void Employee::setData(int a1, int b1, int c1) {
    a = a1;   // semicolon was missing
    b = b1;
    c = c1;
}

int main()
{
    Employee shubham;
    shubham.d = 10;   // public, so directly accessible
    shubham.e = 20;
    // shubham.a = 44;   // this will throw error beacuse a is private 
    shubham.setData(1, 5, 6);   // private values set by function
    shubham.getData();          // prints all values
    return 0;
}
