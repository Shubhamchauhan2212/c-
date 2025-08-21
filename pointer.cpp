#include <iostream>

using namespace std;

int main()
{
// what is a poiinter ------>   data type which holds the address of other data types

    int a=5;
    int *b =&a;
    // &------> (Address of) opretars
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    // *------> (value at)dereferencing of opretars
    cout<<"the value at address b is: "<<*b<<endl;
    return 0;
}