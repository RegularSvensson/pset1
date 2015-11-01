// include libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare height variable
    int height;
    // run prompt until correct input recieved
    do
    {
        // print prompt on screen
        printf("Height: ");
        // get an integer from user
        height = GetInt();
        // exit loop when correct input recieved
    } while(height < 0 || height > 23);
    
    // write height number of rows
    for (int row = 1; row <= height; row++)
    {
        // for each row, print spaces
        for (int space = 1; space <= height - row; space++)
        {
            printf(" ");
        }
        // for each row, print hashes
        for (int hash = 1; hash <= row + 1; hash++)
        {
            printf("#");
        }
        // when row complete, start new line           
        printf("\n");
    }
}
