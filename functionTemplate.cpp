#include<iostream>
using namespace std;

template <class T>
T multiply(T n1, T n2){
    T answer = n1*n2;
    return answer;
}

int main(){
    int x, y;
    float a, b;
    cin>>x>>y>>a>>b;
    cout<<"Product of int : "<<multiply(x,y)<<endl<<"Product of float : "<<multiply(a,b)<<endl;
    return 0;
}