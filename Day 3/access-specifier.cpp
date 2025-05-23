#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
        // Member Data of the class
        string custName, custEmail;
        int acNumber;
    
        void createAccount(string cName, string cEmail){
            custName = cName;
            custEmail = cEmail;
        }

        void displayInfo(){
            cout << "Customer Name: " << custName << endl;
            cout << "Customer Email: " << custEmail << endl;
        }
        // setter
        void addBalance(int account, int amount){
            balance += amount;
            cout << "The amount has been deposited successfully!" << endl;
        }
        // setter
        void withdrawAmount(int account, int amount){
            balance -= amount;
            cout << "The amount has been withdrawn successfully!" << endl;
        }
        // getter
        void checkBalance(){
            cout << "Bank Balance: " << balance << endl;
        }
};

int main(){
    Bank cust1;  //Object Declared
    string name, email;
    int acNum, amount;

    // we can assign the value to the public member
    cust1.custName = "Akshay";
    cust1.custEmail = "akshay@gmail.com";
    cust1.acNumber = 12345;

    // cust1.balance = 8000; // we can't assign the value to the private member

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your email id: ";
    cin >> email;
    cout << "Enter your account number: ";
    cin >> acNum;
    cout << "Enter the amount to be deposited: ";
    cin >> amount;

    cust1.createAccount(name, email);
    cust1.displayInfo();
    cust1.addBalance(acNum, amount);
    cust1.checkBalance();

    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;
    cust1.withdrawAmount(acNum, amount);
    cust1.checkBalance();
}