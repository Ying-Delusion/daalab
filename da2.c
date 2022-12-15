#include<stdio.h> 
#include<time.h>
void bsearch (int, int [], int, int ,int);
void bsearch (int key, int a [],int size, int low, int high)
{
	int mid = (low+high)/2;
	if (low < high)
	{
		if (a [mid] == key)
		{
			printf ("Element found at index %d and position %d\n", mid, mid+1); 
			return;
		}
		else if (key < a [mid])
		{
			high =mid-1;
 			bsearch (key, a, size, low, high);
		}
		else if (key > a [mid])
		{
			low =mid+1; 
			bsearch (key, a, size, low, high);
	}
	else
	{ 
		printf ("Element not found\n"); 
		return;
	}
}

int main()
{
	int size,key,low,high,mid; 
	printf("Enter size\n"); 
	scanf("%d",&size); 
	low=0,high=size-1;
	int a[size];
	printf("Enter array elements\n"); 
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key\n"); 
	scanf("%d",&key); 
	clock_t start=clock();
	bsearch(key,a,size,low,high);
	clock_t end=clock();
	printf("Start time is %lf\n",(double)start); 
	printf("End time is %lf\n",(double)end); 
	printf("Total time is %lf\n",(double)(end-start));
	return 0;
}

