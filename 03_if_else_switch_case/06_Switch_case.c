# include<stdio.h>
// Switch case is used when we have to make a choice between no. of alternatives for a given variable.

int main(){
    int rating ;
    printf("Your rating is 1-5 \n");
    scanf("%d", &rating);
    switch(rating){
        case 1:
        printf("Your rating is 1\n");
        break;
        case 2:
        printf("Your rating is 2\n");
        break;
        case 3:
        printf("Your rating is 3\n");
        break;
        case 4:
        printf("Your rating is 4\n");
        break;
        case 5:
        printf("Your rating is 5\n");
        break;
        default :
        printf("Your rating is invalid\n");
        break;
    }
// try to find same output using ifelseif .


    if(rating==1){
    printf("Your rating is 1");    
    }
    else if(rating==2){
    printf("Your rating is 2");

    }
    else if(rating==3){
    printf("Your rating is 3");

    }
    else if(rating==4){
    printf("Your rating is 4");

    }
    else if(rating==5){
    printf("Your rating is 5");

    }
    else {
    printf("Your rating is invalid");

    }
    // yes we can run the same thing using both types using switch cases & ifelseif .
    return 0;
}