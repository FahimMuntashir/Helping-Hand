#include<stdio.h>


int arr[100];


int factor(int n, int arr[]){

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            count++;
            arr[i-1]=i;
        }
        
    }

    return count;
    
}

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    printf("all factors: ");
    for (int i = 0; i < factor(n, arr); i++)
    {
        printf("%d ", arr[i]);
    }
        printf("\n");

    printf("total number of factors= %d\n", factor(n, arr));
    





}