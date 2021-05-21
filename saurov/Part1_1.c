#include <stdio.h>
#include <string.h>
int main()
{
    char ch[200];

    printf("enter some words with spaces: ");
    gets(ch);

    int count = 0;

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);
}