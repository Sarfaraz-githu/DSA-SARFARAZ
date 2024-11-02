#include<stdio.h>

int main(){
    int n,i=1,res=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(i<=n){
       res +=i;
      
        i++;
        

    
    }
      printf("the sum of natural numbers from 1 to %d is %d\n",n,res);

   
    
    return 0;
}