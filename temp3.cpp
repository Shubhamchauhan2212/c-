#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Enter a opreters (+, -, *, /):";
    cin >> op;

    cout << "Enter two number: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+' : cout << "Result: " << num1 + num2; break;
    case '-' : cout << "Result: " << num1 - num2; break;
    case '*' : cout << "Result: " << num1 * num2; break;
    case '/' :
            if (num2 != 0) cout<<"Result: "<<num1/num2;
            else cout<<"Divison by zero is not allowed.";
            break;
        default: cout<<"Invalid operator";
    }
    cout<<endl;
    return 0;
}