#include <iostream>
using namespace std;
/*
student --> test[Done]
student --> sports[Done]
test --> result [Done]
sports --> result[Done]
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, science;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        science = m2;
    }
    void print_marks(void)
    {
        cout << "Your obtained marks is:" << endl
        << "Maths: " << maths << endl
        << "science: " << science<< endl;
        
    } 
};
class Sports: virtual public Student{
    protected:
    float score;
       public:
       void set_score(float sc){
            score = sc;
       }
       void print_score(void){
        cout<<"Your PT score is: " <<score<< endl;
       }
};
class Result : public Test, public Sports{
    private:
    float Total;
    public:
    void display(void){
        Total = maths + science + score;
            print_number();
            print_marks();
            print_score();  
            cout<<"Tour Total score is: "<<score<<endl;
    }
};
int main()
{
    Result shubham;
    shubham.set_number(4210);
    shubham.set_marks(95.54, 90.84);
    shubham.set_score(5);
    return 0;
}