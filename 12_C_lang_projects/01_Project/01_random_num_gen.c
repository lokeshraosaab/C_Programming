# include<stdio.h>
# include<stdlib.h>  // for random number generation .
# include<time.h> // these all the three libraries are hydra files .

int main(){
    int number;
    srand(time(0));
    number=rand()%100 + 1; // --> generates number between 1 and 100 .
    printf("The number is %d", number);
    // Keep running the loop untill the number is guessed .
    
    return 0;
}