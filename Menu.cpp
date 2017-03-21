#include "Menu.h"
#include "User.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void Interface::Menu()
{
    int input;
    int index;
    string x;
    string name;
    bool ok = false;
    cout << "Hello, welcome to CC Bank!\n Are you an existing account holder? (Enter Y / N)\n";
    cin >> x;
    while (1)
    {
    if (x == "Y" || x == "y" || x == "Yes" || x == "yes")
    {
        cout << "Great! Please enter your name\n";
        cin >> name;
        for (unsigned i = 0; i < u.size(); ++i)
        {
            if (u.at(i).getName() == name)
            {
                ok = true;
                index = i;
                break;
            }
        }
        if (ok)
        {
            cout << "Welcome, " << u.at(index).getName() << endl;
            cout << "What would you like to do today?\n";
            do
            {
            cout << "MENU\n1. Show all account information\n2. Deposit money\n3. Withdraw money\n4. Close account\n5. Change personal information\n6. Exit\n";
            cin >> input;
            switch (input)
            {
                default:
                cout << "I don't think that was a valid input, please choose again (choices 1 - 6)\n";
                case 1:
                u.at(index).showAccount();
                case 2:
                cout << "How much money would you like to deposit?\n";
                cin >> input;
                cout << "You have successfully deposited $" << input << "\nOld account balance: $"<< u.at(index).getBal();
                u.at(index).depositMoney(input);
                cout << "New account balance: $" << u.at(index).getBal() << endl;
                case 3:
                cout << "How much money would you like to withdraw?\n";
                cin >> input;
                if (input <= u.at(index).getBal())
                {
                cout << "You have successfully withdrawn $" << input << "\nOld account balance: $" << u.at(index).getBal();
                u.at(index).withdrawMoney(input);
                cout << "New account balance: $" << u.at(index).getBal() << endl;
                }
                else
                {
                while (input > u.at(index).getBal())
                {
                    cout << "You are trying to withdraw more than your balance, please enter a different number\n";
                    cin >> input;
                }
                cout << "You have successfully withdrawn $" << input << "\nOld account balance: $" << u.at(index).getBal();
                u.at(index).withdrawMoney(input);
                cout << "New account balance: $" << u.at(index).getBal() << endl;
                }
                
                case 4:
                cout << "Are you sure you want to close your account? (Please enter Y or N)\n !!!!!!!This cannot be undone!!!!!!!\n";
                cin >> x;
                if (x == "Y" || x == "y")
                {
                    cout << "We're sorry to see you leave, " << u.at(index).getName() << endl;
                    u.at(index).closeAccount();
                }
                else
                {
                    cout << "OK, seems like you didn't respond with Y :). Glad to see you stay\n";
                }
                
                case 5:
                
                case 6:
                cout << "Goodbye!\n";
                exit(0);
            }
            } while (x != "6");
        }
    }
    if (!ok)
    {
        cout << "Seems like there isn't an account under that name.\n";
    }
    else if (x == "N" || x == "n" || x == "No" || x == "no" || !ok) //ask to create new account
    {
        cout << "Would you like to create an account? (Y or N)\n";
        cin >> x;
        if (x == "Y" || x == "y")
        {
            cout << "Okay, we'll need some pieces of information from you then.\n";
            cout << "Please enter your name and how much money you would like to deposit.\n";
            cin >> x;
            cin >> input;
            User temp;
            temp.createAccount(x, input);
            cout << "Your account has been created under the name: " << x << endl;
            cout << "Please remember this name as it is needed to access your account in the future.\n";
            cout << "Goodbye!\n";
            exit(0);
        }
        else if (x == "N" || x == "n")
        {
          cout << "Goodbye!\n";
          exit(0);
        }
    }
    else
    {
        cout << "Sorry, that wasn't a valid input, please enter Y or N as your answer.\n";
        cin >> x;
    }
    }
}