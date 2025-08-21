#include <iostream>

using namespace std;

// function prototype
// type function-name (arguments);
// int sum (int a, int b); //---> is acceptable
// int sum (int a,b); -----> is not acceptable
int sum(int, int); //------> is acceptable
// void g(void);   //------> is accepteable
void g();

int main()
{
    int a, b;
    g();
    cout <<"Enter the first number"<< endl;
    cin >> a;
    cout <<"Enter the second number"<< endl;
    cin >> b;
    // num1 and num 2 is actual parameters
    cout << "the sum is " << sum(a, b);
    return 0;
}
int sum(int a, int b)
{
    // formal parameters a and b will be taking value from actual parameters num1 and num2
    int c = a + b;
    return c;
}
void g()
{
    cout << "hello god morning\n ";
}