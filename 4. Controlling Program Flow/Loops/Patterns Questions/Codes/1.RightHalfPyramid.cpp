#include<iostream>
using namespace std;
/*
Below Pattern - 

*
* *
* * *
* * * *

*/

int main(){

    int i,j, row;
    cout<<"Enter the number of rows - ";
    cin>>row;

    for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
        cout<<"\n";
	}

    return 0;
}