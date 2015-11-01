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
    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
