// Input and Output
#include<iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your first name: ";
    cin >> name;  // Input from user

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "! You are " << age << " years old." << endl;

    return 0;
}