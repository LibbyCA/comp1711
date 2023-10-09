#include <stdio.h>

int main(){

    float fah;
    float celsius;
    
    printf("Enter your temperature");
    scanf("%f", fah);

    celsius = (fah-32)*(5/9);

    printf("The temperature is %g\n", celsius);

    return 0;


}