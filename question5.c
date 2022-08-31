#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        int *ptr=(int*)malloc(sizeof(int));
        *ptr=arr[i];
        s=s+(*ptr);
        free(ptr);
    }
    printf("sum is: %d",s);
    return 0;
}