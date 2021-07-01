// squareroot.c
//gcc squareroot.c -lm
//gcc squareroot.c -o squareroot.o -lm

#inculde <stdio.h>
#include <math.h>
float squareroot (float A);

float main(){
    float a,s;

    printf("Type in a number \n");
    printf("After each input type the Enter key. \n");
    printf("Input a ");
    scanf("%f",&a);
    printf("The number you typed was "%f\n",a,s);

    s - squareroot(float a);

    printf("The squareroot of %f is %f.\n",a,s);

    return 0;
}

float squareroot(float a){
    float s = sqrt(a);
    return s;
}

