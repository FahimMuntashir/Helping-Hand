#include <stdio.h>
int numToRepeatMax(int *arr1, int n, int k)
{
    int mx = arr1[0], result = 0;
    for (int i = 0; i < n; i++)
        arr1[arr1[i] % k] += k;

    for (int i = 1; i < n; i++)
    {
        if (arr1[i] > mx)
        {
            mx = arr1[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int n;
    printf("enter number of  elements ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


            // 4 5 3 3 4 

    int maxElement=0, count;
    int maxC = 0;
    for (int i = 0; i < n; i++) 
    {
        count = 1; // 5 6 5 2 3
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > maxC)
                {
                    maxElement = arr[j];
                }
            }
        }
    }

    printf("number appears most in that array= %d\n", maxElement);
}