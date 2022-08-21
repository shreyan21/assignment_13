#include<stdio.h>
#include<conio.h>
int sumEven(int n)
{
    if(n==1)
    return 2;
    else if(n>1)
    {
        return 2*n+sumEven(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of first %d even natural numbers is %d\n",n,sumEven(n));
    getch();
    return 0;
}