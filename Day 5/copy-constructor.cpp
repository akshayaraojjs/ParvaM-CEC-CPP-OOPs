#include<iostream>
using namespace std;

class Teacher{
    private:  // By default all the data members of the class comes under private access specifier
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher(){  //Default Constructor
            branch = "AIML";
            name = "John Doe";
            qualification = "M.Tech";
            experience = 5;
            cout << "Welcome, John Doe!" << endl;
        }

        void setData(string Tname, string Tbranch, string Tqual, int exp){  // Setter
            name = Tname;  
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName, string TeacherBranch, string TeacherQual, int TeacherExp){ // Parameterized Constructor
            setData(TeacherName, TeacherBranch, TeacherQual, TeacherExp);
            cout << "Welcome, " << name << " to " << branch << " branch." << endl;
            cout << "You've graduated with, " << qualification << " degree. And you've " << experience 
            << " years of experience." << endl;
        }

        // Syntax for Copy Constructor: Constructor(Reference-Constructor address-of-the-object) 
        Teacher(Teacher &t){  // Copy Constructor
            name = t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;
        }

        void getData(){  // Getter
            cout << "Welcome, " << name << " to " << branch << " branch." << endl;
            cout << "You've graduated with, " << qualification << " degree. And you've " << experience 
            << " years of experience." << endl;
        }

        ~Teacher(){  // Destructor
            cout << "Object's work is done, Clearing the memory!" <<endl;
        }
};

int main(){
    string n, q, b;
    int e;

    Teacher teacher1; // Object Created & Invoked the Default Constructor

    cout << "Enter your name, qualification, branch & experience:";
    cin >> n >> q >> b >> e;

    Teacher teacher2(n, b, q, e);

    Teacher teacher3 = teacher2;
    teacher3.getData();
}