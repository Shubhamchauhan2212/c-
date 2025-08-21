// there are two types of header files:
//1. system header file : it is comes with the compiler
#include<iostream>
//2. user defined header file: it is the written by programmer
// #inlcude  "this.h"

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"opretaros in c++:"<<endl;
    cout<<"following are the types of opretaros in c++"<<endl;
    //arthmetic opretors
    cout<<"the value of a + b is"<<a+b<<endl;
    cout<<"the value of a - b is"<<a-b<<endl;
    cout<<"the value of a * b is"<<a*b<<endl;
    cout<<"the value of a / b is"<<a/b<<endl;
    cout<<"the value of a++ is"<<a++<<endl;
    cout<<"the value of a a--  is"<<a--<<endl;
    cout<<"the value of a ++a  is"<<++a<<endl;
    cout<<"the value of --a is"<<--a<<endl;

    // comparison operator
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;

    // logical opreters
    cout<<"logical opreters in c++"<<endl;
    cout<<"the value of ((a==b)&&(a<b))"<<( (a==b) && (a<b))<<endl;
    cout<<"the value of ((a==b)||(a<b))"<<( (a==b) || (a<b))<<endl;
    return 0;
}