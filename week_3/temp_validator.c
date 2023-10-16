#include <stdio.h>

int main (){

    int temp;
    printf ("Enter the temperature\n");
    scanf ("%d",&temp);

    if ((temp >=-10) && (temp<= 40))
    {
        printf ("Valid temperature");
    }
    else
    {
        printf ("Invalid temperature");
    }
    return 0;
}