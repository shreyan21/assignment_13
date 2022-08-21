#include<stdio.h>
#include<conio.h>
int sumSquare(int n)
{
    if(n==1)
    return 1;
    else if(n>1)
    {
        return n*n+sumSquare(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of squares of first %d natural numbers is %d\n",n,sumSquare(n));
    getch();
    return 0;
}