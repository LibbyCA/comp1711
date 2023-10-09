#include <stdio.h>

int main(){

    int value1;
    int value2;
    int swap;    

    printf("Enter your first value");
    scanf("%d",&value1);
    printf("Enter your second value");
    scanf("%d",&value2);

    swap = value1;
    value1 = value2;
    value2 = swap;

    printf("Your first value is %d and your second value is %d", value1, value2);

    return 0;


}