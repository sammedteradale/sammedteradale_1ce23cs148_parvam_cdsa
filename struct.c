#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[50];
        flo marks;
    };
struct person p1={20,"spy",99.5};
printf("name is %s\n",p1.name);
printf("age is %d\n",p1.age);
printf("marks is\n%.2f",p1.marks);
 return 0;
}