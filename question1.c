#include<stdio.h>
#include<stdlib.h>
void fun(void)
{
     int n;
    printf("enter the length of the string: ");
    scanf("%d",&n);

   char *ptr=(char*)malloc(sizeof(char)*n);
   printf("enter the string: ");
   fflush(stdin);
   gets(ptr);
   char arr[n];  
   for(int i=0;i<n;i++)
   {
    arr[i]=ptr[i];
   }  
   printf("%s",arr);
}
int main()
{  
   fun();

   return 0;
}