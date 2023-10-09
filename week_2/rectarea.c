#include <stdio.h>

int main(){

    float side;
    float width;
    float area;

    printf("Please enter the size of the length:");
    scanf("%f", &side);
    printf("Please enter the size of the width:");
    scanf("%f",&width);

    area = width * side;

    printf("The area of the rectangle is %f\n", area);

    return 0;

    

}