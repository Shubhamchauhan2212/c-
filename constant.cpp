#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // int a = 34;
    // cout<<"the value of a is:"<<a;
    // a = 45;
    // cout<<"the value of a is:"<<a;
    // constants in c++
    // const int a = 5.45;
    // cout<<"the value of a was:"<<a<<endl;
    // a = 54.59;//you will get an error beacuse a is  a constant
    // cout<<"the value of a was:"<<a<<endl;

    // manipulaters
    int a = 3, b = 45, c = 1223;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;

    cout<<"the value of a is: "<<setw(6)<<a<<endl;
    cout<<"the value of b is: "<<setw(6)<<b<<endl;
    cout<<"the value of c is: "<<setw(6)<<c<<endl;


    return 0;
}