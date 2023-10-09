#include <stdio.h>

int main(){

    float pi = 3.1415;
    float radius;
    float area;

    printf("Enter the size of the radius");
    scanf("%f",&radius);
    area = radius * radius * pi;

    printf("The area of the circle is %g\n", area);

    return 0;

}