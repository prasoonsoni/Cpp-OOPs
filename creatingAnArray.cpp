#include <iostream>
using namespace std;
int main(){
    int number_of_members;
    string name_of_member;
    cout<<"How many family members do you have?"<<endl;
    cin>>number_of_members;
    string members[number_of_members] = {};
    for (int i = 0;i<number_of_members;i++){
        int j = i+1;
        cout<<"Name of member "<<j<<endl;
        cin>>name_of_member;
        members[i]=name_of_member;
    }
    for (int i = 0;i<number_of_members;i++){
        cout<<members[i]<<endl;
    }

}