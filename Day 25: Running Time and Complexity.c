#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,cont=0;
    long int num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld",&num);
        for(int j=1;j<=sqrt(num);j++)if(num%j==0)cont++;               
        if(cont==1 && num!=1)printf("Prime\n");
        else printf("Not prime\n");
        cont=0;

    }   
    return 0;
}
