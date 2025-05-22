#include<iostream>
using namespace std;

int main(){
    string first_name, college, branch;
    char sem;
    int age;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your college name in short-form: ";
    cin >> college;
    cout << "Enter your branch name in short-form: ";
    cin >> branch;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your semester: ";
    cin >> sem; 

    cout << "Your name is " << first_name << ", You're " << age 
    << " years old. You're studying in " << college << " college in " 
    << branch << " branch in " << sem << " semester";
}