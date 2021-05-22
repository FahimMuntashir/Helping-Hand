#include <stdio.h>

int main()
{
    int n; 

    int elements;

    printf("enter how many elements you want to add: ");
    scanf("%d", &elements);
    int arr[elements];

    printf("enter the elements of the array: ");

    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &n);
        arr[i] = n;
    }

    int sum = 0;
    double avg;

    for (int i = 0; i < elements; i++)
    {
        sum += arr[i];
    }

    avg = sum / 5.0;

    int count = 0;
    for (int i = 0; i < elements; i++)
    {
        if (arr[i] > avg)
        {
            count++;
        }
    }

    printf("total above average number = %d\n", count);
}