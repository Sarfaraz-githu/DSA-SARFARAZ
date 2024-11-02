#include<stdio.h>

int main(){
    int i,res=0,sum=0;
    for(i=1;i<=10;i++){
        res=i*8;
        sum+=res;
    }
    printf("the sum of all the values in 8th table is %d\n",sum);
    
    return 0;
}