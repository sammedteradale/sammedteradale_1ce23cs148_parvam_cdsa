#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[50];
        float marks;
    };
struct person p1;
printf("enter the name");
fgets(p1.name,sizeof(p1.name),stdin);
p1.name[strcspn(p1.name,"\n")]=0;
printf("enter age");
scanf("%d",&p1.age);
printf("enter the marks");
scanf("%f",&p1.marks);
printf(" name is %s\n",p1.name);
printf(" age is %d\n",p1.age);
printf(" marks is %.2f",p1.marks);
 return 0;
}