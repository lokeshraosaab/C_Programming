# include<stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}
// This program gives otput as 5 5 3 . This is completely different from our expectations.
// The reason behind it is design of the complier how the complier taking arguement from printf.
// here from the output we get gcc compiler taking arguements from right to left . but prints it in the same order as they are given.
// here first operate a++ then ++a then a .....