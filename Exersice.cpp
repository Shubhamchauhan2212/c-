#include <iostream>
#include <string>
using namespace std;
class cab
{
protected:
    string cabnumber;
    string drivername;

public:
    void setcabdetails(string number, string driver)
    {
        cabnumber = number;
        drivername = driver;
    }
    void displaycabdetails()
    {
        cout << "\nCab Details:" << endl;
        cout << "Cab number: " << cabnumber << endl;
        cout << "Driver: " << drivername << endl;
    }
};
class Luxarycab : public cab
{
protected:
    bool wifiavilabel;

public:
    void setluxarycabdetails(string number, string driver, bool wifi)
    {
        setcabdetails(number, driver);
        wifiavilabel = wifi;
    }
    void displayLuxarycabdetails()
    {
        cout << "\nLuxary cab:" << endl;
        displaycabdetails();
        cout << "wifi Available: " << (wifiavilabel ? "yes" : "no") << endl;
    }
};
int main()
{
    Luxarycab luxary;
    luxary.setluxarycabdetails("GJ 01 JP 3535", "shubham", false);
    luxary.displayLuxarycabdetails();
    return 0;
}