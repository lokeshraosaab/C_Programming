# include<stdio.h>
# include<string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};



int main(){
    struct employee e1 = {100, 200000.3, "Lokesh"};
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101; // --> Or you can also write it as ptr->code = 101; 
    // -> arrow operator; // (*ptr).  is same as ptr-> 
    ptr->code = 101;
    printf("%d\n", (*ptr).code);
    printf("%f\n",(*ptr).salary);
    printf("%s\n", (*ptr).name);
    return 0;
}