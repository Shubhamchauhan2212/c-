#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
int main()
{
    cout<<"the sum 5 and 5 is "<<sum(5,5)<<endl;
    cout<<"the sum 5 and 5 and 4 is "<<sum(5,5,4)<<endl;
    return 0;
}