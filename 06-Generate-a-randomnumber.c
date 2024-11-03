
// to genrate a random number between any range
// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int main(){
//     srand(time(0));
//     int random_number=rand();
//     printf("the random number is : %d\n",random_number);
    
//     return 0;
// }


// to genarte a random number between 1 to 100
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     // Seed the random number generator with the current time
//     srand(time(0));

//     // Generate a random number
//     int randomNumber = rand()%100+1;// +1 because %100 generates number between 1to 99 we need 100 too

//     // Print the random number
//     printf("Random Number: %d\n", randomNumber);

//     return 0;
// }






// without srand(time(0)) : run this program more than  twice and see the output

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     // Generate random numbers without seeding
//     printf("Random Number 1: %d\n", rand());
//     printf("Random Number 2: %d\n", rand());
//     printf("Random Number 3: %d\n", rand());

//     return 0;
// }















/* SUMMARY :  any number % 10,100,1000 ---- jitne digit ya fir 0 ka diviser rahega utne digit ka reaminer aayega 
3144  % 10 = 4 ---  10 has 1 zero so remainer is in sigle digit
3144 % 100 = 44 -- 100 has 2 zeros so remainder is in double digit 


by only using rand() method it generatesthe same random numbber everytime you run the code -- we use srand(time(0))

*/