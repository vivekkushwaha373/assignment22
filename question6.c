#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,max;
    printf("enter the number of value you want to enter: ");
    scanf("%d",&n);
   int *num=(int*)calloc(n,sizeof(int));
   for(int i=0;i<n;i++)
   {
    printf("enter %d value: ",i+1);
    scanf("%d",&num[i]);
   }
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
     if(num[i]>num[j])
     {
        num[j]=num[i];
     }
   }
printf("the greatest number is: %d",num[n-1]);
free(num);
    return 0;
}