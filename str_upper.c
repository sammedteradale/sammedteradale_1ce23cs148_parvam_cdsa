#include<stdio.h>
#include<string.h>
int main(){
    char c[20]="byyyyyyy";
    for(int i=0;c[i]!='\0';i++){
        c[i]=toupper(c[i]);
       
    }
     printf("%s",c);
        return 0;
}