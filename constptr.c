#include<stdio.h>
int main(){
    int a=30;
    int b=40;
    int* const ptr=&a;
    *ptr=30;
    printf("the value of ptr is %d",*ptr);
    return 0;
}