#include<iostream>
using namespace std;

int main(){

    bool equalResult = false, notEqualResult = false;
    int num1=0, num2=0;
    cout<<"Enter two numbers to check equality : "<<endl;
    cin>>num1>>num2;

    equalResult = (num1==num2);
    notEqualResult = (num1!=num2);

    cout<<" comparison result ( equals ) : "<<equalResult<<endl;
    cout<<" comparison result ( not equals ) : "<<notEqualResult<<endl;

    cout<<boolalpha;

    //  this will display true or false instead of 1 or 0 
    cout<<" comparison result ( equals ) : "<<equalResult<<endl;
    cout<<" comparison result ( not equals ) : "<<notEqualResult<<endl;

    return 0;

}