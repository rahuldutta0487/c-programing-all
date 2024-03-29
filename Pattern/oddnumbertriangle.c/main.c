#include<stdio.h>
int main(){
    int n;
    printf("enter rhe number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter rhe number of rows :");
    scanf("%d",&m);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
           printf("%d ",a);
           a+=2;
        } 
         
        printf("\n");
    }
    return 0;
}
