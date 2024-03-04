#include<iostream>
#include<iomanip>
#include <cctype>
#include<string>
using namespace std;

int main(){

    //  string initialization
    string s0;
    std::string s1="Apple";
    string s2="Banana";
    string s3="kivi";
    string s4="apple";
    string s5=s1;          // Apple 
    std::string s6 = s1.substr(0, 3); // App 
    std::string s7(10, 'x');  // xxxxxxxxxx

    // cout<<s0<<endl; // empty string
    // cout<<s0.length()<<endl; // 0

    // cout<<"String Initialized"<<endl;
    // cout<<"S1 is initialized to "<<s1<<endl;
    // cout<<"S2 is initialized to "<<s2<<endl; 
    // cout<<"S3 is initialized to "<<s3<<endl; 
    // cout<<"S4 is initialized to "<<s4<<endl; 
    // cout<<"S5 is initialized to "<<s5<<endl; 
    // cout<<"S6 is initialized to "<<s6<<endl; 
    // cout<<"S7 is initialized to "<<s7<<endl;


    // //  comparizion between two strings 
    // cout<<"\nComparision "<<endl;
    // cout<<boolalpha;
    // cout<<s1<<" == "<<s4<<" : "<<(s1==s4)<<endl;
    // cout<<s1<<" == "<<s2<<" : "<<(s1==s2)<<endl;
    // cout<<s1<<" != "<<s2<<" : "<<(s1!=s2)<<endl;
    // cout<<s1<<" < "<<s2<<" : "<<(s1<s2)<<endl;  
    // cout<<s1<<" >"<<s2<<" : "<<(s1>s2)<<endl;  
    // cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl;
    // cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl;


    // // Assignment 
    // s1="Watermelon";
    // cout<<"S1 is now "<<s1<<endl;

    // s2=s1;
    // cout<<"S2 is now "<<s2<<endl;

    // s3 = "Sanhita";
    // cout<<"S3 is now "<<s3<<endl;

    // s3[0]='A';
    // cout<<"S3 change first letter to 'A' "<<s3<<endl;

    // s2.at(3)='s';
    // cout<<"s2 change second letter to 's' "<<s2<<endl;


    // concatenation of strings 

    // s3="Watermelon";
    // s3 = s5+" and "+s2+" juice ";
    // cout<<"s3 is now - "<<s3<<endl;
    // s3 = "nice"+"cold"+ s5+"juice"; // compiler error - invalid operands to binary expression


    // //  for loop 
    // s1="Apple";
    // for(int i=0;i<s1.length();i++){
    //     cout<<s1.at(i)<<" ";  // s1[i]
    // }
    // cout<<endl;


    // //  range bbased for loop 
    // for( char c:s1){
    //     cout<<c<<" ";
    // }
    // cout<<endl;


    // //  substring 
    // s1="This is a test";
    // cout<<s1.substr(0,4)<<endl;   // this 
    // cout<<s1.substr(5,2)<<endl;   // is 
    // cout<<s1.substr(10,4)<<endl;  // test 


    // //  erase 
    // s1 = "This is a test";
    // s1.erase(0,5);  // erase this from s1 result in "is a test"
    // cout<<"s1 is now - "<<s1<<endl;


    // getline 
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    cout<<"Your full name is "<<fullName<<endl;

}