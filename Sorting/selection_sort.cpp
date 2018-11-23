//selection sort

#include<stdio.h>

int main(){
	int a[20],size,j,i,temp,min,loc;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter elements of array");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=0;i<size-1;i++){
		min= a[i];
		loc=i;
		for(j=i+1;j<size;j++){
			if(min>a[j]){
				min=a[j];
				loc=j;
			}
		}	
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
	printf("array after insertion sort");
	for(i=0;i<size;i++)
	printf("%2d",a[i]);
	return 0;
}

