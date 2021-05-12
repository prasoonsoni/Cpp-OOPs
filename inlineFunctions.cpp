#include<iostream>
using namespace std;

// used only for small functions
// never use for recursion
// never use for static variable
inline int productStatic(int *a, int *b){
    static int c = 0; // This executes only once
    c+=1; // next time this function is run, the value of c will be retained
    return (*a)*(*b)+c;
}

inline int product(int *a, int *b){
    return (*a)*(*b);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"Product is : "<<product(&a, &b)<<endl;
    cout<<"Static Product : "<<productStatic(&a, &b)<<endl;
    cout<<"Static Product : "<<productStatic(&a, &b)<<endl;
    cout<<"Static Product : "<<productStatic(&a, &b)<<endl;
    cout<<"Static Product : "<<productStatic(&a, &b)<<endl;
    return 0;
}