#include <stdio.h>
int power(int num, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return num * power(num, p - 1);
}
int main()
{
    int num, p;
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("Enter Power:");
    scanf("%d", &p);
    printf("%d", power(num, p));
    return 0;
}