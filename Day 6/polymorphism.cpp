#include<iostream>
using namespace std;

class Print{
    private:
        int number;
        float decimal;
        string word;

    public:
        void setInteger(int num);

        void setFloat(float dec);

        void setString(string str);

        void print(int n){
            cout << "Printing the Integer Value: " << number << endl;
        }

        void print(float f){
            cout << "Printing the Float Value: " << decimal << endl;
        }

        void print(string s){
            cout << "Printing the String Value: " << word << endl;
        }
};

void Print :: setInteger(int num){
    number = num;
} 

void Print :: setFloat(float dec){
    decimal = dec;
} 

void Print :: setString(string str){
    word = str;
} 

int main(){
    int i;
    float d;
    string w;

    cout << "Enter the each of the following (1 integer, 1 float & 1 string): ";
    cin >> i >> d >> w;

    Print p1; // Object

    p1.setInteger(i);
    p1.setFloat(d);
    p1.setString(w);
    
    p1.print(i);
    p1.print(d);
    p1.print(w);
}