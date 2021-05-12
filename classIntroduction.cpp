#include <iostream>
using namespace std;
class Student{
    string regNo;
    string name;
    char gender;
    int age;
    public:
        void getDetails(){
            cout<<"{Enter Details}"<<endl;
            cin>>regNo>>name>>gender>>age;
        }
        void printDetails(){
            cout<<regNo<<endl;
            cout<<name<<endl;
            cout<<gender<<endl;
            cout<<age<<endl;
        }
};

int main(){
    Student student;
    student.getDetails();
    student.printDetails();
    return 0;
}
