#include "Menu.h"

void Menu::Menu()
{
    int input;
    string x;
    string name;
    cout << "Hello, welcome to CC Bank!\n Are you an existing account holder? (Enter Y / N)\n";
    while (1)
    {
    cin >> x;
    if (x == "Y" || x == "y" || x == "Yes" || x == "yes")
    {
        bool ok = false;
        cout << "Great! Please enter your name\n";
        cin >> name;
        for (unsigned i = 0; i < u.size(); ++i)
        {
            if (u.at(i).getName() == name)
            {
                ok = true;
            }
        }
        if (ok)
        {
            cout << "Welcome, " << u.at(i).getName() << endl;
            cout << "What would you like to do today?\n"
            do
            {
            cout << "MENU\n1. Show all account information\n2. Deposit money\n3. Withdraw money\n4. Close account\n5. Change personal information\n6. Exit\n";
            cin >> input;
            switch (input)
            {
                default:
                cout << "I don't think that was a valid input, please choose again\n";
                case 1:
                cout << "Name: " << name << "\n" << "Balance: " << getBal() << "\n";
                case 2:
                
                case 3:
                
                case 4:
                
                case 5:
                
                case 6:
                
            }
            } while (x != 6)
        }
        
        if (!ok)
        {
            
        }
    }
    else if (x == "N" || x == "n" || x == "No" || x == "no")
    {
        
    }
    else
    {
        cout << "Sorry, that wasn't a valid input, please enter Y or N as your answer.\n"
        cin >> x;
    }
    }
}

