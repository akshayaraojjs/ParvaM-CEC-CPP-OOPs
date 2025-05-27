#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth;

    public:
        int result;
        Area(){  //Default Constructor (No Parameters)
            length = 0;
            breadth = 0;
        }

        Area(int a, int b){  //Parameterized Constructor (eg. 2 Parameters)
            length = a;
            breadth = b;
        }

        void calculateArea(){
            result = length * breadth;
            cout << "Area of Rectangle with length: " << length << " and breadth: " << breadth 
            << " is equal to " << result << endl;
        }
};

int main(){
    int len, wid;
    Area rect1; // Object 1 Created
    rect1.calculateArea();

    cout << "Enter the length & breadth for finding the Area of Rectangle: ";
    cin >> len >> wid;

    Area rect2(len, wid); // Object 2 Created
    rect2.calculateArea();
}