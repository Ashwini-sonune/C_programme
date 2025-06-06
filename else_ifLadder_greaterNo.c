#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\nEnter First Number");
    scanf("%d",&a);
    printf("\nEnter Second Number");
    scanf("%d",&b);
    printf("\nEnter Third Number");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
        printf("A is greater ");
    }
    else if(b>=a && b>=c)
    {
        printf("B is greater");
    }
    else
    {
        printf("C is greater");
    }
   
}