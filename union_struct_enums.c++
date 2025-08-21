#include <iostream>

using namespace std;

 typedef struct employee
{
    int eid;
    char favchar;
    float salary;
    
}ep;
union money
{
    int rice;
    char car;
    float pounds;
};



int main()
{
    enum meal {breakfast, lunch, dinner };
    meal m1 = lunch;
    cout<<(m1==1);

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    //.................union....................
    //  union money m1;
    //  m1.car = 'c';
    //  cout<<m1.car;

     //................structure................
    // ep  shubham;
    // ep  jayesh;
    // // ep  shubham;
    // shubham.eid = 23;
    // shubham.favchar = 's';
    // shubham.salary  = 50000; 

    // jayesh.eid = 22;
    // jayesh.favchar = 'j';
    // jayesh.salary  = 4000; 
    // cout<<"The value is "<<shubham.eid<<endl;
    // cout<<"The value is "<<shubham.favchar<<endl;
    // cout<<"The value is "<<shubham.salary<<endl;

    // cout<<"The value is "<<jayesh.eid<<endl;
    // cout<<"The value is "<<jayesh.favchar<<endl;
    // cout<<"The value is "<<jayesh.salary<<endl;

    
    return 0;
}