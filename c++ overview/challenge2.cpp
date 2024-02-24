/*
Problem Statement - 
Frank's carpet cleaning service 
charges $30 per room 
sales tax rate is 6%
estimate are valid for 30 days 
prompt the user for the number of rooms they would likee to cleaned and provide an estimate such as :
Estimate for room cleaning service :
Number of rooms : 2
Price per room : $30 
Cost : $60
Tax : $3.6
Total estimate : $63.6
This estimate is valid for 30 days 
*/

#include<iostream>
using namespace std;

int main(){

    cout<<"\nHello, Welcome to the Frank's Carpet Cleaning Service"<<endl;

    cout<<"How many rooms would you like to cleaned ? "<<endl;
    int numberOfRooms=0;
    cin>>numberOfRooms;

    const double pricePerRoom = 30.0;
    const double tax = 0.06;
    const int estimateExpiry = 30;

    cout<<"\nEstimate for room cleaning service : "<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"Number of rooms : "<<numberOfRooms<<endl;
    cout<<"Price per room : $"<<pricePerRoom<<endl;
    cout<<"Cost : $"<<(numberOfRooms*pricePerRoom)<<endl;
    cout<<"Tax : $"<<(numberOfRooms*pricePerRoom*tax)<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Total estimate cost : $"<<(numberOfRooms*pricePerRoom)+(numberOfRooms*pricePerRoom*tax)<<endl;
    cout<<"Note : This esitame is valid for "<<estimateExpiry<<" days"<<endl;
    cout<<"==========================================================="<<endl;

    return 0;
}