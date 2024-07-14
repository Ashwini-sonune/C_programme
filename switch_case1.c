#include<stdio.h>
#include<conio.h>
int main()
{
    int Month;
    printf("Enter number to show month of year");
    scanf("%d",&Month);
    
    {
    switch(Month)
    {
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
          break;
        case 4:
        printf("April");
          break;
        case 5:
        printf("May");
          break;
        case 6:
          break;
        printf("June");
        case 7:
        printf("July");
          break;
        case 8:
        printf("August");
          break;
        case 9:
        printf("September");
          break;
        case 10:
        printf("Octomber");
          break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");

        default:
    
        printf("Enter valid number");
        break;
    }
    }
}