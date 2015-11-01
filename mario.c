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
    printf("You chose: %d\n", height);
    printf("Hello git!\n");
    printf("You did it!\n");
    printf("#\n");
}
