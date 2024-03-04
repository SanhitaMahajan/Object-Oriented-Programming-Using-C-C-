#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){

    char firstName[20];
    char lastName[20];
    char fullName[50];
    char temp[50];

    // //  cout<<firstName;  // will likely display garbage!

    // cout<<"Please enter your first name : ";
    // cin>>firstName;

    // cout<<"Please enter your last name : ";
    // cin>>lastName;

    // //  strlen function - returns the length of the string / character 

    // cout<<"Hello, "<<firstName<<" your first name has "<<strlen(firstName)<<" characters "<<endl;
    // cout<<"Hello, "<<lastName<<" your last name has "<<strlen(lastName)<<" characters "<<endl;

    // //  copy full name to last name
    // strcpy(fullName, firstName);

    // //  concatenate full name to a space 
    // strcat(fullName, " ");

    // //  concatenate last name to full name 
    // strcat(fullName, lastName);

    // cout<<"Your full name is "<<fullName<<endl;



    // cout<<"Enter your full name : "<<endl;
    // cin>>fullName; // Sanhita Mahajan 

    // cout<<"Your full name is "<<fullName<<endl; // Sanhita 


    // cout<<"Enter your full name : "<<endl;
    // cin.getline(fullName,50); // Sanhita Mahajan 

    // cout<<"Your full name is "<<fullName<<endl; // Sanhita Mahajan 


    // // Copying strings to arrays
    // std::strcpy(temp, "Rohit");
    std::strcpy(fullName, "Sanhita Mahajan");

    // //  compare the two strings

    // if(strcmp(temp,fullName)==0){
    //     cout<<temp<<" and "<<fullName<<" are the same"<<endl;
    // }
    // else{
    //     cout<<temp<<" and "<<fullName<<" are different"<<endl;
    // }
    
   for (int i = 0; i < std::strlen(fullName); i++) {
        if (std::isalpha(fullName[i])) {
            fullName[i] = std::toupper(fullName[i]);
        }
    }

    // Print the modified fullName
    std::cout << "Modified fullName: " << fullName << std::endl;


    return 0;
}