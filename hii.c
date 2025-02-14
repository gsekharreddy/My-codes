#include<stdio.h>
#include<unistd.h>
#define MAX 10
int main()
{
    printf("%d",MAX);
    int a,b;
    printf("\nEnter numbers to add : ");
    scanf("%d %d",&a,&b);
    sleep(1);
    printf("The sum of tthe provided numbers is = %d",a+b);
    return 0;
}