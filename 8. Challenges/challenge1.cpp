/*
Problem Statement - 
Create a C++ program that asks the user for their favourite number between 1 to 100 
then read this number from the console. 
Suppose the user enters 24 
then display 
Amazing!! That's my favourite number too!!
No really!!, 24 is my favourite number! 
*/

#include<iostream>

int main(){
    int favouriteNumber;
    std::cout<<"Enter number between 1 and 100"<<std::endl;
    std::cin>>favouriteNumber;

    std::cout<<"Amazing!! That's my favourite number too!!"<<std::endl;
    std::cout<<"No really!!, "<<favouriteNumber<<" my favourite number! "<<std::endl;

    return 0;

}