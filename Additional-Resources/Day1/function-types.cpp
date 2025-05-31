// Types of Functions in C++
#include<iostream>
using namespace std;

// No Parameters, No Return
void greet() {
    cout << "Good Morning!" << endl;
}

// With Parameters, No Return
void displaySum(int a, int b) {
    cout << "Sum = " << (a + b) << endl;
}

// No Parameters, With Return
int getNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// With Parameters and With Return
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = getNumber();
    cout << "You entered: " << result << endl;
    displaySum(5, 3);

    int result1 = multiply(4, 5);
    cout << "Multiplication Result: " << result1 << endl;
    return 0;
}