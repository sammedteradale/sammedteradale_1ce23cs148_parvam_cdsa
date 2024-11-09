#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50]="city";
    char c[20]="byyyyyyy";
    strcpy(b,a);
    printf("%s\n",b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinate str2 %s\n",b);
    int res=strcmp(b,c);
    if(res==0){
            printf("the value is equal");
    }
    else if(res==-1){
        printf("the value is lesser");
    }
    else{
        printf("the value is greater than str1");
    }
    
    return 0;

}