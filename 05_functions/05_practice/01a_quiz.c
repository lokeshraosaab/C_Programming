# include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
     goodMorning();        
    return 0;
}
// Call from the main funtion is only for goodMorning() but output will also from goodAfternoon() & goodNight()

void goodMorning(){
    printf("Good Morning Lokesh \n");
    goodAfternoon();   // This is the way to call the function indirectly from the main.
}
void goodAfternoon(){
    printf("Good Afternoon Lokesh \n");
    goodNight();     // This is the way to call the function indirectly from the main.
}
void goodNight(){
    printf("Good Night Lokesh \n");
}