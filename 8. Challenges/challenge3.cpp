/*
Frank's Crapet cleaning services - part II
charges : 
small room - $25 per room
large room - $35 per room
Estimate valid for 30 days 
Prompt the user for the number of small & large rooms tehy would like clenaed and provide estimate such as :
Estimate for carpet cleaning services 
Number of small rooms : 3
Number of large rooms : 1
Price for small room : $25
Price for large room : $35
Cost : $110
Tax : $6.6
Total Estimate : $116.6
This estimate is valid for 30 days 
*/


#include<iostream>
using namespace std;

int main(){

    cout<<"\nHello, Welcome to the Frank's Carpet Cleaning Service"<<endl;

    cout<<"How many small rooms would you like to cleaned ? "<<endl;
    int numberOfSmallRooms=0;
    cin>>numberOfSmallRooms;


    cout<<"How many large rooms would you like to cleaned ? "<<endl;
    int numberOfLargeRooms=0;
    cin>>numberOfLargeRooms;


    const double pricePerSmallRoom = 25.0;
    const double pricePerLargeRoom = 35.0;
    const double tax = 0.06;
    const int estimateExpiry = 30;

    double smallRoomCost = pricePerSmallRoom * numberOfSmallRooms;
    double largeRoomCost = pricePerLargeRoom * numberOfLargeRooms;
    double cost = smallRoomCost + largeRoomCost;

    double smallRoomTax = smallRoomCost * tax;
    double largeRoomTax = largeRoomCost * tax;

    double totalTax = smallRoomTax + largeRoomTax;

    double totalCost = cost + totalTax;


    cout<<"\nEstimate for room cleaning service : "<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"Number of small rooms : "<<numberOfSmallRooms<<endl;
    cout<<"Price per small room  : $"<<pricePerSmallRoom<<endl;
    cout<<"Number of large rooms : "<<numberOfLargeRooms<<endl;
    cout<<"Price per large room  : $"<<pricePerLargeRoom<<endl;
    cout<<"Cost : $"<<cost<<endl;
    cout<<"Tax  : $"<<totalTax<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Total estimate cost : $"<<totalCost<<endl;
    cout<<"Note - This esitame is valid for "<<estimateExpiry<<" days"<<endl;
    cout<<"==========================================================="<<endl;

    return 0;
}