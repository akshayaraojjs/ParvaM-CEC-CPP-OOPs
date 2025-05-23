#include<iostream>
using namespace std;

class Calculate{
    public:
        //Member Data
        int num1, num2;
        float res;

        // Declared the Constructor & It is also a Default Constructor (No Parameters)
        // Ctrl + ?: Comment
        Calculate(){
            num1 = 5;
            num2 = 10;
        }

        //Member Function
        void showOutput(){
            cout << "Addition: " << num1 + num2 << endl;
            cout << "Subtraction: " << num1 - num2 << endl;
            cout << "Multiplication: " << num1 * num2 << endl;
            cout << "Quotient: " << num2 / num1 << endl;
            cout << "Remainder: " << num2 % num1 << endl;
        }
};

int main(){
    // Initializing the default value using Constructor automatically when object is declared
    Calculate c1; //Object

    //Assigning the value to the data members
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();
}