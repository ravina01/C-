/* 
Class and Object creation
Access modifiers - 
private - data - properties/ attributes and methods accessible inside class - by default its private and not accessible outside the class
- through setters and getters we can access private members 
public - data and methods are accessible to everyone
protected - data and methods accessible inside class and to its derived class - Inheritence
*/

#include<iostream>
#include<string>

using namespace std;

class Teacher
{
// private: //by default its private
private:
    double salary;
public:
    // properties/ attributes
    string name;
    string department;
    string subject;


    // methods/ memeber functions
    void changeDept(string newDept)
    {
        department = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    //getter
    double getSalary()
    {
        return salary;
    }

};

class Student
{
public:
    string name;
    int rollNum;
    int age;

};

int main()
{
    Teacher t1;
    t1.name = "Ravina";
    t1.department = "ECE";
    t1.subject = "Maths";
    // t1.salary = 27000;
    t1.setSalary(270000);

    std::cout << t1.name << std::endl;
    std::cout << t1.getSalary() << std::endl;
    return 0;
}