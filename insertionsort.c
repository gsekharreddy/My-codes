#include<stdio.h>

void insertionsort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}

int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element at arr[%d] th position : ",i);
        scanf("%d",&arr[i]);
    }   

    printf("Array before sorting :- \n");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("Array after sorting :- \n");
    printarray(arr,n);
    return 0;
}
