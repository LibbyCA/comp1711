#include <stdio.h>

int main (){

    int mark;
    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

    if (mark == 0)
    {
        printf ("The mark of %d is zero\n",mark);
    }
    else if (mark < 40)
    {
        printf("The mark of %d is fail\n", mark);
    }
    else{
        printf ("The mark of %d is pass\n", mark);
    }
    return 0;
}