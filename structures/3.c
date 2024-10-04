#include<stdio.h>
struct employee{
   int id;
   char name[20];
   float salary;
}d;
int main(){
 
   printf("enter the id,name and salary:\n\n");
   scanf("%d%s%f",&d.id,d.name,&d.salary);
   display(&d);
   return 0;
}
void display(struct employee *p){
   printf("id=%d\n",p->id);
   printf("name=%s\n",p->name);
   printf("salary=%f\n",p->salary);
}
