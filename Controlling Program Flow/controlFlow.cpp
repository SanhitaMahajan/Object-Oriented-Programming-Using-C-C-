/*
Shipping Cost Calculator - 
Ask the user for package dimension in inches length, width, height - these should be integers 
base cost - $2.50
All dimension must be 10 inches or less or else we cannot ship the package 
If package volume is greater than 100 cubic inches there is a 10% extra charge 
If package volume is greater than 500 cubic inches there is a 25% extra charge
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int length = 0,width = 0,height = 0;

    const double baseCost = 2.50;
    const int volumeThreshold1 = 100, volumeThreshold2 = 500;
    const int maxDimensionLength = 10;
    
    const double extraCharge1 = 0.01, extraCharge2 = 0.25; 

    cout<<"\nWelcome to the package cost calculator : "<<endl;
    cout<<"Enter length, width, height of the packgae in inches seprated by spaces : "<<endl;
    cin>>length>>width>>height;

    if(length > maxDimensionLength && width > maxDimensionLength && height > maxDimensionLength){
        cout<<"Sorry , package can't be shipped - package dimension exceeded";
    }
    else if(length>0 && width >0 && height >0){
        double packageCost = baseCost;
        double packageVolume = length*width*height;
        
        // If package volume is greater than 100 cubic inches there is a 10% extra charge 

        if(packageVolume>volumeThreshold1){
            packageCost += packageCost*extraCharge1;
        }
        // If package volume is greater than 500 cubic inches there is a 25% extra charge

        else if(packageVolume>volumeThreshold2){
            packageCost += packageCost*extraCharge2;
        }

        cout<<fixed<<setprecision(2)<<endl;
        cout<<"The volume of your package is : "<<packageVolume<<"cubic inches"<<endl;
        cout<<"Your package will cost $ "<<packageCost<<" to ship."<<endl;
    }
    else {
        cout<<"You have entered incorrect dimensions of package."<<endl;
    }

    cout<<endl;

}
