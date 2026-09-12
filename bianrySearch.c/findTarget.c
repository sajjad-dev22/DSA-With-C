#include <stdio.h>
int main()
{
    int n;
    printf("Enter the siz of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    int found = -1;
    int low = 0;
    int high = n - 1;
    printf("Enter the target element to search:");
    scanf("%d", &target);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            found = mid;
            printf("Target found at index %d", found);

            return 0;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Target not found");
    return 0;
}