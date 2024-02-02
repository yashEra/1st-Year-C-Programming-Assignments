#include<stdio.h>

/**
    * Question - 6
    * Y. E. Y. Amarasekara
    * CST/20/073
**/

int main(){

  for(int i = 0; i<6; i++){
    for(int j = 5; i < j; j--){
      printf(" ");
    }

    for(int j = 0 ; j <= i; j++){
      printf("*");
    }

    printf("\n");

  }

  for(int i = 5; i>0; i--){
    for(int j = 6; j > i; j--){
      printf(" ");
    }

    for(int j = 0 ; j < i ; j++){
      printf("*");
    }

    printf("\n");

  }


    return 0;
}

