#include<stdio.h>
#include<math.h>

int main(){
    int number,i;
    int prime=0;
    printf("enter a number\n");
    scanf("%d",&number);
 for(int i=2;i<sqrt(number);i++){
    if(number%i==0){
        prime=1;
        break;
    }
 }
   if(prime){
    printf("is a  NOT PRIME number\n");
    
   }else{
    printf("is a PRIME number\n");
    
   }
   return 0;
   }



