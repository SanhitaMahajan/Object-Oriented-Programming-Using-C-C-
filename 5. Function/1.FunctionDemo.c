#include<stdio.h>

void displayMessage();

int sum(int x, int y ){
    return x+y;
}

int main() {
    displayMessage(); // calling function

    int result = sum(10, 20);
    printf("Sum = %d \n", result);

    displayMessage();

    return 0;
}

void displayMessage() {
   printf("Good Morning \n"); 
}