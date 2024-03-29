#include<stdio.h>
int isAp(int arr[],int n){
    int diff=arr[1]-arr[0];
    for(int i=2;i<n;i++){
        if(arr[i]-arr[i-1]!=diff){
            return 0;
        }
    }
    return 1;

}

int main(){
    int arr[5]={1,2,4,8,16};
    int n=5;
    if(isAp(arr,n)){
        printf("AP\n");
    }
    else{
        printf("GP");
    }
    return 0;
}