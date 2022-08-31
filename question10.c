#include<stdio.h>
#include<stdlib.h>
int main()
{int n,temp;
   printf("enter the size of the array :");
scanf("%d",&n);
int *ptr=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
    printf("enter the %d value: ",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(ptr[j]<ptr[i])
        {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        }
    }
}
printf("maximum number is: %d\n",ptr[n-1]);
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(ptr[j]>ptr[i])
        {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        }
    }
}
printf("minimum number is: %d",ptr[n-1]);
    return 0;
}