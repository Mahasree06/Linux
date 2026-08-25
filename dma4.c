#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
   int id;
   char  name[20];
   float marks;
};
int main(){
     
   int n=3;
   
   struct student *s;
   s=malloc(n*sizeof(struct  student));
   if(s==NULL)
      printf("memory allocation failed:\n");
      return 1;
   }
   ptr->id=101;
   strcpy(ptr->name,"maha");
   ptr->marks=90.5;
   printf("id:%d\nName:%s\nmarks:%.2f\n",s->id,s->Name,s->marks);
   free(*s);
   return 0;
}
   
   
