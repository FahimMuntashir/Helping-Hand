#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    char modify[100];

    printf("enter a word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
       if (word[i]>=65 && word[i]<=90)
       {
           word[i] = word[i]+ 32;
       } else if (word[i]>=97 && word[i] <=122)
       {
           word[i] = word[i] - 32;
       }
       
       
    }

    printf("converted word: %s\n", word);
}