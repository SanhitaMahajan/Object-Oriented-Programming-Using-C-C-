/*
Problem Statement - 
Implement a calculator that takes two numbers and an operator as input. 
Use a switch statement to perform addition, subtraction, multiplication, or division based on the operator.
*/

/*
Algorithm - 
1. Start 
2. Read two numbers from user - num1, num2 
3. Display operator choice to user
4. Read operator from user - op
5. switch on op
   case '+' : print num1 + num2; break;
   case '-' : print num1 - num2; break;
   case '*' : print num1 * num2; break;
   case '/' :  
             if(num2!=0) : print num1 / num2
             else : print "Error - Division by zero" 
             break;
   default : print "Invalid operator entered"
             break;
6. End switch statement   
7. Stop   
*/

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    getchar(); // Consume the newline character left in the buffer

    printf("\nOperator Choices:\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
    printf("Enter operator choice: ");
    scanf("%c", &op);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator entered\n");
            break;
    }

    return 0;
}

/*
Flowchart Link - 
https://drive.google.com/file/d/1kSF1rFSiEUewVevHx_l8wiSZDTbreSVz/view?usp=sharing
*/