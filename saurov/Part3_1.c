#include <stdio.h>

int maxNumber(int arr[])
{

    for (int i = 1; i < 5; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    int max = arr[0];

    return max;
}

int countEquals(int arr[]){
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (maxNumber(arr) == arr[i])
        {
            count++;
        }
    }
    return count;
}

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



    printf("max number = %d\n", maxNumber(arr));
    

    printf("total number of equals: %d\n", countEquals(arr));
}