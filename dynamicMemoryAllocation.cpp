#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of students?"<<endl;
    cin>>n;
    float *marks = new float[n];
    for(int i=0;i<n;i++){
        cin>>*(marks+i);
    }
    for(int i=0;i<n;i++){
        cout<<*(marks+i)<<endl;
    }
    return 0;
}