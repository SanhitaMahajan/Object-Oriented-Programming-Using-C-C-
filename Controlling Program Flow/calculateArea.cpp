#include<iostream>
#include <vector>
using namespace std;

//  Do while Loop 

int main(){

    char selection;
    do{
        double width,height;
        cout<<"Enter width and height seprated by spaces - ";
        cin>>width>>height;

        double area = width*height;
        cout<<"Area is - "<<area<<endl;

        cout<<"Calculate another ? (y/n) : ";
        cin>>selection;

    }while(selection=='Y' || selection=='y');

    cout<<"Program ended....";

    return 0;
}