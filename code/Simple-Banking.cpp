#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string accountName;
    int balance{0};

public:
    // constructor
    Account(string nama, int initialBalance) : accountName{nama}
    {
        if (initialBalance > 0)
        {
            balance = initialBalance;
        }
    }

    void setAccountName(string name)
    {
        accountName = name;
    }

    string getAccountName()
    {
        return accountName;
    }

    int getBalance()
    {
        return balance;
    }

    void deposit(int depositAmount)
    {
        if (depositAmount > 0)
        {
            balance += depositAmount;
        }
    }
};

int main()
{
    Account acc1("Vela Dodol", 100);       // inisialisasi object Account -> acc1
    Account acc2("Rasyid Firmansyah", 10); // inisialisasi object Account -> acc2
    // string nama;

    // cout << "Nama: ";
    // getline(cin, nama);

    // acc.setAccountName(nama);

    cout << "Nama Akun: " << acc1.getAccountName() << endl
         << "Balance: " << acc1.getBalance() << endl
         << endl;

    cout << "Nama Akun: " << acc2.getAccountName() << endl
         << "Balance: " << acc2.getBalance() << endl
         << endl;

    acc2.deposit(200);

    cout << "Nama Akun: " << acc2.getAccountName() << endl
         << "Balance: " << acc2.getBalance() << endl
         << endl;
}