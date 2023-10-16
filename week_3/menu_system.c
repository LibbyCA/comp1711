#include <stdio.h>

int main (){
    int a;
    printf ("enter number to proceed to next menu");
    scanf ("%d", &a);

    switch (a)
    {
        case 0: printf ("continue\n");
        break;

        case 1: printf ("back\n");
        break;

        case 2: printf ("redo\n");
        break;

        case 3: printf ("type\n");
        break;

        case 4: printf ("symbols\n");
        break;

        default: printf ("Invalid choice\n");
    }


}