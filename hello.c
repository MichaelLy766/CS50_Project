//Includes Header Files
#include <stdio.h>
#include <cs50.h>

//Main function
int main(void)
{
    //Gets User's name and stores that into variable name of type string
    string name = get_string("What is your name?\n");
    //prints helle [user's name]! 
    printf("Hello %s!\n", name);
}