/*write a program to enter any number and check number is palindrome number or not
Date:-24\12\2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,c,s=0,r;
  clrscr();
     printf("Enter any number:");
     scanf("%d",&n);
     c=n;
  while(n>0)
 {
    r=n%10;
    s=r+(s*10);
    n=n/10;
 }
  if(c==s)
    printf("palindrome number");
  else
    printf("palindrome number is not");
  getch();
}

