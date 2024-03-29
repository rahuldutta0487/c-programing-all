#include<stdio.h>
int minmm(char ch[100]){
    int min=-1;
    for(int i=0;ch[i]!='\0';i++){
        if((ch[i]>='0') && (ch[i]<='9')){
            int digit=(ch[i]-'0');
            if((min==-1)|| digit<min){
                min=digit;
            }
        }
    }
    return min;
}
int main(){
    char ch[400]="hello54367world";
    int min = minmm(ch);
    if(min!=-1){
        printf("%d",min);
    }
    else{
        printf("Doesnot have min");
    }

    return 0;
}