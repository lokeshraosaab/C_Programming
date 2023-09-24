# include<stdio.h>

typedef struct BankAccount{
     int ac_no ;
    float balance;
    char c_name[20];
    char b_name[50];
}bank;

int main(){
    bank c1 = {393213756, 557.43, "Lokesh Kumar", "SBI Babaina"};
printf("Account no is %d\n", c1.ac_no);
printf("Account Balance is %f \n", c1.balance);
printf("Account Holder's name is %s \n", c1.c_name);
printf("Bank name is %s \n", c1.b_name);
    return 0;
}