#include <stdio.h>
int sumOfDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumOfDigit(n / 10);
}
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);
    printf("%d", sumOfDigit(n));
    return 0;
}