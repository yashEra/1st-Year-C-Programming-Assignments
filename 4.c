#include<stdio.h>
#include<stdlib.h>

/**
    * Question - 4
**/

int notesVal[6] = {5000, 1000, 500, 100 , 50 , 20};

void calcNotes(int amount , int i){

    if(i < 6 ){
        printf("%d notes : %d\n" , notesVal[i], amount/notesVal[i]);
        amount -=  (amount/notesVal[i]) * notesVal[i];
        calcNotes(amount , i + 1);
    }
}

int main(){

    int amount;
    printf("Enter amount you want :");
    scanf("%d" ,&amount);

    if(amount > 50000 || amount < 20){
        printf("\n********************* Out of maximum or minimum amount range *********************\n");
        main();
    }else{
        calcNotes(amount , 0);
    }

    return 0;
}
