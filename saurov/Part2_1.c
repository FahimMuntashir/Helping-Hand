#include <stdio.h>

int main()
{
    int n;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter a number: ");
        scanf("%d", &n);
        arr[i] = n;
    }

    int dup[5];
    for (int i = 0; i < 5; i++)
    {
        dup[i] = arr[i];
    }

    for (int i = 1; i < 5; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    int max = arr[0];

    printf("max number = %d\n", max);

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max == dup[i]) 
        {
            count++;
        }
    }

    printf("total number of equals: %d\n", count);
}