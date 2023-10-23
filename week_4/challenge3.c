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

    char *letter;
    int num_lines = 10;
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", letter);
        fprintf(file, "%s\n", letter);
    }

    fclose(file);
    return 0;
}