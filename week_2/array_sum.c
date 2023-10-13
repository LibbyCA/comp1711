#include <stdio.h>

int main(){

    int a [5];
    int count;
    int total;

    for (count = 0; count < 5; count ++)
    {
        a[count] = count * 10;
    }

    total = a[0] + a[1] + a[2] + a[3] + a[4] + a[5];

    printf("result is %d\n", total);

    return 0;


}