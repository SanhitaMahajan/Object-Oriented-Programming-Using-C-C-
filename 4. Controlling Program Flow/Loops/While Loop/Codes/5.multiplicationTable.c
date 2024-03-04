/*
Problem Statement - 
Display the multiplication table of a given integer?
Example:
>> Enter the number : 5
	5 X 1 = 5
	5 X 2 = 10
	.
	.
	5 X 10 = 50
*/

/*
Algorithm - 
1. Start
2. Input the number for which multiplication table needs to be displayed.
3. Set a counter variable i to 1.
4. While i is less than or equal to 10, do steps 5-6.
5. Calculate the product of the input number and i.
6. Display the multiplication table entry in the format: input number x i = product.
7. Increment i by 1.
8. Repeat steps 4-7 until i becomes greater than 10.
9. End.
*/

#include <stdio.h>

void displayMultiplicationTable(int num) {
    int i = 1;
    while (i <= 10) {
        printf("%d X %d = %d\n", num, i, num * i);
        i++;
    }
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d\n", num);
    displayMultiplicationTable(num);
    return 0;
}

/*
Flowchart link - 
https://drive.google.com/file/d/1jXBd6mqGZ3MsmTcYYTLYToWpIPuX3l3-/view?usp=sharing
*/