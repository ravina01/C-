/*

4. Hierarchial Inheritance - single parent -> multiple child

Parent (Person)-> Child1(Student)
                -> Child2(Techer)

*/

#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;
};
class Teacher: public Person
{
    public:
        string subject;
        double salary;

};
class Student: public Person
{
    public:
        int rollNum;

};

int main()
{
    return 0;
}