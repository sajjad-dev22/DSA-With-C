#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter the size of arry:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array Elments:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    printf("Sorted array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of swaps: %d", count);
    return 0;
}