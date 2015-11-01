#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        printf("Please give me a non-negative integer: ");
        height = GetInt();
    } while(height <= 0 || height > 23);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
