#include<stdio.h>
#include<conio.h>
int sumDigit(int n)
{
    if(n>=1&&n<=9)
    return n;
    else 
    {
        return n%10+sumDigit(n/10);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    printf("Sum of digits of %d is %d\n",n,sumDigit(-n));
   else
    printf("Sum of digits of %d is %d\n",n,sumDigit(n));
    getch();
    return 0;
}