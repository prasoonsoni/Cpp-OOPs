#include<iostream>
using namespace std;

class Employee {
    public:
        string empID, name;
        int joinYear;

    public:
        void getEmployeeData(){
            cin>>empID>>name>>joinYear;
        }
};

class Salary : virtual public Employee{
    public:
        int basicPay, da, hra, allowances, totalSalary;
    public:
        void getSalaryData(){
            cin>>basicPay>>da>>hra>>allowances;
        }
        void calculateTotalSalary(){
            totalSalary = basicPay+da+hra+allowances;
        }
};

class Incentive : virtual public Employee{
    public:
        int percentage;
        int experience = 2021 - joinYear;
    public:
        void getIncentivePercent(){
            if(experience>=10){
                percentage = 50;
            } else if (experience>=5 && experience<10){
                percentage = 25;
            } else if (experience<5){
                percentage = 10;
            }
        }
};

class Payment : public Salary , public Incentive {
    public:
        int currentMonthSalary;
    public:
        void calculateSalary(){
            currentMonthSalary = (totalSalary) + (totalSalary * percentage)/100;
        }
        void printData(){
            cout<<"Employee id:"<<empID<<endl<<"Current Month Salary:"<<currentMonthSalary;
        }
};

int main(){
    Payment p;
    p.getEmployeeData();
    p.getSalaryData();
    p.calculateTotalSalary();
    p.getIncentivePercent();
    p.calculateSalary();
    p.printData();
    return 0;
}