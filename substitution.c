#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, x = strlen(argv[1]) ; i < x ; i++)
        {
            if (isalpha(argv[1][i]) == false)
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
            if (x != 26)
            {
                printf("key must contain 26 charaters\n");
                return 1;
            }
            int same = 0;
            for (int k = i + 1 ; k < x ; k++)    
            {
                if (toupper(argv[1][i]) == toupper(argv[1][k]))
                {
                    same++;
                    printf("repeated character(s)\n");
                    return 1;
                }
            }
        }
        string s = get_string("plaintext: ");
        
        for (int i = 0, p = strlen(s) ; i < p ; i++)
        {
            if (islower(s[i]))
            {
                s[i] = tolower(argv[1][s[i] - 'a']);
            }
            else if (isupper(s[i]))
            {
                s[i] = toupper(argv[1][s[i] - 'A']);
            }
        }
        printf("ciphertext: %s", s);
        printf("\n");
        return 0;
        
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}
