#include <stdio.h>

int main (){

    int speed = 299792458;
    int days;
    float distance;

    printf("Enter the number of days");
    scanf("%d",&days);

    distance = days * speed;

    printf("The distance is %g\n",distance);

    return 0;

}