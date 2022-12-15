#include<stdio.h> 
#include<time.h>
void quicksort(int a[],int low,int high);
 int partition(int a[],int low,int high); 
void swap(int*,int*);

void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi = partition(a,low,high); 
		quicksort(a,low,pi-1); 
		quicksort(a,pi+1,high);
	}
}

void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}

int partition(int a[],int low,int high)
{

	int pivot=a[high]; 
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]); return (i+1);
}

int main()
{
	int a[]={34,65,23,76,33};
	clock_t start=clock();
 	quicksort(a,0,4); 
	clock_t end=clock();
	printf("Start time is %lf\n",(double)start);
	 printf("End time is %lf\n",(double)end); 
	printf("Total time is %lf\n",(double)(end-start)); 
	for(int k=0;k<=4;k++)
	{
		printf("%d ",a[k]);
	}
	return 0;
}

