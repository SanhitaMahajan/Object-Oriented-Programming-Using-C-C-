/*
Write a program that takes two numbers as input and prints their sum.
*/

#include <stdio.h>

int main(){

    int num1,num2;
    printf("Enter two numbers - ");
    scanf("%d %d",&num1,&num2);

    int sum = num1+num2;
    printf("Sum: %d\n",sum);

    return 0;
}