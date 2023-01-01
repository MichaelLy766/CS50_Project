#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //if argc is not two, stop program and remind user
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //if not every char of argv[1] (key) is, stop program and remind user
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //changes the string number of argv[1] into a usable integer
    int Key = atoi(argv[1]);

    //gets plaintext from user
    string PlainText = get_string("Plaintext: ");
    printf("Ciphertext: ");

    //prints each char of the ciphertext according to plaintext and key
    for (int i = 0; i < strlen(PlainText); i++)
    {
        if (isupper(PlainText[i]))
        {
            printf("%c", (PlainText[i] - 65 + Key) % 26 + 65);
        }
        else if (islower(PlainText[i]))
        {
            printf("%c", (PlainText[i] - 97 + Key) % 26 + 97);
        }
        else
        {
            printf("%c", PlainText[i]);
        }
    }
    
    //new line at the end for the aesthetics
    printf("\n");
}