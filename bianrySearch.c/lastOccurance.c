#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array Elements:");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target Element:");
    scanf("%d", &target);
    int found = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            found = mid;
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
    if (found != -1)
    {
        printf("Last Occurance of Element %d", found);
    }
    else
    {
        printf("Target Not Found");
    }

    return 0;
}