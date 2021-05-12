#include <iostream>
using namespace std;
int main(){
    cout<<"Hello, welcome to the app"<<endl;
    cout<<"Please create a new account"<<endl;
    cout<<"Choose a username"<<endl;
    string user;
    cin>>user;
    cout<<"Choose a password"<<endl;
    string pass;
    cin>>pass;

    cout<<"Please enter your login credentials"<<endl;
    cout<<"Username: "<<endl;
    string username;
    cin>>username;
    cout<<"Password: "<<endl;
    string password;
    cin>>password;

    while(username!=user&&password!=pass){
        cout<<"Wrong username or password, Try Again!"<<endl;
        cout<<"Username: "<<endl;
        cin>>username;
        cout<<"Password: "<<endl;
        cin>>password;
    }
    cout<<"Welcome to the APP"<<endl;
    double balance = 100.00;
    cout<<"Done"<<endl<<"Your current balance is "<<balance<<" Rs."<<endl<<"Would you like to add more Rs.?"<<endl;
    string ans;
    cin>>ans;
    if (ans=="yes"){
        double amountToAdd;
        cout<<"Enter the amount you want to add?"<<endl;
        cin>>amountToAdd;
        balance+=amountToAdd;
        cout<<"Now your current balance is "<<balance<<" Rs."<<endl;
    } else {
        cout<<"Alright"<<endl;
    }

    

}