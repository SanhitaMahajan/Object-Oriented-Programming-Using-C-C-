/*
Problem Statement - Display name of the day based on the number entered by user 
1 - Monday 
2 - Tuesday 
3 - Wednesday 
4 - Thursday 
5 - Friday 
6 - Saturday 
7 - Sunday 
*/

/*
Algorithm - using if else statement
1. Start 
2. Read num 
3. if num == 1 : display "Monday"
   else if num == 2 : display "Tuesday"
   else if num == 3 : display "Wednesday"
   else if num == 4 : display "Thursday"
   else if num == 5 : display "Friday"
   else if num == 6 : display "Saturday"
   else if num == 7 : display "Sunday"
   else display "Invalid number for day"
4. Stop    
*/

/*
Algorithm - using switch statement
1. Start 
2. Read num 
3. Switch based on value of "num"
   case 1: Monday
   case 2: Tuesday
   case 3: Wednesday
   case 4 : Thursday
   case 5: Friday
   case 6: Saturday
   case 7: Sunday
   default : Invalid number for day
4. Stop   
*/

# include <stdio.h>
int main(){
    int num;
    printf("\nEnter day number - ");
    scanf("%d",&num);

    switch (num)
    {
    case 1: 
        printf("\nMonday");
        break;
    case 2: 
        printf("\nTuesday");
        break;
    case 3: 
        printf("\nWednesday");
        break;
    case 4: 
        printf("\nThursday");
        break;
    case 5: 
        printf("\nFriday");
        break;
    case 6: 
        printf("\nSaturday");
        break;
    case 7: 
        printf("\nSunday");
        break;
    default:
        printf("\nInvalid day number");
    }
    return 0;
}