/*
Problem Statement - 
Write a program to find circumference and area of circle using functions.
*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

// function to calculate circumference of circle 
float calculateCircumference(float radius){
    return 2*PI*radius;
}

// function to calculate area of circle
float calculateArea(float radius){
    return PI*radius*radius;
}

int main(){

    float radius;
    // input radius from user 
    printf("\nEnter radius of circle - ");
    scanf("%f",&radius);

    // calculate circumference & area using function 
    float circumference = calculateCircumference(radius);
    float area = calculateArea(radius);

    // output result 
    printf("\nCircumference of circle is - %.2f ", circumference);
    printf("\nArea of circle is - %.2f ", area);

    return 0;
}