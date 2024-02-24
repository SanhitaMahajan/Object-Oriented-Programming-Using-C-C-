#include<iostream>
using namespace std;

int main(){

    //  infinite for loop example 
    for( ; ; ){
        cout<<"This will print forever";
    }

    // infinite while loops example
    while(true){
        cout<<"This will print forever";
    }

    //  infinite do-while loop example 
    do{
        cout<<"This will print forever";
    }while(true);

    // infinite while loop example
    while(true){
        char again;
        cout<<"Do you want to loop again? (y/n)";
        cin>>again;

        if(again=='N' || again=='n'){
            break;
        }
    }


}
