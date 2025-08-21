#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
    void chk_bin();
};

void binary ::read(void)
{
    cout << "Enter a binary  number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::display(void)
{
    cout << "Display binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary ::ones_compliment(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {

            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

// Oops classes and objects

// c++ --> initially called  c --> with classes by stroustroup
// calss --> extension of structure  (in c)
// structure had limitations
//        -members are public
//        -no methods
// classes --> structure + more
// classes --> can have methods and properties
// classes --> can make few members as private & few was public
//  structure in c++ are typedefed
//  you can declare objects along with the class declarion lke this

// class employee{
//    class defination
// } shuham, jayesh,mahesh;
// shubham.salary = 8 makes no sense if salary is private

// nesting of member functions