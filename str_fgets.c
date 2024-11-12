#include<stdio.h>
int main(){
    char str[10];
    printf("enter the name");
    fgets(str,sizeof(str),stdin);
    printf("the name is %s",str);

return 0;

,
}