#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int marks[5] = {55, 45, 35, 25, 15};
    // mathmarks[0] = 12;
    // mathmarks[1] = 22;
    // mathmarks[2] = 32;
    // mathmarks[3] = 42;
    
    // int mathmarks[4];
    // cout << "the mathmarks" << endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;
    // cout << mathmarks[4] << endl;

    // cout << "these are marks";
    // marks[2] = 99; // you can change the value of array
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"the value of marks "<<i<< " is "  <<marks[i]<<endl;
    // }

    // while (i < 5)
    // {
    //     cout<<"the value of is "<<i<< "is"<<marks[i]<<endl;
    //     i++;
    // }
    // do
    // {
    //    cout<<"the value of marks  "<<i<< " is " <<marks[i]<<endl;
    //    i++;
    // } while (i < 5);
    

    // pointers in array

    int* p = marks; 
    cout<<*(p++);
    cout<<*(++p);
    // cout<<"The value of marks[0] is"<<*p<<endl;
    // cout<<"The value of marks[1] is"<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is"<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is"<<*(p+3)<<endl;
    // cout<<"The value of marks[4] is"<<*(p+4)<<endl;
        
    return 0;
}