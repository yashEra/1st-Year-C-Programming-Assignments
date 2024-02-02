#include<stdio.h>

/**
    * Question - 2
**/

int num;
int total = 0;

int main(){

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num<1){
        printf("\nEntered number is less than 1\n");
    }else if (num>10){
        printf("\nEntered number is greater than 10\n");
    }else{
        for(int i=1; i<=num ; i++){
            total += i;
        }
    printf("\nAddition of numbers between 0 and you enterd number is %d\n", total);
    }

    return 0;
}
