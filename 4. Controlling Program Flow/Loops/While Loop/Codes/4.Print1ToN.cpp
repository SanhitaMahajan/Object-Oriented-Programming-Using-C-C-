#include <iostream>
using namespace std;

// Display numbers from 1 to N
int main(){
    
	int n, i;
	cout<<"Enter a number : \n";
    cin>>n;
	
	i = 1; //initialize i
	while(i <= n) //condition
	{
		printf("%d\n", i);
		i = i+1; // increment i
	}
	
	return 0;
}