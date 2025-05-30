#include<iostream>
#include<fstream>
using namespace std;

class Teacher{
    private:
        string name, branch;
        int age, experience;

    public:
        void setInfo(string n, string b, int a, int e){
            name = n;
            branch = b;
            age = a;
            experience = e;
        }

        void writeToFile(){
            // Opening the file & writing
            ofstream write("write.txt");  
            write << "Teacher Details are as follows: " << endl;
            write << "Name : " << name << endl;
            write << "Age : " << age << endl;
            write << "Branch : " << branch << endl;
            write << "Experience : " << experience << endl;
        }
};

int main(){
    string teacher_name, teacher_branch;
    int teacher_age, teacher_experience;

    cout << "Enter the name, age, branch & experience: ";
    cin >> teacher_name >> teacher_age >> teacher_branch >> teacher_experience;

    Teacher t1;
    t1.setInfo(teacher_name, teacher_branch, teacher_age, teacher_experience);
    t1.writeToFile();
}