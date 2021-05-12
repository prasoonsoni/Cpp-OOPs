#include<iostream>
using namespace std;
class Student{
    public:
        Student(){
            cout<<"Constructor Used"<<endl;
        }
        ~Student(){
            cout<<"Destructor Used"<<endl;
        }
};
int main(){
    Student s[6];
    Student *student = new Student[6];
    delete[] student;
    return 0;
}