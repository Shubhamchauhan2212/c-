#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

    
public:
    void setid(void)
    {
        salary = 150;
        cout << "Enter the id of Employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of this employee is: " << id << endl;
    }
};
int main()
{
    // Employee shubham, mihir,dhruv,lovesh;
    // shubham.setid();
    // shubham.getid();
    Employee sc[4];
    for (int i = 1; i < 4; i++)
    {
        sc[i].setid();
        sc[i].getid();
    }

    return 0;
}