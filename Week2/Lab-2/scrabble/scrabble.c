#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calc_score(char word[]);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    char word1[20];
    char word2[20];
    printf("Player 1: ");
    scanf("%s", word1);

    printf("Player 2: ");
    scanf("%s", word2);

    int score1 = calc_score(word1);
    int score2= calc_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie\n");
    }
}


int calc_score(char word[])
{
    int total = 0;

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            total += points[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            total += points[word[i] - 'a'];
        }
    }

    return total;
}
