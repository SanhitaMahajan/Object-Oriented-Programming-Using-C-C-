#include<iostream>
using namespace std;

/*
Below Pattern - 

    *
   **
  ***
 ****
*****

*/

int main(){

    int i,j,row;
    cout<<"Enter number of rows";
    cin>>row;

    for(int i=0;i<row;i++){
        // leading whitespace 
        for(int j=0;j<2*(row-i)-1;j++){
            cout<<" ";
        }

        for(int k=0;k<=i;k++){
            cout<<" *";
        }
        cout<<"\n";
    }
}