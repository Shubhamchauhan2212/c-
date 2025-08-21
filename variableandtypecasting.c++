#include <iostream>

using namespace std;
int c = 10;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter th value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The sum is "<<::c;

    // float b = 45.36f;
    // long double f = 45.36l;
    // cout<<"the value of 45.36 is "<<sizeof(45.36)<<endl;
    // cout<<"the value of 45.36 is "<<sizeof(45.36f)<<endl;
    // cout<<"the value of 45.36 is "<<sizeof(45.36F)<<endl;
    // cout<<"the value of 45.36 is "<<sizeof(45.36l)<<endl;
    // cout<<"the value of 45.36 is "<<sizeof(45.36L)<<endl;
    // cout<<"the value of b is"<<b<<endl<<"the value of f is "<<f;  

    // *****************refrence variable***********
    // float x = 454;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y;

    // ****************typecasting******************
    int a = 48;
    float b = 25.25;
    cout<<"the value of a is"<<(float)a<<endl; 
    cout<<"the value of b is"<<(int)(b)<<endl; 
    int c = int(b);

    cout<<"the expression is"<<a + b<<endl;
    cout<<"the expression is"<<a + int(b)<<endl;
    return 0;
}