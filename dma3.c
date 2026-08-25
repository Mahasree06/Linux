#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr;
int old_n=5,new_n=10;
arr=(int*)malloc(old_n * sizeof(int));
if(arr==NULL)
   return 1;
for(int i=0;i<old_n;i++)
   arr[i]=i;
  //resize to size
 int *temp=(int*)realloc(arr,new_n * sizeof(int));
 if(temp == NULL){
   printf("realloc failed!\n");
   free(arr);
   return 1;
  }
 arr=temp;
 for(int i=old_n;i<new_n;i++)
   arr[i]=i;
free(arr);
}
