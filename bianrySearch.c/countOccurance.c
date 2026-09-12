#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Size of array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array Elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the Target Element");
    scanf("%d", &target);
    int count = 0;
    int low = 0, high = n - 1;
    int first = -1, last = -1;
    // Find the first occurrence of the target element
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            /* code */ first = mid;
            high = mid - 1;
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

    low = 0;
    high = n - 1;
    // Find the last occurrence of the target element
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            /* code */ last = mid;
            low = mid + 1;
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
    // Calculate the count of occurrences of the target element
    count = (last - first + 1);
    printf("count of element is %d", count);
    return 0;
}