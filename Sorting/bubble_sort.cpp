//bubble sort

#include<stdio.h>
#include<conio.h>

int main(){
	int a[20],i,j,size,temp;
	printf("enter size of array");
	scanf("%d",&size);
	
	printf("enter elements of array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("array of bubble sort");
	for(i=0;i<size;i++){
		printf("%2d",a[i]);
	}
	return 0;
}
