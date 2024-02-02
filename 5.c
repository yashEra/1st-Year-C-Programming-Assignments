#include<stdio.h>

/**
    * Question - 5
    * Y. E. Y. Amarasekara
    * CST/20/073
**/

char sNames[10][10];
int ages[10];

int main(){

    int i = 0;

    for(i = 0; i < 10; i++ ){
        printf("Enter name of student %d : " , i + 1);
        scanf("%s", sNames[i]);

        printf("Enter age of student %d: " , i + 1);
        scanf("%d", &ages[i]);

  }
    printf("\nStudent who are between age 15 - 25 :\n");
    for(int i = 0; i < 10; i++){
        if(ages[i] > 15 && ages[i]< 25){
          printf("\t\t%s -> %d\n", sNames[i], ages[i]);
        }
    }

    return 0;
}
