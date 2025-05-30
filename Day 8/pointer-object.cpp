#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;
    
    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID = id;
            employeeName = name;
            experience = exp;
            this->salary = salary;
        }

        void showDetails(){
            cout << "The employee with name " << employeeName << " bearing " << employeeID << " having " 
            << experience << " years of experience and receives a salary of Rs." << salary << "/-" << endl;
        }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout << "Enter your Name, Employee-ID, Years of Experience & Salary:";
    cin >> empName >> empID >> empExp >> empSalary;

    Employee emp1; // Object created
    Employee *empPtr = &emp1;  //Pointer is pointing/referring to the Object emp1

    //Using the pointer we are assigning the value to the Object using Pointer Dereferencing & Dot Operator
    (*empPtr).addDetails(empID, empName, empExp, empSalary);  
    (*empPtr).showDetails();

    //Using the pointer we are assigning the value to the Object using Pointer Dereferencing & Arrow Operator
    empPtr->addDetails(empID, empName, empExp, empSalary);  
    empPtr->showDetails();

    // Dynamically Allocating Memory for the pointer object (No object referred)
    // Syntax: className *pointer_name = new className
    Employee *ptrEmp = new Employee;  
    ptrEmp->addDetails("PM123","Ajay",3,50000.00);
    ptrEmp->showDetails();
    // emp1.addDetails <==> (*empPtr).addDetails <==> empPtr->addDetails
}