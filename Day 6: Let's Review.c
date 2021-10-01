#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void f_indexed(char* s);
int main() {
    int t;
    char s[10240];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",s);
        f_indexed(s);
        
    }
    return 0;
}
void f_indexed(char* s){

    for(int i=0;i<strlen(s);i++){
        if(i%2==0)printf("%c",s[i]);
    }
    printf(" ");

    for(int i=0;i<strlen(s);i++){
        if(i%2!=0)printf("%c",s[i]);
    }
    printf("\n");

}
