#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void showDetails()
    {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c1; // Object
    c1.brand = "Audi";
    c1.speed = 180;

    c1.showDetails();
    return 0;
}
