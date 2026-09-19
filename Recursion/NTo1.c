#include <stdio.h>

void display(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    display(n - 1);
}

int main()
{
    int n;
    printf("Enter the Number N:");
    scanf("%d", &n);
    display(n);
    return 0;
}
