#include <iostream>
#include <string>
using namespace std;
//---------- Variables ----------//
int choice = 0;
bool cont = true;
double balance = 1000;
double deposit = 0;
double withdDraw = 0;
string password = "adham";
// -----------------------------//

// showMenu is the function to display the menu of ATM
void showMenu()
{
    cout << "-------- Menu --------" << endl;
    cout << "1 : Balance" << endl;
    cout << "2 : Deposit" << endl;
    cout << "3 : WithdDraw" << endl;
    cout << "4 : Exit" << endl;
    cout << "----------------------" << endl;
}

// checkPassword is the function to check if password is true or false in 5 trial
bool checkPassword()
{
    int i = 5;
    string pass;
    do
    {
        cout << "plz enter the password : ";
        cin >> pass;
        if (pass == password)
        {
            cout << "\n----------------------" << endl;
            cout << "---- Hello in ATM ----" << endl;
            cout << "----------------------\n\n";
            break;
        }
        else
        {
            if (i == 1)
            {
                break;
            }
            --i;
            cout << "password is false and try again remaining " << i << " trial" << endl;
        }
    } while (true);
    return (pass == password);
}

// showBalance is the function to show current balance
void showBalance()
{
    cout << "your balance is : " << balance << endl;
}

// Deposit is the function to make user deposit money
void Deposit()
{
    double outputMoney;
    cout << "the limit of deposit is 5000" << endl;
    cout << "please enter the amount you want to deposit : ";
    cin >> outputMoney;

    if (outputMoney < balance)
    {
        if (outputMoney >= 5000)
        {
            cout << "this amount is over the limit" << endl;
        }
        else
        {
            balance -= outputMoney;
        }
    }
    else
    {
        cout << "not enough money" << endl;
    }
}

// WithDraw is the function to make user WithDraw money
void WithDraw()
{
    double inputMoney;
    cout << "the limit of withDraw is 5000" << endl;
    cout << "please enter the amount you want to withDraw : ";
    cin >> inputMoney;

    if (inputMoney >= 5000)
    {
        cout << "this amount is over the limit" << endl;
    }
    else
    {
        balance += inputMoney;
    }
}

// choosing is the function to make user choose what will he do
void choosing()
{
    cout << "please choose a number : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        showBalance();
        break;

    case 2:
        Deposit();
        break;

    case 3:
        WithDraw();
        break;

    case 4:
        cout << "Ok,Bye" << endl;
        cont = false;
        break;

    default:
        cout << "invalid input" << endl;
        break;
    }
}

int main()
{
    cout << "Adham\n\n";

    if (checkPassword())
    {
        showMenu();
        while (cont)
        {
            choosing();
        }
    }

    return 0;
}