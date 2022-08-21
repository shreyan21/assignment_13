#include<stdio.h>
#include<conio.h>
void fib(int n)
{  
    static int a=0;
    static int b=1;
    if(n==1)
    printf("%d ",a);
    else if(n==2)
    {
        fib(n-1);
        printf("%d ",b);
    }
    else if(n>2)
    {
        fib(n-1);
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("First %d terms of fibonacci series are : ",n);
    fib(n);
    getch();
    return 0;
}