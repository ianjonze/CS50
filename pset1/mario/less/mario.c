#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Enter number between 0-23:");
    }
    while (n < 0 || n > 23);

    //print out Rows
    for (int i = 0; i < n; i++)
    {

        //print out spaces
        for (int j = 0; j < n - i - 1 ; j++)
        {
            printf(" ");
        }

        //print out hashes
        for (int k = 0; k < (i + 2); k++)
        {
            printf("#");
        }
        printf("\n");
    }
}