#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],i;
  int address=0;
  int *base;
  base=&a[0];
  printf("main base address is %d",*base);
  printf("\n enter the index value of element");
  scanf("%d",&i);
  address=*base+(sizeof(int)*i);
  printf("The address of element =%d",address);
  getch();
}