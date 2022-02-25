#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Ensure you input a single command line argument\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int k = atoi(argv[1]);
       
        string plaintext = get_string("Plaintext: ");
    
        printf("Ciphertext: ");
        
        int x = 0;
        for (int i = 0; x = strlen(plaintext), i < x; i++)
        {
            if (isupper(plaintext[i]))
            {
                printf("%c", toupper(((plaintext[i] + k) - 'A') % 26) + 'A');
            }
            else if (islower(plaintext[i]))
            {
                printf("%c", tolower(((plaintext[i] + k) - 'a')  % 26) + 'a');
            }
            else
            {
                printf("%c", plaintext[i]);
            }
            
        }
        printf("\n");
    }
    
}
