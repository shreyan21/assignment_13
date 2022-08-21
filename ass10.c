#include <stdio.h>
#include <conio.h>
int power(int x, int n)
{
    if (n == 1)
        return x;
    else if (n == 0)
        return 1;
    else if (n > 1)

        return x * power(x, n - 1);
}
int main()
{
    int a, b;
    printf("Enter the numbers : ");
    scanf("%d%d", &a, &b);
    printf("%d to the power %d is %d\n", a, b, power(a, b));
    getch();
    return 0;
}