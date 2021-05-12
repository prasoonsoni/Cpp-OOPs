#include<iostream>
using namespace std;

int sum(int a, int b, int c=10){
    return a+b+c;
} ///here c is default argument done from right to left

int main(){
    int a = 20;
    int b = 30;
    int s = sum(a,b);
    cout<<s;
}