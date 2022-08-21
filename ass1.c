#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    if(n==1)
    return 1;
    else if(n>1)
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d\n",n,sum(n));
    getch();
    return 0;
}