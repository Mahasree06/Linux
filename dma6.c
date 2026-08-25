#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
int id;
char name[20];
float mark;
};
int main()
{int n=3;
struct student s[n];
struct student *ptr;
ptr = (struct student *)malloc( n * sizeof(struct student));
if(ptr == NULL){
printf("memory alloction failed\n!");
}
for(int i=0;i<n;i++){
ptr=&s[i];
printf("enter the student :%d ",i+1);
scanf("%d",&ptr->id);
scanf("%s",ptr->name);
scanf("%f",&ptr->mark);
printf("enter the student :%d\n",i+1);
printf(" id:%d\n name:%s\n mark:%.2f\n",ptr->id,ptr->name,ptr->mark);}
//printf("\n");}
free(ptr);
return 0;
}
