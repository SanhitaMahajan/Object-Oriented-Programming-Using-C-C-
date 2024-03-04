#include<stdio.h>

int main(){
	int num, count, temp;
	printf("Enter a integer number: \n");
	scanf("%d", &num);
	
	count = 0; temp = num;
	do{
		temp = temp/10;
		count = count+1;
	}while(temp != 0);
	
	printf("Digit count for %d is %d",num,count);
	
	return 0;
}