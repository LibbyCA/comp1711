#include <stdio.h>

int main (){
    
    int num;
    num = 0;

    while (num != -1) 
    {
        printf ("Enter a number\n");
        scanf ("%d", &num);
        if ((num >=0)&&(num<=100))
        {
            printf ("This is within the range\n");
        }
        else
        {
            printf ("This isn't within the range\n");
        }
    }
    return 0;


    

}