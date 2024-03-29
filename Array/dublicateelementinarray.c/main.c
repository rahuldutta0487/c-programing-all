
#include <stdio.h>

int main()
{
    int arr[8]={1,2,3,4,5,6,7,6};
    
    for(int i=0;i<8;i++){
       for(int j=i+1;j<8;j++){
           if(arr[i]==arr[j]){
               printf("%d is the dublicate element",arr[i]);
           }
       }
    }
    

    return 0;
}

