#include<stdio.h>
#include<conio.h>
int sumOdd(int n)
{
    if(n==1)
    return 1;
    else if(n>1)
    {
        return 2*n-1+sumOdd(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of first %d odd natural numbers is %d\n",n,sumOdd(n));
    getch();
    return 0;
}