#include<stdio.h>
#include<stdlib.h>
int main(){
 int *arr;
 int n = 5;
 arr = malloc(n*sizeof(int));
 if(arr==NULL){
   printf("memory allocation failed\n");
   return 1;
 }
 printf("enter the array elements:");
 for(int i=0;i<n;i++){
   
 scanf("%d",&arr[i]);
 }
 arr=realloc(arr,10*sizeof(int));
 printf("enter the remaining elements:");
 for(int i=5;i<10;i++){
   
 scanf("%d",&arr[i]);
 }
 printf("the array is:");
 for(int i=0;i<10;i++){
   
 printf("%d",arr[i]);
 }
 
 
 
 
 free(arr);
 return 0;
 
}

