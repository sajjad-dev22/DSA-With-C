#include <stdio.h>
int main()
{
    int n;

    int target;
    int found = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
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
        }
    }
    if (found == -1)
    {
        printf("Target not found");
    }
    else
    {
        printf("Last occurrence at index %d", found);
    }
    return 0;
}