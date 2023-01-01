#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }


    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO returns false if vote does not match names of candidates
    bool valid = false;
    int i = 0;
    while (!valid && i < candidate_count)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            valid = true;
            candidates[i].votes++;
        }
        i++;
    }
    return valid;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int highest = candidates[0].votes;
    int winners = 0;

    //finds the highest vote count
    for (int i = 1; i < candidate_count; i++)
    {
        if (candidates[i].votes > highest)
        {
            highest = candidates[i].votes;
        }
    }

    //get number of candidates with the highest vote count and their indexes
    int indexOfWinners[MAX];
    for (int i = 0; i < candidate_count; i++)
    {
        if (highest == candidates[i].votes)
        {
            winners++;
            indexOfWinners[winners - 1] = i;
        }
    }

    for (int i = 0; i < winners; i++)
    {
        printf("%s\n", candidates[indexOfWinners[i]].name);
    }
    return;
}