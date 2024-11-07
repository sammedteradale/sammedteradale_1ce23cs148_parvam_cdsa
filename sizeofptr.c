#include<stdio.h>
int main()
{
    int a=50;
    int* ptr=&a;
    char b='g';
    char *ptr1=&b;
    printf("the value of a is %d\n",a);
    printf("adress of a is %u\n",&a);
    printf("the ptr is %u\n",ptr);
    printf("the size of ptr is %d\n",ptr);
    printf("the size of ptr is %d\n",sizeof(ptr1));
    return 0;
}