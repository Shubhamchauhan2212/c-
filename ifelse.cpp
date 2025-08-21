#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"********* ClubYparty**********"<<endl;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // selection control structure: if-else ladder
    // if ((age<18) && (age>0))
    // {
        //     cout<<"You can not came to my party"<<endl;
        // }
        // else if (age==18)
        // {
            //     cout<<"You are kid you can not come to my party"<<endl;
            // }
            // else if (age<1){
                //     cout<<"you are not yet born"<<endl;
                // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    
    // selection control structure: switch case control

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;

    case 22:
        cout<<"You are 22"<<endl;
        break;

    case 10:
        cout<<"You are 10"<<endl;
        break;
    
    default:
        cout<<"Not special casses"<<endl;
        break;
    }       
    cout<<"done with switch case"<<endl;
    return 0;
}