/*
Problem Statement - 
Write an Algorithm to Display the area and perimeter of rectangle from user , take required input from user 
*/

/*
ALGORITHM - 
1. Start
2. Read Length & Breadth of rectangle - l, b
3.  Area = l*b
4. Perimeter = 2 * ( l+b )
5. Display Area & Perimeter 
6. Stop  
*/

// code 
#include <stdio.h>
int main(){
    
    float length, width, area, perimeter;

    // Input length and width from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the calculated area and perimeter
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

/*
Flowchart link -
https://drive.google.com/file/d/1yimosqEpvMAfddyByR6pHvE4BjF8ZFsK/view?usp=sharing
*/