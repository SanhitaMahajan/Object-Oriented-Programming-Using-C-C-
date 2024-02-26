#include <stdio.h>

// Display numbers from 1 to N (using for loop)
// but skip number divisible by 5
int main(){

	int n, i;
	printf("Enter a number : \n");
	scanf("%d", &n);
	
	for(i=1 ; i<=n ; i=i+1){	
		if(i%5 == 0) continue; 
		printf("%d \n", i);
	}
	
	return 0;
}