/* Write a program to enter any number and cheak it is prime number or not
Date:-22/12/2101*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();
  printf("Enter a number");
  scanf("%d",&n);
  for  (i=2;i<=n-1;i++)
  {
     if (n%i==0)
	  break;
  }
  if(i==n)
     printf("%d is a prime number",n);
  else
     printf("%d is not a prime number",n);
  getch();
  }



