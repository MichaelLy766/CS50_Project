#include <cs50.h>
#include <stdio.h>

// abstracted function to print hashtags
void PrintHashtag(int);

int main(void)
{
    //declares variables
    int size;
    int n = 1;

    //do while loop asking for size until user cooperates
    do
    {
        size = get_int("Height: ");
    }
    while (size < 1 || size > 8);

    //once user cooperates, excute pyramind, X is a placeholder for space
    while (n <= size)
    {
        //prints spaces before first hashtag of a layer
        for (int i = 0; i < size - n; i++)
        {
            printf(" ");
        }
        //prints appropriation number of left side hashtags according to layer
        PrintHashtag(n);
        //starts new line
        printf("\n");
        //raises n by one for while loop
        n++;
    }
}








// abstracted function to print hashtags
void PrintHashtag(n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}
