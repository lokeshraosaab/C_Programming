# include<stdio.h>
# include<string.h>

struct employee{
int code;
float salary;
char name[20];
};

int main(){
    int a = 2;
    float b = 3.5;
    char c = 'u';
   // employee e1;
   // e1.salary = 555466.8; //--> won't work without using struct employee.
    struct employee e1;
    e1.code = 100;
    e1.salary = 2300000.5555;
  //  e1.name[10] = "Lokesh"; // ---> won't work
  strcpy(e1.name,"Lokesh");
  printf("%d \n", e1.code);
  printf("%.3f \n", e1.salary);
  printf("%s \n", e1.name);

    return 0;
}