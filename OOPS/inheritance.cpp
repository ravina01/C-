/*
Inheritance - when properties and member functions of base class are passed on the derived class.
- code reusability
- modes of inheritance - depend of access modifiers- private, public, protected.  
- first the Parent classe's constrctor is called then derived class constructor is called
-  But in descructor first child classes memo is dealloctaed and then parent class memo is dealloctaed.
- Parameterized constructor are not called automatically, we have to call it explicitely 
- hence, when we create parameterized constructor of parent class - we have to make few chnages
- so what we do, we call parameterized constrctor of parent inside the derived class's constructor- dont mention data types.

Modes of Inheritance -
1. private
2. public
3. Protected

TYpes of Inheritance -
1. Single Inheritance: Parent -> Child
2. Multi -level Inheritance: Parent -> Parent -> Child - in  a single line
Person(name, age) -> student(rollNum) -> GradStudent(researchWork)
3. Multiple Inheritance - one child has 2 or more parent classes
Parent -> Child <- Parent
example - Student -> TA <- Techaer - TA inherits both classes student as well as Teacher
4. Hierarchial Inheritance - single parent -> multiple child

Parent (Person)-> Child1(Student)
                -> Child2(Techer)

5. Hybrid Inheritance - Mix of all

    
*/

#include<iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // Person()
    // {
    //     cout<<"Parent constructor"<<endl;
    // }


    ~Person()
    {
        cout<<"Parent Destructor"<<endl;
    }

    void getInfo()
    {
        cout<<"name = "<< name<<endl;
        cout<<"age = "<< age<<endl;
    }
};

class Student: public Person
{
    // name, age, roll no
    public:
        int rollNum;
    
    // before childs constructor we call parameterized constructor
    Student(string name, int age, int rollNum): Person(name, age)
    {
        this->rollNum = rollNum;
        cout<<"Child/ Derived Constructor"<<endl;
    }
    ~Student()
    {
        cout<<"Child/ Derived Destructor"<<endl;
    }
    void getInfo()
    {
        Person::getInfo();
        cout<<"roll no = "<< rollNum<<endl;
    }
};

class GradStudent: public Student
{
    public:
        string researchWork;

    GradStudent(string name, int age, int rollNum, string researchWork):Student(name, age, rollNum)
    {
        this->researchWork = researchWork;
    }
    void getInfo()
    {
        Student::getInfo();
        cout<<"researchWork = "<< researchWork<<endl;
    }
};
int main()
{
    Student s1("Ravina", 27, 90);
    // s1.age = 21;
    // s1.name = "ravina";
    // s1.rollNum = 45;
    s1.getInfo();

    GradStudent g1("Ravina", 27, 90, "Robotics");
    g1.getInfo();


    return 0;
}