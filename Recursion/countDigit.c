#include <stdio.h>
int count = 1;
int countDigit(int num)
{
    if (num == 0)
        return 0;

    return count + countDigit(num / 10);
}
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("Number of Digit in %d is %d ", num, countDigit(num));
    return 0;
}