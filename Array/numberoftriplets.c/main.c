

#include <stdio.h>

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12,totalTriplets=0;
    for(int i=0;i<8;i++){
       for(int j=i+1;j<8;j++){
           for(int k=j+1;k<8;k++){
            if(arr[i]+arr[j]+arr[k]==x){
              totalTriplets++;
            } 
           
           }
       }
    }
    printf("%d",totalTriplets);

    return 0;
}
