#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = GetInt();
    } while(height <= 0 || height > 23);
    for (int row = 1; row <= height; row++)
    {
        for (int space = 1; space <= height - row; space++)
        {
            printf("#");
        }
        printf("\n");
    }
}
