class User {
    private:
    double bal;
    string name;
    string accType;
    vector<User> u;
    
    public:
    User();
    ~User();
    void showAccount();
    void depositMoney();
    void withdrawMoney();
    void createAccount();
    void closeAccount();
    void changeInfo();
    int calculateBal();
    string getName();
    double getBal();
    string getAccType();
    
};
