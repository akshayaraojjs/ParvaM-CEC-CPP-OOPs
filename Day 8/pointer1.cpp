#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrAge = &age;  // address of age (Pointer Referencing)

    string name;
    string *namePtr = &name;
    cout << "Enter your name & age:";
    cin >> name >> age;

    // *ptrAge & *namePtr - Pointer Dereferencing
    cout << "Your name is " << (*namePtr) << ", You're " << (*ptrAge) << " years old." << endl;
    cout << "The address of name is stored in pointer(namePtr): " << namePtr << endl;
    cout << "The address of age is stored in pointer(ptrAge): " << ptrAge << endl;

    int *num1 = new int(5); // Dynamic Memory Allocation
    // The reference variable is not needed for assigning the address to the pointer we can use new keyword
    cout << "The value within the pointer num1: " << (*num1) << endl;
    delete num1;  // Free up memory used by integer pointer (num1)
    int size;

    int *arr = new int[size];  // Dynamic memory allocation for integer array (run-time)

    cout << "Enter the size of an array";
    cin >> size;

    cout << "Enter the " << size << " elements into an array:" << endl;
    for(int i=0; i < size; i++){
        cin >> arr[i];
    }

    cout << "The array contains " << size << " elements, They are:" << endl;
    for(int i=0; i < size; i++){
        cout << arr[i] << endl;
    }
}