#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50]="city";
    char c[20]="byyy";
    strcpy(b,a);
    printf("%s\n",b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinate str2 %s\n",b);
    return 0;

}