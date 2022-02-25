#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int t = height - 1; t > i; t--)
        {
            printf(" ");
        }
        for (int t = 0; t <= i; t++)
        {
            printf("#");
        }
        printf("  ");

        for (int t = 0; t <= i; t++)
        {
            printf("#");
        }
        printf("\n");
    }
}
