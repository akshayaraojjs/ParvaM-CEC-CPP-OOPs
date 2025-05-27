#include<iostream>
using namespace std;

class Interest{
    private:
        int principal, term, rate, totalInterest;
        float rateInPercent;
    
    public:
        int simpleInterest=0;

        Interest(){  // Default Constructor
            principal = 0;
            term = 0;
            rate = 0;
            totalInterest = 0;
            rateInPercent = 0;
            cout << "Total Interest Earned: " << totalInterest << endl;
        }

        void setValues(int a, int y){  // Setter function
            principal = a;
            term = y;
        }

        void setRateValueInteger(int rateInInteger){ // Setter function
            rate = rateInInteger;
        }

        void setRateValueFloat(float rateInFloat){ // Setter function
            rateInPercent = rateInFloat;
        }

        Interest(int p, int t, int r){  // Parameterized Constructor (3 Parameters)
            setValues(p, t);
            setRateValueInteger(r);
            simpleInterest = (principal * term * rate)/100;     
            cout << "Simple Interest for the following details: " << endl; 
            cout << "Principal Amount: " << principal << endl;
            cout << "No. of Years(Term): " << term << endl;
            cout << "Rate of Interest(in Integer): " << rate << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned: " << totalInterest << endl;
        }

        Interest(int p, int t, float rateInDecimal){  // Parameterized Constructor (3 Parameters but 1 Float)
            setValues(p, t);
            setRateValueFloat(rateInDecimal);
            simpleInterest = (principal * term * rateInPercent);     
            cout << "Simple Interest for the following details: " << endl; 
            cout << "Principal Amount: " << principal << endl;
            cout << "No. of Years(Term): " << term << endl;
            cout << "Rate of Interest(in Decimal): " << rateInPercent << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned: " << totalInterest << endl;
        }

        ~Interest(){  // Automatically called to free up the memory used by constructor when object has lost the scope
            cout << "Destructor has been called to destroy or free up the memory used by constructor" << endl;
        };
};

int main(){
    int amount, year, rateOfInterest;
    float interestRate;

    Interest int1;  // Default Constructor

    Interest int4;  // Default Constructor

    cout << "Enter the Principal Amount, No. of Years & Rate of Interest(eg. 5):";
    cin >> amount >> year >> rateOfInterest;
    
    Interest int2(amount, year, rateOfInterest); // Parameterized Constructor (3 Integer Arguments)

    cout << "Enter the Principal Amount, No. of Years & Rate of Interest(eg. 0.05):";
    cin >> amount >> year >> interestRate; // Parameterized Constructor (2 Integer & 1 Float Arguments)

    Interest int3(amount, year, interestRate);
}