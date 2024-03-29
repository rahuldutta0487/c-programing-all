#include<stdio.h>
int main(){
    int arr[8]={9,2,11,13,3,4,8,7};
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=1;i<8;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
       
    printf("%d",smax);
    return 0;
    
}
