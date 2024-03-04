/*
Problem Statement - 
Calculate the factorial of a given integer number.
*/

/*
Enter number: 5
Factorial= 5*4*3*2*1= 2*3*4*5*1 = 120

f(n)= n* n-1 * n-2 * n-3 .... 3 * 2 * 1 
*/

/*
Algorithm: ( using iterative method )
1. Start 
2. Read num 
3. i=num, fact=1
4. Repeat till i > 1:
    fact = fact * i 
	i--
5. Display fact 
*/

#include<iostream>
using namespace std;

unsigned int factorial(unsigned int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter Number - "<<endl;
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<< factorial(num)<<endl;
    return 0;
}

/*
Practice Link - 
https://www.geeksforgeeks.org/problems/factorial5739/1
*/