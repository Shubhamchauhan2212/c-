#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int>:: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
          cout<< *it<<" ";
    }
    cout<<endl;
}

int main(){

    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    //Removeing elemnet from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);
    
    //Sorting the list
    // list1.sort();
    // display(list1);
    
    //reversing list
    list1.reverse();
    
    list<int> list2(3); //Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 After Merging:";
    display(list1);
    return 0;
}
