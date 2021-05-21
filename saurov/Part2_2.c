#include<stdio.h>

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

    int sum  = 0;
    double avg;

    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }

    avg = sum/5.0;
    int count =0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>avg)
        {
            count++;
        }
        
    }

    printf("total above average number = %d\n", count);
    
    
}