#include<iostream>
using namespace std;

class Animal{  // Base Class - Level 0
    string name;  // Private Member
    public:
        void setName(string animalName){  //setter
            name  = animalName;
        }

        void showAnimal(){   //getter
            cout << "Name of the Animal: " << name << endl;
        }
};

// Animal -> Carnivore (Symbolic Representation)
// Animal Class is deriving the Carnivore Class
// Carnivore Class is derived by/from Animal Class
class Carnivore : public Animal{ // Derived Class/ Base Class - Level 1
    string vegetation; // Private Member
    public:
        void setFood(string food){
            vegetation = food;
        }

        void showFood(){
            cout << "Food Type of Animal: " << vegetation << endl;
        }
};

// Mammal -> Carnivore (Symbolic Representation)
class Mammal : public Carnivore{ // Derived Class - Level 2
    string habitat; // Private Member
    public:
        void setHabitat(string place){
            habitat = place;
        }
        void showHabitat(){
            cout << "Living Place: " << habitat << endl;
        }
};

int main(){
    string animal_name, food_type, place_of_living;

    cout << "Enter the Name of the Animal, food type & place of living: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);
    a1.showAnimal();

    Carnivore c1;
    c1.setName(animal_name);
    c1.showAnimal();
    c1.setFood(food_type);
    c1.showFood();

    Mammal m1;
    m1.setName(animal_name);
    m1.showAnimal();
    m1.setFood(food_type);
    m1.showFood();
    m1.setHabitat(place_of_living);
    m1.showHabitat();

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}