/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks[10]={95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i=0;i<10;i++){
        if(marks[i]<35){
           printf("%d",i); 
        }
        
    }

    return 0;
}

