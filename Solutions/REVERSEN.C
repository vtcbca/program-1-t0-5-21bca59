/*write a program to enter any number and print in reverse number
Date:-24\12\2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,r;
 clrscr();
 printf("Enter value of a=>");
 scanf("%d",&a);
 while(a>0)
 {
 r=a%10;
 printf("\n reverse number=>%d",r);
 a=a/10;
 }
 getch();
 }
