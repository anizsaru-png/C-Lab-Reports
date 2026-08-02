#include <iostream>
using namespace std;

class Account
{
private:
    int accountNumber;
    float balance;

public:
    void initialize(int acc, float bal)
    {
        accountNumber = acc;
        balance = bal;
    }

    void display()
    {
        cout << "\nAccount Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1;

    a1.initialize(101, 50000);

    a1.display();

    return 0;
}