/* Problem statement - 
Ask user to enter 3 integers. caluclate the sum of the 3 integers then calulate the average of the 3 integers 
Display the 3 integers entered, the sum of the 3 integers and the averag eof the 3 integers. 
*/
#include<iostream>
using namespace std;

int main(){

    int num1=0,num2=0,num3=0;
    int sum=0;
    const int count =3;
    double average =0.0;

    cout<<"Enter 3 integers seprated by spaces :"<<endl;
    cin>>num1>>num2>>num3;

    int total = num1+num2+num3;

    average = static_cast<double>(total)/count;

    cout<<"The three numbers entered are : "<<num1<<" "<<num2<<" "<<num3<<endl;
    cout<<"The sum of three numbers is : "<<total<<endl;
    cout<<"Average of three numbers is : "<<average<<endl;

    return 0;
}