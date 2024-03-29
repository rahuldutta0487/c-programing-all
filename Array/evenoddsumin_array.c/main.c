
#include <stdio.h>

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int evesum=0,oddsum=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            evesum=evesum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
        
    }
    int result=evesum-oddsum;
     printf("%d",result);
    

    return 0;
}
