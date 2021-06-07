#include<iostream>
using namespace std;

class Employee{
    public:
        int employeeNumber;
        string name, designation;
    public:
        void getDetails(){
            cout<<"Enter Employee Number : ";
            cin>>employeeNumber;
            cout<<"Enter name : ";
            getline(cin, name);
            cout<<"Enter Designation : ";
            getline(cin, designation);
        }
};

class Salary : public Employee{
    private:
        float bp, hra, da, pf, np;
    public:
        void getSalary(){
            cout<<"Enter the Basic Pay :";
            cin>>bp;
            cout<<"Enter the House Rent Allowance:";
            cin>>hra;
            cout<<"Enter the Dearness Allowance :";
            cin>>da;
            cout<<"Enter the Provident Fund:";
            cin>>pf;
        }
        void calculateSalary(){
            np=bp+hra+da-pf;
        }
        void display(){
            cout<<"Employee Number : "<<employeeNumber<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Designation : "<<designation<<endl;
            cout<<"Salary : "<<np<<endl;
        }
};

int main(){
    Salary employee;
    employee.getDetails();
    employee.getSalary();
    employee.calculateSalary();
    employee.display();

    return 0;
}

