#include<iostream>
using namespace std;

class Entity
{
public:
    virtual string getName()
    {
        return "Entity\n";
    }
};

class Player: public Entity
{
private:
    string m_Name;

public:
    Player(const string& name):m_Name(name)
    {

    }
    string getName () override
    {
        return m_Name;
    }
};

int main()
{
    Entity* e1 = new Entity();
    cout<<e1->getName();

    Player* p1 = new Player("Ravina");
    cout<<p1->getName();

    delete e1,p1;

    return 0;
}