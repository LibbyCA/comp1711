#include <stdio.h>

// need to enter 10 letters instead of numbers
// doesn't work

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char letter[5];
    scanf("%s", letter);
    number = atoi(letter);

    int num_lines = 10;
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", number);
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;
}