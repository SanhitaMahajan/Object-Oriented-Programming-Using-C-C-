/*
1. Write a program to print 'Hello' on screen and then print your name on the same line. 
Hello Shakir

2. Write a program to print 'Hello' on screen and then print your name on a separate line.
Hello
Shakir
*/

#include <stdio.h>
#include <string.h>

int main(){

    //  question 1 - 
    char name[100];
    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Hello %s",name);
    printf("\n\n-----------------------------");

    //  question 2 - 
    printf("\nHello\n%s",name);
}