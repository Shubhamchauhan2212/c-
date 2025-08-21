#include<iostream>

using namespace std;

int main()
{
    /*Loops in c++
    1. for loop
    2. while loop
    3. do while loop 
    */

   //for loop
    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //Ex of infinite loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //while loop
    // int i = 1;
    // while (i<= 50)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // ex of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // do while loop
    int i=1;
    do {
        cout<<i<<endl;
        i++;
    } while(false);
    return 0;
}