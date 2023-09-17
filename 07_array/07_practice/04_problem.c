# include<stdio.h>

int main(){
    int mul[10];
    for(int i=0; i<10; i++){
        scanf("%d", &mul[i]);
    }
    for(int i=0; i<10; i++){
        printf("5*%d = %d\n", i+1, mul[i]);
    }

    return 0;
}