#include<stdio.h>
#include<stdlib.h>
int main()
{int n;
printf("enter the number of value you want: ");
scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int));
    int *ptr1=(int*)malloc(n*sizeof(int));
//assignment for malloc funtion;
for(int i=0;i<n-1;i++)
{
    printf("enter the %d value: ",i+1);
    scanf("%d",&ptr[i]);
}
//assignment for calloc function;
for(int i=0;i<n-1;i++)
{
    printf("enter the %d value: ",i+1);
    scanf("%d",&ptr1[i]);
}
//printing malloc output
for(int i=0;i<n;i++)
{
    printf("the %d value: %d\n",i+1,ptr[i]);
    
}
// observation-->it throws a garbage value at unassigned location



//printing calloc output
for(int i=0;i<n;i++)
{
    printf("the %d value: %d\n",i+1,ptr1[i]);
    
}
//observation-->it throws a 0 at unassigned location
    return 0;
}