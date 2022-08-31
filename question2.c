#include<stdio.h>
#include<stdlib.h>
int main()
{int n, s=0;
printf("enter the number of values you want to enter: ");
scanf("%d",&n);
int *ptr=(int*)(calloc(n,sizeof(int)));
for(int i=0;i<n;i++)
{
printf("enter the %d value: ",i+1);
scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
    s=s+ptr[i];
}
printf("%d ",s);
printf("\naverge is  %f",1.0*s/n);
free(ptr);
    return 0;
}