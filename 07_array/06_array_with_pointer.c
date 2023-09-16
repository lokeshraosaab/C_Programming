# include<stdio.h>

int main(){
    int marks[5];
    int *ptr = &marks[0]; 
    // int *ptr = marks ;  // above one and this one both will work same.
    for(int i=0; i<5; i++){
        printf("Enter the marks for the student %d :- ", i+1);
        scanf("%d", ptr++); 
        // scanf("%d", &marks[i]); 
        
    }

     for(int i=0; i<5; i++){
      printf("The marks of the student %d is:- %d\n", i+1, marks[i]);
    //  printf("The marks of the student %d is:- %d\n", i+1, *ptr++); // This instruction will give your expected output 
    // with using scanf("%d", &marks[i]); instead of scanf("%d", ptr++); in upper for loop; But Why ??????
    }



    return 0;
}