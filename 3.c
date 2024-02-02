#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
    * Question - 3
**/

int choice;

void cube(float * , float *);
void cylinder(float *, float * , float *);

int main(){

    float volume;

    puts("\t**************************");
	puts("\t*1. Cube(1)              *");
	puts("\t*2. Cylinder(2)          *");
	puts("\t**************************");
	printf("\tEnter your choice <1,2>: ");
    scanf("%d",&choice);

    if(choice == 1){
        float length =0;
        printf("\nEnter length of cube: ");
        scanf("%f", &length);

        cube(&length, &volume);

        printf("\nVolume of the cube is %.2f\n", volume);

    }else if (choice == 2){
        float height = 0;
        float radius = 0;

        printf("\nEnter height of cylinder: ");
        scanf("%f", &height);

        printf("Enter radius of cylinder: ");
        scanf("%f", &radius);

        cylinder(&radius , &height, &volume);

        printf("\nVolume of the cylinder is %.2f\n", volume);

    }else{
        printf("\n********************* Enter correct choice *********************\n");
        main();
    }

    return 0;
}

void cube(float *len , float *vol){
  *vol = pow((float) *len , 3.0);
}

void cylinder(float *rad , float *hei , float *vol){
  *vol = 3.14*pow((float)*rad, 2)**hei;
}
