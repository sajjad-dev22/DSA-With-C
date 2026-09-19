#include <stdio.h>
void display(int n)
{
    if (n == 0)
    {
        return;
    }
    display(n - 1);
    printf("%d", n);
}
int main()
{
    int n;
    printf("Enter the N:");
    scanf("%d", &n);
    display(n);
    return 0;
}