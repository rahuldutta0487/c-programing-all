#include<stdio.h>
int main(){
   // int n;
  //  printf("enter number of rows :");
    //scanf("%d",&n);
    //int m;
    //printf("enter number of colums :");
    //scanf("%d",&m);
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=6;j++){
           if(i==1||i==4 || j==1||j==6) 
           printf("*");
           else printf(" ");
            
            
            
        }
        printf("\n");
    }
}


