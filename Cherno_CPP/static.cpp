#include<iostream>

struct Entity
{
    static int x,y;

    static void Print()
    {
        std::cout<<x<<" , "<<y<<std::endl;
    }
};
int Entity::x = 9;
int   Entity::y =9;
int main()
{
    Entity e1;
    e1.x=2;
    e1.y=3;

    Entity e;
    e.x=9;
    e.y=10;

    Entity::x = 9;
    Entity::y =9;
    // e1.Print();

    // e.Print();

    Entity::Print();

    std::cin.get();

}