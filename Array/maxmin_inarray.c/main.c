#include<stdio.h>
int main(){
    int arr[5]={2,4,1,8,9};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int max=arr[0];
        for(int j=1;j<5;j++){
          if(max<arr[j]){
              max=arr[j];
        }
    }
    printf("max %d\n",max);
      printf("min %d",min);
    
    return 0;
}