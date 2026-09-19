#include <stdio.h>
int fibNum(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibNum(n - 1) + fibNum(n - 2);
}
int main()
{
    int n;
    printf("Enter The N:");
    scanf("%d", &n);
    printf("%d", fibNum(n));
    return 0;
}