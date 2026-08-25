#include<stdio.h>
#include<stdlib.h>
int main(){
 int *arr;
 int n = 5;
 arr = calloc(n,sizeof(int));
 if(arr==NULL){
   printf("memory allocation failed\n");
   return 1;
 }
 
 printf("the array is:");
 for(int i=0;i<n;i++){
   
 printf("arr[%d]=%d,address = %p\n",i,arr[i],(void*)arr);
 }
 printf("%d\n",*arr);
 printf("%d\n",*(arr+1));
 printf("%p\n",arr+1);
 printf("%p",arr+2);
 
 
 free(arr);
 return 0;
 
}

