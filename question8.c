#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr=(int*)malloc(sizeof(int)*3);
free(ptr);
//now ptr became a dangling pointer;
*ptr=23;
return 0;
}