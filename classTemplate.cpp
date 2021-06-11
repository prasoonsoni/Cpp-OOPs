#include<iostream>
using namespace std;

template<class T, class U>
class Sample{
    public:
        T a;
        U b;
    public:
        void getData(){
            cin>>a>>b;
        }
        void display(){
            cout<<a<<endl<<b<<endl;
        }
};

int main(){
    Sample<int,int>s1;
    Sample<int,char>s2;
    Sample<int,float>s3;
    cout<<"Enter two integers"<<endl;
    s1.getData();
    cout<<"Enter one integer and one character"<<endl;
    s2.getData();
    cout<<"Enter one integer and one float"<<endl;
    s3.getData();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}