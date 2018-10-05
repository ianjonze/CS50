#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    int count = 0;

    do
    {
        n = roundf((get_float("Change:") * 100));
    }
    while (n < 0);

    //Use quarters 25
    while (n >= 25)
    {
        // printf ("%f", n);
        n = (n - 25);
        count++;
    }
    //Use Dimes 10
    while (n >= 10)
    {
        // printf ("%f", n);
        n = (n - 10);
        count++;
    }
    //use nickles 5
    while (n >= 5)
    {
        // printf ("%f", n);
        n = (n - 5);
        count++;
    }
    //use Cents 1
    while (n >= 1)
    {
        // printf ("%f", n);
        n = (n - 1);
        count++;
    }
    printf("%i\n", count);
}