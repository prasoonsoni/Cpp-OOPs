#include<iostream>
using namespace std;
bool linearSearch(int arr[],int data, int MAXSIZE);
int main(){
    int MAXSIZE, dataToSearch;
    cout<<"Enter Number of Elements in an array ?"<<endl;
    cin>>MAXSIZE;
    int arr[MAXSIZE];
    for(int i=0;i<MAXSIZE;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Enter data to search"<<endl;
    cin>>dataToSearch;
    bool result = linearSearch(arr, dataToSearch, MAXSIZE);
    if(result){
        cout<<"Element Found"<<endl;
    } else {
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}
bool linearSearch(int arr[], int data, int MAXSIZE){
    for(int i=0;i<MAXSIZE;i++){
        if(arr[i]==data){
            return true;
        }
    }
    return false;
}