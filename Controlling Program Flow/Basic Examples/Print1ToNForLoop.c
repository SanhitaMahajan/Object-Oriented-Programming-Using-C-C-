#include <stdio.h>

// Display numbers from 1 to N (using for loop)
int main()
{
	int n, i;
	printf("Enter a number : \n");
	scanf("%d", &n);
	
	//n=5, i=6
	
	for(i=1 ; i<=n ; i=i+1){
		printf("%d \n", i);
	}
	
	return 0;
}