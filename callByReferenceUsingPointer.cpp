#include<iostream>
using namespace std;
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 2, y = 4;
    cout<<x<<endl<<y<<endl<<endl;
    swapPointer(&x, &y);
    cout<<x<<endl<<y<<endl<<endl;
    return 0;
}
