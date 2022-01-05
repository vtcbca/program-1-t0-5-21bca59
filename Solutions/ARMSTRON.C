/*write a program to enter any number and check armstrong number
Date:-27/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,x,r,sum=0;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&n);
  x=n;
   while(x!=0)
   {
   r=x%10;
   sum=sum+r*r*r;
   x=x/10;
   }
   if (sum==n)
   printf("%d is armstrong number",n);
   else
     printf("%d is not armstrong number ",n);
     getch();
     }