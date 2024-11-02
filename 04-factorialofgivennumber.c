// #include<stdio.h>

// int main(){
//     int i=1 ,n,fact=1;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     if(n==0 || n==1){
//         printf("factorial is 1\n");

        
//     }
//     else{

//     for(i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("the factorial of %d is %d \n",n,fact);
//     }
    
    
//     return 0;
// }


//using while loop
#include<stdio.h>

int main(){
    int i=1,n,factorial;
    printf("enter a number\n");
    scanf("%d",&n);
    if(i==0){
        printf("the factorial is 1\n");
        
    }
    else{
        while(i<=n){
            factorial*=i;
            i++;
        }
        printf("the factorial of given number is %d\n",factorial);
        
    }
    
    return 0;
}