#include <stdio.h>

int main(){

    int a;
    int square;

    while (a<11)
    {
        square = a * a;
        printf ("number is %d\n", square);
        a++;
    }
    return 0;
}