#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    float balance;
};

void AcceptData(BankAccount &b)
{
    cout << "Enter Name : ";
    cin >> b.name;

    cout << "Enter Account Number : ";
    cin >> b.accountNumber;

    cout << "Enter Account Type (saving/loan/ppf/nps) : ";
    cin >> b.accountType;

    cout << "Enter Balance : ";
    cin >> b.balance;

    if(b.balance < 1000)
    {
        b.balance = 1000;
        cout << "Minimum balance set to 1000\n";
    }
}

void Deposit(BankAccount &b)
{
    float amount;

    cout << "Enter Deposit Amount : ";
    cin >> amount;

    b.balance = b.balance + amount;

    cout << "Amount Deposited Successfully\n";
}

void Withdraw(BankAccount &b)
{
    float amount;

    cout << "Enter Withdraw Amount : ";
    cin >> amount;

    if((b.balance - amount) >= 1000)
    {
        b.balance = b.balance - amount;
        cout << "Withdrawal Successful\n";
    }
    else
    {
        cout << "Minimum balance of 1000 must be maintained\n";
    }
}

void Display(BankAccount b)
{
    cout << "\nAccount Details\n";
    cout << "Name : " << b.name << endl;
    cout << "Account Number : " << b.accountNumber << endl;
    cout << "Account Type : " << b.accountType << endl;
    cout << "Balance : " << b.balance << endl;
}

int main()
{
    BankAccount b;
    int choice;

    do
    {
        cout << "\n1.Accept Data";
        cout << "\n2.Deposit";
        cout << "\n3.Withdraw";
        cout << "\n4.Display";
        cout << "\n0.Exit";
        cout << "\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                AcceptData(b);
                break;

            case 2:
                Deposit(b);
                break;

            case 3:
                Withdraw(b);
                break;

            case 4:
                Display(b);
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}
