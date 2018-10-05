//Vigenere's Cipher///

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET 26

int main(int argc, string argv[])
{
    if (argc == 2)
    {

        int k = strlen(argv[1]);

        // checks if input is alpha and returns error if not.

        for (int i = 0; i < k; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("please ensure key is alphabetical");
                return 1;
            }
        }

        //Gets word or phrase to cipher

        string s = get_string("plaintext:");

        //defines k as length of string

        printf("ciphertext:");

        //loops through length of plaintext input

        for (int i = 0, j = 0, n = strlen(s); i < n; i++)
        {

            //Defines m as % j to loop around key

            int m = j % k;

            //Checks to see if charachter is alphabetical in plaintext

            if (isalpha(s[i]))
            {
                //implements Vigenere's Cipher depending on whether Keyword charachter or Plaintext charachter case.

                if (isupper(s[i]) && isupper(argv[1][m]))
                {
                    printf("%c", (((s[i] - 'A') + (argv[1][m] - 'A')) % ALPHABET) + 'A');
                }

                else if (isupper(s[i]) && islower(argv[1][m]))
                {
                    printf("%c", (((s[i] - 'A') + (argv[1][m] - 'a')) % ALPHABET) + 'A');
                }

                else if (islower(s[i]) && isupper(argv[1][m]))
                {
                    printf("%c", (((s[i] - 'a') + (argv[1][m] - 'A')) % ALPHABET) + 'a');
                }

                else if (islower(s[i]) && islower(argv[1][m]))
                {
                    printf("%c", (((s[i] - 'a') + (argv[1][m] - 'a')) % ALPHABET) + 'a');
                }

                //only increments j when alphanumeric

                j++;
            }
            else
            {
                //if non alpha print charachter but do not increment j

                printf("%c", s[i]);
            }
        }
    }
    else
    {
        //returns error if no keyword is provided

        printf("You did not enter a key!\n");
        return 1;
    }
    printf("\n");
}