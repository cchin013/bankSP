#include "User.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


User::User()
{
    this->bal = 0.0;
    this->accountNum = rand() % 1000000;
    this->name = "";
}

User::User(string name, double bal)
{
    this->bal = bal;
    this->name = name;
    this->accountNum = rand() % 1000000;
}

void User::showAccount() 
{
    cout << "Name: " << this->name << endl;
    cout << "Balance: $" << this->bal << endl;
    cout << "Account number: " << this->accountNum << endl;
}
void User::depositMoney(double amount)
{
    this->bal += amount;
}

void User::withdrawMoney(double amount)
{
    this->bal -= amount;
}

void User::createAccount(string name, double bal)
{
    User newUser(name,bal);
    u.push_back(newUser);
}

void User::closeAccount()
{
    cout << "FIX THIS CLOSE ACCOUNT FUNCTION \n"; // TODO: PROPERLY DELETE OBJECT FROM VECTOR
}

void User::changeInfo()
{
    
}

string User::getName()
{
    return this->name;
}

double User::getBal()
{
    return this->bal;
}

int User::getAccountNum()
{
    return this->accountNum;
}