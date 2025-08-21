#include <iostream>
int glo =10;
using namespace std;
void sum(){
    int a;
    cout<<glo;
}

int main()
{
    int glo = 9;
    glo = 84;
    int a = 15, b = 18;
    float pi = 3.17;
    char c = 'a';
    bool p = false;
    sum();
    cout<<glo<<p;
    // cout<<"the value of a is "<<a<<"\nthe vallue of b is "<< b ;
    // cout<<"\nthe value of pi is: "<<pi;
    // cout<<"\nthe value of c is: "<<c;

    return 0;
}