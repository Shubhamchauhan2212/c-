#include <iostream>
using namespace std;
/*
syntax for multipal inheritance
class derivedC: visibilty-mode base1,visibility-mode base2
{
    class body of class derivedsC
}
*/
class base1
{
protected:
    int base1int;

public:
    void get_baseint1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void get_baseint2(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void get_baseint3(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The sum of these value  is " << base1int + base2int + base3int << endl;
    }
};
/*
the inherited derived class will look something like this:
Data member:
    base1int --> protected
    base29int --> protected

member function:
    set_base1int()--> public
    set_base2int()--> public
    set_show()--> public
*/
int main()
{
    derived shubham;
    shubham.get_baseint1(25);
    shubham.get_baseint2(5);
    shubham.get_baseint3(5);
    shubham.show();
    return 0;
}