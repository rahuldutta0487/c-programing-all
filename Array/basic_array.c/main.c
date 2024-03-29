#include <stdio.h>

int main(void) {
	//int arr[5] = {2,3,4,5,6};
	//arr[4]=100;
	//printf("%d", arr[4]);
	//float a[3]={1.2,2.3,4.5};
	//printf("%f", a[1]);
	//char arr[4]={'a','n','c','d'};
	//printf("%c", arr[2]);
	//int arr[4];
	//printf(" enter 1st element : ");
	//scanf("%d",& arr[0]);
    //printf(" enter 2nd element : ");
	//scanf("%d",& arr[1]);
	//printf(" enter 3rd element : ");
	//scanf("%d",& arr[2]);
	//printf(" enter 4th element : ");
	//scanf("%d",& arr[3]);
	
	//printf("%d", arr[2]);
	//int arr[5]={1,2,3,4,5};
	
	//for (int i=0;i<=4;i++){
	//    printf("%d", arr[i]); 
   //	}
    int arr[5];
    for (int i=0;i<=4;i++){
        printf("enter elemnt numner %d\n",i+1);
        scanf("%d",& arr[i]);
    }
    
	    
	printf("%d",arr[2]);
    	

	return 0;
}

