#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\n Enter first value");
    scanf("%d",&a);
    printf("\n Enter second value");
    scanf("%d",&b);
    printf("\n Enter third value");
    scanf("%d",&c);
    if(a>=b)
    {
      if(a>=b)
      {
        printf("\n a is greater");
      }
      else
      {
        printf("\n b is greater");
      }
    }
    else
    {
        if(b>=c)
        {
            printf("\n b is greater");
        }
        else
        {
            printf("\n c is greater");
        }
    }
}