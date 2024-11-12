#include<stdio.h>
int main(){
    char str[10];
    printf("enter the name");
    scanf("%s",str);
    printf("the name is %s ",str);
    int length=strlen(str);
    printf(" %d is the length of string",length);

return 0;


}