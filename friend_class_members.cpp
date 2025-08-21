#include <iostream>
using namespace std;

// forward declaratiosn 
 class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
};


class complex
{
    int a, b;
    friend int calculator ::sumrealcomplex(complex , complex );

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your naumber is " << a << " + " << b << "i" << endl;
    }
};
 int calculator :: sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);   
}

int main()
{

    return 0;
}