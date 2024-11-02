// straight order

// #include<stdio.h>

// int main(){
//     int n ;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     int i =1;
//     while(i<=10){
//         printf("\n%d x %d = %d",n,i,(n*i));
//         i++;

//     }


//     return 0;
// }

//reverse order
#include<stdio.h>

int main(){
    int i=10 ,n;
   printf("enter number\n");
   scanf("%d",&n);
   while(i>=1){
    printf(" %d x %d =%d\n",n,i,(n*i));
    i--;
    
   }
   
   
    return 0;
}