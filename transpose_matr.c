#include<stdio.h>
int main(){
    int r,c;
    printf("enter row & column:");
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
        }
        
         
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
            printf("%d ",a[j][i]);
            printf("the diagonal element is %d",a[i][j]);
        }
        }
    }
    
    return 0;
}