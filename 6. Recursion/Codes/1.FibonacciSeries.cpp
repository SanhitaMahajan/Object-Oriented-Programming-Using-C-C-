/*
Problem Statement - 
Display the first N terms of Fibonacci series.
*/

/*
Fibonacci series.
>> Enter no. of terms: 4
0,1,1,2
>> Enter no. of terms: 1
0
>> Enter no. of terms: 2
0,1

0,1,1,2,3,5,8,13,21....

Value at Nth term will be 
f(n) = f(n-1) + f(n-2)
*/

/*
Algorithm : 
1. Start
2. Read N ( number of terms in Fibonacci series )
3. if N = 0 , then return 0
4. if N = 1, then return 1
5. for N > 1  , return F(n-1)+F(n-2)
6. Stop
*/

#include<iostream>
using namespace std;

int fib(int N){
    if(N<=1){
        return N;
    }
    return fib(N-1)+fib(N-2);
}

int main(){
    int N;
    cout<<"Enter no of terms - ";
    cin>>N;

    cout<<"Fibonacci series for "<<N<<" terms is - "<<endl;
    for(int i=0;i<N;i++){
        cout<<fib(i)<<" ";
    }

    cout<<endl;
    // cout << N << "th term in fibonacci series is - " << fib(N);


    return 0;
}

/*
Time Complexity: Exponential, as every function calls two other functions.

Auxiliary space complexity: O(n), as the maximum depth of the recursion tree is n.
*/