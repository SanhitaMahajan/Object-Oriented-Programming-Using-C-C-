// convert EUR to USD 
#include<iostream>
using namespace std;

int main(){

    const double USDPerEUR = 1.19;
    cout<<"Welcome to the ERU to USD Converter!"<<endl;
    cout<<"Enter the value in EUR : "<<endl;

    double euros = 0.0;
    double dollars = 0.0;

    cin>>euros;

    dollars = euros * USDPerEUR;

    cout<<euros<<" euros is equivalent to "<<dollars<< " dollars"<<endl;
    
    return 0;
}