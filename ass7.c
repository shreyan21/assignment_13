#include <stdio.h>
#include <conio.h>
int hcf(int a, int b, int x)
{
    if (a % x == 0 && b % x == 0)
        return x;
    else
    {
        return hcf(a, b, --x);
    }
}

int main()
{
    int a, b, c;
    printf("Enter the numbers : ");
    scanf("%d%d", &a, &b);
    c = a > b ? b : a;
    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b, c));
    getch();
    return 0;
}