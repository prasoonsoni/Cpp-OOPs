#include<iostream>
using namespace std;

class Shape{
    float radius;
    const float pi = 3.14;
    public: 
        void getRadius();
        void findArea();
        void findPerimeter();
};
void Shape :: getRadius(){
    cout<<"Enter Radius: ";
    cin>>radius;
    }
void Shape :: findArea(){
    cout<<"Area is: "<<pi*radius*radius<<endl;
    }
void Shape :: findPerimeter(){
    cout<<"Perimeter is: "<<2*pi*radius<<endl;
    }
int main(){
    Shape circle;
    circle.getRadius();
    circle.findArea();
    circle.findPerimeter();
    return 0;
}