# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int snakewatergun(char you, char comp){
    // return o means match drawn , return 1 means you win , return -1 means you loose...
    if(you==comp){
        return 0;
    }
    else if(you=='s' && comp=='w'){
        printf("Your snake has drunk the water of computer.\n");
      return 1;
    }
    else if(you=='s' && comp=='g'){
        printf("Your snake is shootout by the gun of the computer. \n");
        return -1;
    }
    else if(you=='g' && comp=='w'){
        printf("Your gun has drown into the water of the computer. \n");
        return -1;
    }
    else if(you=='g' && comp=='s'){
        printf("Your gun has shoot the snake of the computer. \n");
        return 1;
    }
    else if(you=='w' && comp=='s'){
        printf("Your water has drunk by the snake of the computer.\n");
        return -1;
    }
    else if(you=='w' && comp=='g')
    printf("Gun of the computer has been drown into your water. \n");
        return 1;
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1; 
    if(number<=33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' for snake , enter 'w' for water, and 'g' for gun :- ");
    scanf("%c", &you);
   int result = snakewatergun(you,comp);
    if(result==1){
        printf("Because You choose %c and computer choose %c so...You Win !!!!!", you, comp);
    }
    else if(result==-1){
    printf("Because You choose %c and computer choose %c oops so ...You loose !!!!!", you, comp);

    }
    else if(result==0){
        printf("Because You and computer both choose same ' %c ' so...Match Drawn !!!!!", you);

        }
    
    return 0;
}