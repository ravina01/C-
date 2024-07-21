#include<iostream>

using namespace std;
class Entity
{
    private:
        string m_name;

    public:
        Entity(const string& name = "") : m_name(name) 
        {

        }

        string getName() const
        {
            return m_name;

        }
};
int main()
{

    const int a = 0;

    // a = 9;

    const int MAX_AGE = 20;

    int* b = new int;
    *b = 9;

    b = (int*)&MAX_AGE; // breaking const
    cout<<*b<<endl;

    const int* c = new int;
    // *c = 3;// not allowed

    cout<<*c<<endl;

    Entity e1("ravina");
    cout<<e1.getName()<<endl;

    return 0;
}