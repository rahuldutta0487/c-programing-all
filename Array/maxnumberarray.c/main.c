#include<stdio.h>
int main(){
    int arr[8]={9,2,11,13,3,4,8,7};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
    
}