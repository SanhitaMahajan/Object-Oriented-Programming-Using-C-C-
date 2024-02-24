//  while loop - examples 
#include<iostream>
using namespace std;

int main(){
    // example 1 
    int num=0;
    cout<<"Enter positive integer to start count down ";
    cin>>num;

    while(num>0){
        cout<<num<<" ";
        --num;
    }
    cout<<endl;
    cout<<"Blastoff"<<endl;
    cout<<endl;

    // //  example 2 
    int num2=0;
    cout<<"Enter a positive number to count up to ";
    cin>>num2;
    int i=1;
    while(num2>=i){
        cout<<i<<" ";
        i++;
    }

    cout<<endl;

    //  example 3 - 
    int number = 0;
    cout<<"Enter a integer less than 100 - ";
    cin>>number;
    while(number>=100){
        cout<<"Enter number less than 100 - ";
        cin>>number;
    }
    cout<<"Entered number is "<<number;

    cout<<endl;

    //  example 4 - 
    bool done = false;
    int number2=0;
    while(!done){
        cout<<"Enter an integer between 1 and 10  exculuding 1 & 10 - ";
        cin>>number2;
        if(number2<=1 || number2>=10){
            cout<<"Out of bound range, try again"<<endl;
        }
        else{
            cout<<"Entered number is "<<number2;
            done = true;
        }
    }

    return 0;
}