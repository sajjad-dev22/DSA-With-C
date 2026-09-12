#include <stdio.h>
int main()
{
    int n;

    int target;
    int found = -1;
    int count = 0;
    printf("Enter the Size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number of elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element t search:");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            count++;
        }
    }
    printf("The target element occurs %d times in the array.", count);
    return 0;
}