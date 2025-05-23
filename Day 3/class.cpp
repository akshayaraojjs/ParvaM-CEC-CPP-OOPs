#include<iostream>
using namespace std;

// Syntax
// class class_name  // Class Declaration
class Student {
 public: 
//  Blueprint
    string name, college, branch;  // Data
    int sem;

    void show(){ // Member Function
        cout << "Name: " << name << endl;
        cout << "College: " << college << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << sem << endl;
    }

    void assign();
};

// void Student :: assign(){

// }

int main(){
    Student student1; // Object Creation
    student1.name = "Akshay"; //Assigning the value to the Class using Object
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 8;
    // Ctrl + D : Selecting Same Pattern
    Student student2; // Object Creation
    student2.name = "Akshay"; //Assigning the value to the Class using Object
    student2.college = "CEC";
    student2.branch = "AIML";
    student2.sem = 8;

    student1.show();
}