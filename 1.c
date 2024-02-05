#include<stdio.h>

/**
    * Question - 1
    * Electricity Bill
**/

int startingMeeter;
int endingMeeter;
float bill_amount;

int main(){

    printf("\n******************** Starting electricity bill calculation ********************\n\n");

    printf("Enter month starting meter reading: ");
    scanf("%d",&startingMeeter);

    printf("Enter month ending meter reading: ");
    scanf("%d",&endingMeeter);

    int monthly_usage = endingMeeter - startingMeeter;

    if(monthly_usage<0){ /// check If input order is correct
        printf("\n**************** Your input order was wrong, please try again! ****************\n\n");
        return main();
    }else{

        if(monthly_usage < 100){
            bill_amount = monthly_usage*1.50;

        }else if(99 < monthly_usage && monthly_usage < 200){
            bill_amount = 99*1.5+(monthly_usage - 99)*2.50;

        }else if(199 < monthly_usage && monthly_usage < 500){
            bill_amount = 99*1.5+100*2.5+(monthly_usage - 199)*3.50;

        }else{
            bill_amount = 99*1.5+100*2.5+300*3.5+(monthly_usage - 499)*5;
        }
    }

    printf("\nYour monthly bill amount is LKR %.2f\n",bill_amount);

    printf("\n********************************* Thank you! **********************************\n\n");

    return 0;
}
