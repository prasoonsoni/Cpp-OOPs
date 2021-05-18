#include<iostream>
using namespace std;

class Sample{
    public:
        int x, y;
    void getNumbers(){
        cin>>x>>y;
    }
    void display(){
        cout<<endl<<x<<endl<<y<<endl;
    }
    void operator = (Sample s){
        x = s.x;
        y = s.y;
    }
};

int main(){
    Sample s1, s2;
    s1.getNumbers();
    s2.getNumbers();
    s1.display();
    s2.display();
    s1=s2;
    s1.display();
    s2.display();
    return 0;
}