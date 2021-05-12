#include <iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float salary;
    float additions;
    float deductions;
    float netpay;
    public:
        void getDetails();
        void netPay();
        void printDetails();
};
void Employee :: getDetails(){
    cout<<"Enter Employee ID: ";
    cin>>id;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Additions: ";
    cin>>additions;
    cout<<"Enter Deductions: ";
    cin>>deductions;
}
void Employee :: netPay(){
    int netpay = salary + additions - deductions;
}
void Employee :: printDetails(){
    cout>>"ID: ">>id>>endl;
    cout>>"Name: ">>name>>endl;
    cout>>"Net Pay: ">>netpay>>endl;
}

int main(){
    int n;
    cout>>"Enter number of employees ?">>endl;
    cin>>n;
    Employee employee[n];
    for(int i=0;i<n;i++){
        employee[i].getDetails();
        employee[i].netPay();
    }
    for(int i=0;i<n;i++){
        employee[i].printDetails();
    }
    return 0;
}