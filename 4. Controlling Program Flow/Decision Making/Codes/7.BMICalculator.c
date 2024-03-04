/* 
Problem Statement
BMI Calculator:
Build a program that calculates the Body Mass Index (BMI) based on the user's weight and height input. 
Then, categorize the BMI into underweight, normal weight, overweight, or obese.
Hint:
BMI = weight / (height * height)
BMI Measurement	Weight Category
Below 18.5	Underweight
18.5 – 24.9	Normal weight
25.0 – 29.9	Overweight
30.0 and above	Obese
*/

/*
Algorithm 1 - 
1. Start
2. Input weight in kilograms (weight)
3. Input height in meters (height)
4. Calculate BMI using the formula: BMIWeight = weight / (height * height)
5. if( BMIWeight < 18.5 ) : print "Under weight"
   else if(BMIWeight >= 18.5 && BMIWeight < 24.9) : print "Normal weight"
   else if ( BMIWeight >= 25.0 && BMIWeight < 29.9) : print : "Overweight"
   else : print "Obese"
6. End  
*/

/*

Algorithm 2 - 
1. Start
2. Input weight in kilograms (weight)
3. Input height in meters (height)
4. To calculate BMI weight, call function calculateBMIWeight(weight, height) and store its result in the BMIWeight variable.
5. To print status, call function checkStatus(BMIWeight).
6. Stop

calculateBMIWeight(weight, height):
1. Start
2. Return weight / (height * height)
3. Return to main

checkStatus(BMIWeight):
1. Start
2. If BMIWeight is less than 18.5, print "Underweight".
   Else if BMIWeight is greater than or equal to 18.5 and less than 24.9, print "Normal weight".
   Else if BMIWeight is greater than or equal to 25.0 and less than 29.9, print "Overweight".
   Else, print "Obese".
3. Return to main
*/

#include<stdio.h>

float calculateBMIWeight(float weight, float height){
    return weight / (height * height);
}

void checkStatus( float BMIWeight){
    if(BMIWeight < 18.5){
        printf("\nunderweight\n");
    }
    else if(BMIWeight >= 18.5 && BMIWeight <24.9){
        printf("\nnormal weight\n");
    }
    else if(BMIWeight >= 25.0 && BMIWeight<29.9){
        printf("\noverweight\n");
    }
    else{
        printf("\nObese\n");
    }
}

int main(){

    float weight=0, height=0;
    printf("\nEnter your weight in kg - ");
    scanf("%f",&weight);
    printf("\nEnter your height in m - ");
    scanf("%f",&height);

    float BMIWeight = calculateBMIWeight(weight, height);

    printf("\nYour BMI weight is %.2f kg/m2\n", BMIWeight);

    checkStatus(BMIWeight);

    return 0;
}

/*
Flowchart link - 
https://drive.google.com/file/d/1zfADaBiP4o-gyVnwNtjlkCAWaAVby5zr/view?usp=sharing
*/