#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        // Complex(int r=0, int i=0){
        //     this->real = r;
        //     this->img = i;
        // }
        void get(){
            cin>>real>>img;
        }
        Complex operator + (Complex c){
            Complex add;
            add.real = real + c.real;
            add.img = img + c.img;
            return add;
        }
        void print(){
            cout<<real<<" + i "<<img<<endl;
        }
};

int main(){
    Complex c1, c2, c3;
    c1.get();
    c2.get();
    c3 = c1+c2;
    c3.print();
    return 0;
}