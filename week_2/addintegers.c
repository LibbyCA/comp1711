#include <stdio.h>

int main(){

    int first;
    int second;
    int answer;
    printf("Enter your first number:");
    scanf("%d", &first);
    printf("Enter your second number:");
    scanf("%d", &second);

    answer = first + second;

    printf("The answer is %d\n", answer);

    return 0;



}