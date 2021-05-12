#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"Using 2 variable function"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using 3 variable function"<<endl;
    return a+b+c;
}

// calculate volume of cylinder 
int volume(double r, int h){
    return (3.14 * r * r *h);
}
// volume of cube
int volume(int a){
    return (a*a*a);
}
// volume of cuboid
int volume(int l, int b, int h){
    return(l*b*h);
}
int main(){
    cout<<"Sum of 3 and 6 is : "<<add(3,6)<<endl;
    cout<<"Sum of 3, 6 and 9 is : "<<add(3,6,9)<<endl;

    cout << "Cylinder : " << volume(3, 6) << endl;
    cout << "Cube : " << volume(3) << endl;
    cout << "Cuboid : " << volume(3, 6, 9) << endl;
    return 0;
}