# include<stdio.h>
# include<string.h>

struct employee{
int code;
float salary;
char name[20];
};

int main(){
    struct employee facebook[100];
    // here facebook[100] is an array of 100 employees of struct employee data type.
    facebook[0].code = 100;
    facebook[0].salary = 1000000.55;    
    strcpy(facebook[0].name, "Lokesh");

    facebook[1].code = 101;
    facebook[1].salary = 100000.55; 
    strcpy(facebook[1].name, "Aman");
    
    facebook[2].code = 102;
    facebook[2].salary = 10000.55; 
    strcpy(facebook[2].name, "Abhishek");

    printf("Done");
    
    return 0;
}