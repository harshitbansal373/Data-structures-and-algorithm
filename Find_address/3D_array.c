#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[3][5][5];
  int *base;
  base=&a[0][0][0];
  printf("main base address is %d",*base);
  int i,j,k,p,n;
  int address=0;
  printf("\n enter grid, row and coloum of element");
  scanf("%d%d%d",&i,&j,&k);
  int uc=4, ug=3;
  int lg=0, lc=0, lr=0;
  p=ug-lg+1;
  n=uc-lc+1;
  address=*base+(sizeof(int)*((p*(i-lg)*j*k)+(n*(i-lr))+(j-lc));
  printf("The address of element =%d",address);
  getch();
}