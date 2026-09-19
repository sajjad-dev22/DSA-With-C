#include <stdio.h>
int rev = 0;
int isPalindrome(int n)
{
    if (n == 0)
    {
        return 0;
    }
    rev = rev * 10 + n % 10;
    isPalindrome(n / 10);
}
int main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d", num);
    int original = num;
    isPalindrome(num);
    if (rev == original)
    {
        printf("%d is Palindrom", num);
    }
    else
    {
        printf("%d Not  Palindrom", num);
    }
    return 0;
}