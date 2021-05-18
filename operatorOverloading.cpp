#include<iostream>
using namespace std;

class Length{
    public:
        int m, cm;
    void getLength(){
        cin>>m>>cm;
    }
    bool operator == (Length l){
        if(m == l.m && cm == l.cm){
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    Length l1, l2;
    l1.getLength();
    l2.getLength();
    if(l1==l2){
        cout<<"Same Length";
    } else {
        cout<<"Not Same";
    }
    return 0;
}