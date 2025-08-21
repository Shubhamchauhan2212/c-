#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    // factorial of a number
    // 6! 6*5*4*3*2*1*= 720
    // 0! = 1 ny defination
    // 1! = 1 ny defination
    //n! = n* (n-1)! truue
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;

    cout<<"the factorial of "<<a<< " is "<<factorial(a)<<endl;

    return 0;
}