#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employe number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int Employee::count = 1000; // defaul value is 0
int main()
{
    Employee shubham, mihir, jenish;
    // shubham.id;
    // shubham.count; // cannot do this as id  and count are private
    shubham.setdata();
    shubham.getdata();
    Employee::getcount();
    mihir.setdata();
    mihir.getdata();
    Employee::getcount();

    jenish.setdata();
    jenish.getdata();
    Employee::getcount();
    return 0;
}