#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[5][5];
  int *base;
  base=&a[0][0];
  printf("main base address is %d",*base);
  int i,j,n;
  int address=0;
  printf("\n enter row and coloum of element");
  scanf("%d%d",&i,&j);
  int uc=4, lc=0, lr=0;
  n=uc-lc+1;
  address=*base+(sizeof(int)*(n*(i-lr))+(j-lc));
  printf("The address of element =%d",address);
  getch();
}