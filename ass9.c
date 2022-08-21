#include<stdio.h>
#include<conio.h>
int countDigit(int n,int k)
{
    if(n/10==0)
    return ++k;
    else
    {   
        k++;
       return  countDigit(n/10,k);
    }

}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Total number of digits in %d are %d\n",n,countDigit(n,0));
    getch();
    return 0;
}