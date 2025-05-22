#include<iostream>
using namespace std;

void sayHello(){    // function declaration
    cout << "Hello!" <<endl;  // function definition
}

int sayHi(string name){  // function with parameters
    cout << "Hi, " << name <<endl;
}

int greet(string fname, string lname, int age){  // function with different parameters
    cout << "Hi, " << fname << " " << lname << ", Age: "<< age << endl;
}

int main(){
    string firstName, lastName, friendName;
    int Age;
    cout << "Enter your first name:";
    cin >> firstName;
    cout << "Enter your last name:";
    cin >> lastName;
    cout << "Enter your age:";
    cin >> Age;
    cout << "Enter your friend's name:";
    cin >> friendName;
    sayHello(); // function call
    sayHi(firstName); // function call with arguments
    sayHi(friendName);
    greet(firstName, lastName, Age);
}
