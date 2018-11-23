//quick sort

#include<stdio.h>

void quick_sort(int a[],int first,int last){
	int temp,low,high,pivot;
	low=first;
	high=last;
	pivot=a[(first+last)/2];
	
	do{
		while(a[low]<pivot)
		low++;
		while(a[high]>pivot)
		high--;
		if(low<=high){
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
		}
	}while(low<=high);
	
	if(first<high){
		quick_sort(a,first,high);
	}	
	if(low<last){
		quick_sort(a,low,last);
	}
}

int main(){
	int a[20],size,i;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter elements of array");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	
	int first,last;
	first=0;
	last=size-1;

	quick_sort(a,first,last);
	
	printf("array after insertion sort");
	for(i=0;i<size;i++)
	printf("%2d",a[i]);
	return 0;
}

