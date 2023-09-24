#include <stdio.h>

typedef struct timestamp
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int sec;
} timestamp;
void display(timestamp t1, timestamp t2)
{
    printf("timestamp t1 is %d-%d-%d %d:%d:%d \n",t1.year, t1.month, t1.day, t1.hour, t1.minute, t1.sec);
    printf("timestamp t2 is %d-%d-%d %d:%d:%d \n",t2.year, t2.month, t2.day, t2.hour, t2.minute, t2.sec);
}

int timestampcmp(timestamp t1, timestamp t2)
{
       if (t1.year > t2.year)
    {
        return 1;
    }
    else if (t1.year < t2.year)
    {
        return -1;
    }
    else if (t1.month > t2.month)
    {
        return 1;
    }
    else if (t1.month < t2.month)
    {
        return -1;
    }
    else if (t1.day > t2.day)
    {
        return 1;
    }
    else if (t1.day < t2.day)
    {
        return -1;
    }
   else if (t1.hour > t2.hour)
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
    timestamp t1 = {2002, 12, 27, 23, 58, 40,};
    timestamp t2 = {2002, 12, 26, 23, 47, 44};
    display(t1, t2);
    int a = timestampcmp(t1, t2);
    if (a == 1)
    {
        printf("timestampcmp(t1, t2) returns %d that means timestamp t1 is greater than t2. \n", a);
    }
    if (a == -1)
    {
        printf("timestampcmp(t1, t2) returns %d that means timestamp t2 is greater than t1. \n", a);
    }
    if (a == 0)
    {
        printf("timestampcmp(t1, t2) returns %d that means timestamp t1 & t2 are equal. \n", a);
    }
    return 0;
}