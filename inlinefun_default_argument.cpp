#include <iostream>

using namespace std;
// inline int product(int a, int b)
// {
//     // static  int c = 0;// the executes only
//     // c = c + 1;// next time this function is run the value of c will be retained  
//     return a*b;
// }

float moneyrecived(int currentmoney, float factor = 1.08)
{
    return currentmoney * factor;
}

int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"if you have "<<money<<" rs in your bank account, you will recive "<<moneyrecived(money)<< " rs after 1 year"<<endl;
    cout<<"For vip: if you have "<<money<<" rs in your bank account, you will recive "<<moneyrecived(money, 1.1)<< " rs after 1 year";


   return 0;
}