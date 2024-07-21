#include<iostream>
#include<string>
using namespace std;

int main()
{
    char* name = "Ravina"; // string literals
    // name[2] = 'b'; // illegal wont work

    char name1[] = "ravina";
    name1[2] = 'b';
    cout<<name1<<endl;

    std::string na = "ravina";// its const char[7]
    na[2] = 'b';
    cout<<na<<endl;

    cout<<na.size()<<endl;
    na.append("Lad");
    cout<<na.size()<<endl;
    // cout<<name<<endl;

    string greeting = "Hello";

    cout<<greeting[0]<<endl;
    cout<<greeting.length()<<endl;

    greeting.insert(2, "k");
    cout<<greeting<<endl;
    greeting.erase(3);
    cout<<greeting<<endl;
    greeting.replace(2,3,"kl");
    cout<<greeting<<endl;

    cout<<greeting.find("ek")<<endl;






    return 0;
}