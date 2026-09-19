#include <stdio.h>
int rev = 0;
int reverseNumber(int n)
{
    if (n == 0)
        return 0;

    rev = rev * 10 + n % 10;
    reverseNumber(n / 10);
}
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);
    reverseNumber(n);
    printf(" Reverse Number :%d", rev);
    return 0;
}