#include<iostream>
using namespace std;
class Tour{
    public:
      string tripCode;
      int noOfAdults;
      int noOfKids;
      int kmTravelled;
      int totalFare;
    public:
        void enterTour();
        void assignFare();
        void showTour();
    
};
void Tour :: enterTour(){
    cin>>tripCode>>noOfAdults>>noOfKids>>kmTravelled;
}
void Tour :: showTour(){
    cout<<tripCode<<endl<<noOfAdults<<endl<<noOfKids<<endl<<kmTravelled<<endl<<totalFare<<endl;
}
void Tour :: assignFare(){
    if(kmTravelled>=1000){
        totalFare = noOfAdults*500 + noOfKids*250;
    } else if (kmTravelled<1000 && kmTravelled>=500){
        totalFare = noOfAdults*300 + noOfKids*150;
    } else {
        totalFare = noOfAdults*200 + noOfKids*100;
    }
}
int main(){
    int n;
    cin>>n;
    Tour tour[n];
    for(int i=0;i<n;i++){
        tour[i].enterTour();
        tour[i].assignFare();
    }
    for(int i=0;i<n;i++){
        tour[i].showTour();
    }
    return 0;
}