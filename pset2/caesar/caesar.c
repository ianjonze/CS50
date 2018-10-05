#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string s = get_string("plaintext: ");
        int key = atoi(argv[1]);
        printf("ciphertext:");
        for (int i = 0, n = strlen(s); i < n; i++)

            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                {
                    printf("%c", (((s[i] - 65) + key) % 26) + 65);
                }
                else if (islower(s[i]))
                {
                    printf("%c", (((s[i] - 97) + key) % 26) + 97);
                }
            }
            else
            {
                printf("%c", s[i]) ;
            }
    }
    else
    {
        printf("You did not enter a key!");
        return 1;
    }
    printf("\n");
}