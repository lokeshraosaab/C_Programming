#include <stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int sec;
} time;
void display(time t1, time t2)
{
    printf("time t1 is %d:%d:%d \n", t1.hour, t1.minute, t1.sec);
    printf("time t2 is %d:%d:%d \n", t2.hour, t2.minute, t2.sec);
}

int timecmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    else if (t1.hour < t2.hour)
    {
        return -1;
    }
    else if (t1.minute > t2.minute)
    {
        return 1;
    }
    else if (t1.minute < t2.minute)
    {
        return -1;
    }
    else if (t1.sec > t2.sec)
    {
        return 1;
    }
    else if (t1.sec < t2.sec)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    time t1 = {23, 58, 40};
    time t2 = {17, 47, 44};
    display(t1, t2);
    int a = timecmp(t1, t2);
    if (a == 1)
    {
        printf("timecmp(t1, t2) returns %d that means time t1 is greater than t2. \n", a);
    }
    if (a == -1)
    {
        printf("timecmp(t1, t2) returns %d that means time t2 is greater than t1. \n", a);
    }
    if (a == 0)
    {
        printf("timecmp(t1, t2) returns %d that means time t1 & t2 are equal. \n", a);
    }
    return 0;
}