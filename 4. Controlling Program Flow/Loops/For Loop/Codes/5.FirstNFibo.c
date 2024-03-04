#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Enter no. of terms of fibonacci : \n");
    scanf("%d", &num);
    if(num < 0) {
        printf("Enter positive numbers only for no. of terms.");
        return 1;
    }

    int n1=0, n2=1, n3;
    for(int i=0; i<num; i++){
        if(i <=1){
            printf("%d ", i);
        }else{
            n3 = n1 + n2;
            printf("%d ", n3);
            n1=n2;
            n2=n3;
        }
    }

    return 0;
}