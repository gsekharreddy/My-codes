#include<stdio.h>

int binarysearch(int arr[],int n,int target)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==target)
		return mid;
		else if(arr[mid]<target)
		l=mid+1;
		else
		r=mid+1;
	}
	return -1;
}

int main()
{
	int arr[10],i,n,target,pos;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value for position %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the target element : ");
	scanf("%d",&target);
	pos=binarysearch(arr,n,target);
	if(pos!=-1)
	printf("The element is found at index %d.",pos);
	else
	printf("Target element not found in the array.");
	return 0;

}