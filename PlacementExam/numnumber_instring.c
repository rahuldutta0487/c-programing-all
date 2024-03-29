#include<stdio.h>
#include<string.h>
int minimum(char ch[]){
    int min=-1;
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]>='0' && ch[i]<='9'){
            int digit=ch[i]-'0';
            if(min== -1 || digit<min){
                min=digit;
            }
        }
    }
    return min;
}
int main(){
    char ch[100]="hello432175world";
    int min=minimum(ch);
    if(min != -1){
        printf("%d",min);
    }
    else{
        printf("no data foumd\n");
    }
    return 0;
}