#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    printf("Enter the elements in the array \n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter value for index %d : ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10 - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The sorted elements are: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
