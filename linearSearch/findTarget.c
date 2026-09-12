#include <stdio.h>
int main()
{
    int n;
    int target;
    int found = -1;
    // int n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the Size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number of elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            printf("Target found at index %d", found);
            break;
        }
    }
    if (found == -1)
    {
        printf("Target not found");
    }
    return 0;
}