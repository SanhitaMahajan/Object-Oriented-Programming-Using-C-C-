#include<iostream>
using namespace std;

int main(){

    //  simple increment
    int count =10;
    int result =0;

    cout<<"count :"<<count<<"\n"; // 10 
    count = count +1;

    cout<<endl;

    cout<<"count :"<<count<<"\n"; // 11
    cout<<endl;

    count++;
    cout<<"count :"<<count<<"\n"; // 12
    cout<<endl;

    ++count; 
    cout<<"count :"<<count<<"\n"; // 13
    cout<<endl;


    //  pre increment

    count = 10, result=0;
    cout<<"Cout :"<<count<<"\n"; // 10
    result = ++count;
    //  ressult = ++ count means first count will be incremented then it will be asssigned to result 
    //  1. count = count +1 
    //  result = count 
    cout<<endl;

    cout<<"Cout :"<<count<<"\n"; // 11
    cout<<"Result :"<<result<<"\n"; // 11

    cout<<endl;

    //  post increment
    count =10,result=0;
    result = count++;
    //  1. result = count 
    //  2. count = count +1;

    cout<<"Cout :"<<count<<"\n"; // 11
    cout<<"Result :"<<result<<"\n"; // 10
    cout<<endl;


    // pre increment

    count =10, result =0;
    cout<<"Cout :"<<count<<"\n"; // 10

    result = ++count + 10;
    //  1. count = count +1 
    //  2. result = count + 10;

    cout<<"Cout :"<<count<<"\n"; // 11
    cout<<"Result :"<<result<<"\n"; // 21



    // post increment

    count = 10, result = 0;
    cout<<"Cout :"<<count<<"\n"; // 10

    result = count++ + 10;
    //  1. result = count + 10; 
    //  2. count = count +1 

    cout<<"Cout :"<<count<<"\n"; // 11
    cout<<"Result :"<<result<<"\n"; // 20 


}