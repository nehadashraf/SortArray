#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i=0,x,temp;
    printf("please enter the numbers:\n");
    do
    {
        scanf("%i",&x);
        arr[i]=x;
        i++;
    }
    while(i<10);
    i=0;
    printf("Array is :");
    while(i<10)
    {
        printf("%i",arr[i]);
        i++;
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10-i-1; j++)
        {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray after sort is :");
    i=0;
    while(i<10)
    {
        printf("%i",arr[i]);
        i++;
    }
    return 0;
}
