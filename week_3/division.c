#include <stdio.h>

int main (){

    int num;
    printf ("Enter your number\n");
    scanf ("%d",&num);

    if ((num%4 == 0) && (num%5 == 0))
    {
        printf ("Number is divisble by 4 and 5");
    }
    else if (num%4 == 0)
    {
        printf("Number is divisible by 4");
    }
    else if (num%5 == 0)
    {
        printf ("Number is divisble by 5");
    }
    else
    {
        printf ("Number is not divisble by 5 or 4");
    }
    return 0;
}