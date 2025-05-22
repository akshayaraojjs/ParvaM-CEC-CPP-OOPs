#include<iostream>
using namespace std;

int main(){
    // Declaring the variables with different datatype
    string name, college, branch, usn;
    char section;
    int age, sem;
    bool isStudent;
    float height; 

    //Initializing/Assigning the values to the variables
    name = "Akshay Rao. J";
    section = 'A';
    age = 24;
    college = "CEC";
    branch = "AI/ML";
    usn = "1CE24AI001";
    sem = 2;
    isStudent = true;
    height = 5.2;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "College: "<< college << ", Branch: " << branch << endl;
    cout << "USN: " << usn << ", Sem: " << sem << endl;
    cout << "Section: " << section << ", Is he/she a student: " << isStudent << endl;
    // Shift + Alt + bottom arrow - Clone
    // Ctrl + Shift + ~ : Open Terminal
    // g++ variables.cpp
}