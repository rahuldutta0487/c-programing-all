#include<stdio.h>
#include<string.h>
void arrange(char ch[100]){
    int length=strlen(ch);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(ch[i]>ch[j]){

              char temp=ch[i];
              ch[i]=ch[j];
              ch[j]=temp;
            }
            
        }
    }
}
int main(){
    char ch[100]="hello world";
    arrange(ch);
    puts(ch);
    return 0;
}