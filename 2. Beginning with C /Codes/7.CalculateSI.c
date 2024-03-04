/*
Problem Statement - 
Write a program to calculate simple interest, take required input from user.
Hint :  SI = (principal * rate * years)/100
*/

/*
ALGORITHM - 
1. Start
2. Read principal amount, rate , year 
3. Calculate SI = (principal * rate * years)/100
4. Display SI
5. Stop  
*/

// code 
#include <stdio.h>
int main(){
    
    float si, principal, rate;
    int year;

    // Input principal , rate and year from the user
    printf("Enter principal amount - ");
    scanf("%f",&principal);

    printf("Enter rate - ");
    scanf("%f",&rate);

    printf("Enter year - ");    
    scanf("%d",&year);
  

    // Calculate simple interest 
    si = (principal * rate * year) /100.0;

    // Display the calculated simple interest 
    printf("Simple Interest: %.2f\n", si);

    return 0;
}
