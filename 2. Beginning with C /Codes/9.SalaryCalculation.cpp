/*
Problem Statement - 
 Write a program to calculate the monthly in hand salary of an employee : 
	take user input for basic salary,
	HRA is 40% of basic salary,
	PF amount to be deducted is 12% of basic,
	Medical allowance is Rs 1200 per month, 
	Traveling allowance is Rs 800 per month,
	Professional tax to be deducted is Rs 300.
*/

/*
Example:	
	basic = 10000.0; //user input
	hra = 0.40 * basic;
	pf = 0.12 * basic;
    inHandSalary = basic  + hra - pf + 1200 + 800 - 300;
*/

/*
Algorithm - 
1. Start 
2. Read basic salary from user 
3. Calculate :
    hra = 0.40*basic
    medical allowance = 1200
    traveling allowance = 800
    PF = 0.12*basic
    PT = 300
4. Calculate inHandSalary :
    inhandSalary = basic + hra - pf + medical allowance + traveling allowance - professional tax
5. Display inHandSalary
6. Stop 
*/

#include<iostream>
using namespace std;

int main(){

    float basic = 0.0;
    cout<<"\nEnter your basic salary - ";
    cin>>basic;

    float hra = 0.40 * basic;
    float pf = 0.12 * basic;
    int medicalAllowance = 1200;
    int travelingAllowance = 800;
    int professionalTax = 300;

    float inHandSalary = basic + hra + medicalAllowance + travelingAllowance - pf - professionalTax;

    cout<<"\nYour inhand salary is "<<inHandSalary;

    return 0;
}