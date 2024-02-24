#include<iostream>
using namespace std;

int main(){

    // example 1 
    int num=0;
    cout<<"Enter the number :";
    cin>>num;

    cout<<num<<" is "<<((num%2==0) ? "even" : "odd");

    //  example 2 
    int num1=0,num2=0;
    cout<<"\nEnter two integer separated by space : ";
    cin>>num1>>num2;

    if(num1!=num2){
        cout<<"\nLargest : "<<((num1>num2)? num1 : num2);
        cout<<"\nSmallest : "<<((num1<num2)? num1 : num2);
    }
    else{
        cout<<"The numbers are same"<<endl;
    }

    return 0;
}