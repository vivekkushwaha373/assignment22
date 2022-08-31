#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s=0;
    printf("number of values you want to enter: ");
    scanf("%d",&n);
   int *ptr=(int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)
   {
    printf("enter the %d value: ",i+1);
    scanf("%d",&ptr[i]);
   }
   for(int i=0;i<n;i++)
   {
    s=s+ptr[i];
   }
   printf("the sum of numbers is: %d ",s);
    return 0;
}