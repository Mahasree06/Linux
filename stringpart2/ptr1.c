#include<stdio.h>
int add (int*x,int*y){
   return *x+*y;
}
int main(){
   int a=20;
   int b=10;
   int *p=&a;
   int *q=&b;
   int result = add(*p,*q);
   int *r=&result;
   printf("%d",result);
   printf("%p",&result);
   return 0;
}

