/*
Multiple Inheritance 
3. Multiple Inheritance - one child has 2 or more parent classes
Parent -> Child <- Parent
example - Student -> TA <- Techaer - TA inherits both classes student as well as Teacher

*/

#include<iostream>

using namespace std;

class Student
{
    public:
        string name;
        string rollNum;
};

class Teacher
{   
    public:
        string subject;
        double salary;

};
class TA: public Student, public Teacher
{
    // no property of TA
};
int main()
{
    TA t1;
    t1.name = "ravina";
    t1.subject = "robotics";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}
