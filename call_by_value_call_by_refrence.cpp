#include <iostream>

using namespace std;
int sum(int a, int b)
{
    int c = a+b;
    return c;
}
// this will ot swap number 
void swap (int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// call  by refernce using pointer
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
    // call  by refernce using c++ refernce vatiable
 void swapreferencevar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int x = 4, y = 5;
//    cout<<"the sum of 6 and 4 is "<<sum(6, 4);
    cout<<"the value of a is "<<x<<" and the value of b is "<<y<<endl;
    // swap(a, b); // this will not swap a and b
    // swappointer(&a, &b);// this will swap a and b using pointer refernce
    swapreferencevar(x, y);// this will swap a and b using c++ refernce variable
    cout<<"the value of a is "<<x<<" and the value of b is "<<y<<endl;
    return 0;
}