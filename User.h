#ifndef USER_H
#define USER_H
#include <string>
#include <vector>

using namespace std;

class User {
    private:
    double bal;
    int accountNum;
    string name;
    vector<User> u;
    
    public:
    User();
    User(string, double);
    void showAccount();
    void depositMoney(double);
    void withdrawMoney(double);
    void createAccount(string, double);
    void closeAccount();
    void changeInfo();
    string getName();
    double getBal();
    int getAccountNum();
    
};

#endif