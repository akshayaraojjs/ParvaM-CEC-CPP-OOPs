#include<iostream>
using namespace std;

class Vehicle{  // Base Class
    private:
        string riding_mode;

    public:
        void setMode(string mode){
            riding_mode = mode;
        }

        string useMode(){
            return riding_mode;
        }
};

class Bike : public Vehicle{  // Derived Class can access the data & member functions of base class (via public)
    private:
        string brand;

    public:
        void setName(string name){
            brand = name;
        }

        string showName(){
            return brand;
        }
};

int main(){
    string mode_of_transport, brand_name;

    cout << "Enter the Mode of Transport & Brand Name of your bike:" ;
    cin >> mode_of_transport >> brand_name;

    Bike bike1; // Object of Derived Class
    bike1.setMode(mode_of_transport);  // Accessing the member function of Base Class (Inheriting the properties)
    bike1.setName(brand_name);

    cout << "I've a " << bike1.showName() << " bike, I can travel to my native via " << bike1.useMode();
}