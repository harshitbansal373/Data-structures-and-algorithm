//insertion sort

#include<stdio.h>

int main(){
	int a[20],size,ptr,i,temp;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter elements of array");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=1;i<size;i++){
		temp=a[i];
		ptr=i-1;
		while(ptr>=0 && temp<a[ptr]){
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
	printf("array after insertion sort");
	for(i=0;i<size;i++)
	printf("%2d",a[i]);
	return 0;
}
