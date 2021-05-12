#include<iostream>
using namespace std;

inline int greatestOfThree(int *a, int *b, int *c){
    if(*a>*b && *a>*c){
        return *a;
    } else if (*b>*a && *b>*c){
        return *b;
    } else {
        return *c;
    }
}
int main(){
    int a = 10;
    int b = 20;
    int c = 15;
    int l = greatestOfThree(&a, &b, &c);
    cout<<l<<endl;
    return 0;
}