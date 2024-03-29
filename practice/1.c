#include<stdio.h>
#include<string.h>
void arrange(char ch[100]){
    int len=strlen(ch);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(ch[i]>ch[j]){
                char temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
}
int main(){
    char ch[100]="helloworld";
    arrange(ch);
    puts(ch);
    return 0;
}