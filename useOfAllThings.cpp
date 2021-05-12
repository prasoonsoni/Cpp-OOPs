#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"What do you want to eat?"<<endl;
    string eat;
    cin>>eat;
    cout<<"What do you want to drink?"<<endl;
    string drink;
    cin>>drink;
    cout<<"What is the price of the food?"<<endl;
    double food_price;
    cin>>food_price;
    cout<<"What is the price of the drink?"<<endl;
    double drink_price;
    cin>>drink_price;
    cout<<"Amount of tip you want to leave?"<<endl;
    double tip;
    cin>>tip;
    double amount_to_be_paid = food_price + drink_price + tip*(food_price+drink_price);
    cout<<"Total amount to be paid for "<<eat<<" and "<<drink<<" is "<<amount_to_be_paid<<endl;

}