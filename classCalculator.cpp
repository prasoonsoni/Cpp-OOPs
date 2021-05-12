#include<iostream>
using namespace std;
class Calculator{
    private:
        int num1;
        int num2;
    public:
        void add(){
            cout<<"::Enter Numbers::"<<endl;
            cin>>num1>>num2;
            cout<<"Addition is "<<num1+num2<<endl;
        }
        void substract(){
            cout<<"::Enter Numbers::"<<endl;
            cin>>num1>>num2;
            cout<<"Substraction is "<<num1-num2<<endl;
        }
        void multiply(){
            cout<<"::Enter Numbers::"<<endl;
            cin>>num1>>num2;
            cout<<"Multiplication is "<<num1*num2<<endl;
        }
        void divide(){
            cout<<"::Enter Numbers::"<<endl;
            cin>>num1>>num2;
            cout<<"Division is "<<num1/num2<<endl;
        }
};

int main(){
    Calculator calculator;
    calculator.add();
    calculator.substract();
    calculator.multiply();
    calculator.divide();
    return 0;
}