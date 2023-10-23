#include <stdio.h>

// calculate mean
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

    int number;
    int num_lines = 10;
    int total = 0;
    float mean;
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        total += number;
        fprintf(file, "%d\n", number);
    }

    mean = number / num_lines;
    printf("The mean is %f", mean);

    fclose(file);
    return 0;
}