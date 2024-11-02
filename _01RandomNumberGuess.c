#include<stdio.h>

int main(){
    int random_number=45;
    int user_guess;
     int flag=1;

    while(1){

    printf("\nguess the number\n");
    scanf("%d",&user_guess);
    if(user_guess>random_number){
        printf("enter a number less than %d\n",user_guess);
  

    }else if (user_guess<random_number){
        printf("enter a number greater than %d\n",user_guess);

        
    }
    else{
        printf("Hurray you guessed it right!!\nyou took %d tries to guess!!",flag);
        break;
      
        
    }
    flag++;
    }

    return 0;
}