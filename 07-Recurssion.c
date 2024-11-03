
//factorial of number
// #include<stdio.h>

// int fact(int);
// int main(){
   
//     int factorial=fact(5);
//     printf(" factorial of a number is : %d\n",factorial);
    
//     return 0;
// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
    
//   else{
//    return n*fact(n-1);
//   }
        

//     }


// fibonacci series this program returns only one value at that place
// #include<stdio.h>
// int fibonacci(int);

// int main(){
//     int user_number;
//     printf("enter the digit up to which you want to perform fibonacci series :\n");
//     if(scanf("%d",&user_number)==1){
//         printf("thanks for the number : %d",user_number);
        

//     }else{
//      printf("enter a valid integer number\n");

//     }
//  int c=fibonacci(user_number);
//     printf("the fibonacci series upto %d is : %d\n",user_number,c);
    
    
   
    
    
//     return 0;
// }
// int fibonacci(int n){
//     if(n==1 || n==2){
//         return n-1;
//     }
//     else {
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }




// withouth recursion

// #include<stdio.h>

// int main(){
//     int first=0,second=1,next;
//     int user_number;
//     printf("enter a number upto you want fib series :\n");
//     scanf("%d",&user_number);
//     if(user_number<=0){
//         printf("enter a number greater than 0\n");

        
//     }
//   if(user_number>=1){
//     printf("0\n");
    
//   }
//   if(user_number>=2){
//     printf("1\n");
    

//   }
//   for(int i=3;i<=user_number;i++){
//     next=first+second;
//     printf("%d\n",next);
//     first=second;
//     second=next;
    
//   }

    
//     return 0;
// }




// sum of n natural numbers using recusive funct

#include<stdio.h>
int sum_of_natural_numbers(int);

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int result=sum_of_natural_numbers(n);
    printf("the sum of natural numbers upto n is :%d\n",result);
    return 0;
}
int sum_of_natural_numbers(int n)
{
    if(n==1){
        return 1;

    }
    return n+sum_of_natural_numbers(n-1);
}