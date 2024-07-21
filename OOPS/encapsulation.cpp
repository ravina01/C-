/*
Encapsulation - wrapping up of data and memeber functions in a single unit called class. 
data/ properties/ class members + memeber methods - forms a Class : more like capsule. 
hides sensitive information/data - by making that info/data as private/ protected. 
so that the access doensnt go outside the class


*/

# include<iostream>

using namespace std;

class Account
{
private:
    double balance;
    string password;
    //data hiding by making it private
    
public:
    string accountId;
    string userName;
    
    void setBalance(double newBalance)
    {
        balance = newBalance;
    }
    double getBalance()
    {
        return balance;
    }
};

int main()
{

    return 0;
}

