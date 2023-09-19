# include<stdio.h>

void slice(char *ptr, int m, int n){
int i=0;
while(i+m<n){
    ptr[i] = ptr[i+m];
      i++;
}
ptr[i] = '\0';
}

int main(){
    char name[] = "Lokesh";
    slice(name, 2, 4); // --> Here 2 is starting position i.e k, ending position 4 should be '\0'
    // for string termination ;so here position will be print are 2 , 3 i.e "ke" 
    puts(name);
    
    return 0;
}