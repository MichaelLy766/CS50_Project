#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    //prototype of count letters
    int count_letters(string text);

    //get string from user
    string Text = get_string ("Text: ");

    //declare variables number of words, spaces, and sentences
    int NumbWords;
    int NumbSent = 0;
    int NumbSpaces = 0;
    int Letters = 0;
    int size = strlen (Text);

    //loop for as many times as there are chars in word
    for (int i = 0; i < size; i++)
    {
        //count letters
        if (isalpha(Text[i]))
        {
            Letters = Letters + 1;
        }
        //count spaces to count words
        if (Text[i] == ' ')
        {
            NumbSpaces = NumbSpaces + 1;
        }
        //counts ends of sentences to count sentences
        else if (Text [i] == '.' || Text [i] == '?' || Text [i] == '!')
        {
            NumbSent = NumbSent + 1;
        }
    }

    //get # of words
    NumbWords = NumbSpaces + 1;

    //compute L and S
    float L = (float) Letters / (float) NumbWords * 100;
    float S = (float) NumbSent / (float) NumbWords * 100;

    //Coleman-Liau formula
    float grade = 0.0588 * L - 0.296 * S - 15.8;

    //round grade
    int RoundedGrade = round(grade);

    //print grade
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", RoundedGrade);
    }
}