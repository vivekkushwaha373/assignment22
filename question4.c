#include<stdio.h>
#include<stdlib.h>
int main()
{
   char *ptr=(char*)malloc(sizeof(char));
   int *arr=(int*)malloc(sizeof(int));
   float *maa=(float*)malloc(sizeof(float));

   printf("Enter Integer Value: ");
   scanf("%d",arr);
   getchar();
   printf("Enter character Value: ");
   scanf("%c",ptr);
   printf("Enter Float Value: ");
   scanf("%f",maa);
   printf("Entered values are: %d %c %.2f",*arr,*ptr,*maa);
    free(ptr);
    free(arr);
    free(maa);
    return 0;
}