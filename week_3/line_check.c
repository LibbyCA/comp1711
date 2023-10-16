#include <stdio.h>

int main (){

    int num;
    printf ("Enter the number\n");
    scanf ("%d", &num);

    if (num == 0)
    {
        printf ("Number is equal to 0\n");
    }
    else if (num < 0)
    {
        printf ("Number is negative\n");
    }
    else
    {
        printf ("Number is positive\n");
    }
    return 0;
}