#include<iostream>

using namespace std;

class AbstractClass // Interface class
{
    public:
        virtual void purevirtualfunc()=0;
};

class Derived: public AbstractClass
{
    public:
        void purevirtualfunc() override
        {
            cout<<"Overridden\n";
        }
};
int main()
{
    Derived obj;
    obj.purevirtualfunc();

    AbstractClass* abs;
    abs = &obj;

    abs->purevirtualfunc();


    return 0;

}