#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;
void display(date d1, date d2)
{
    printf("date d1 is %d/%d/%d \n", d1.day, d1.month, d1.year);
    printf("date d2 is %d/%d/%d \n", d2.day, d2.month, d2.year);
}

int datecmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.day > d2.day)
    {
        return 1;
    }
    else if (d1.day < d2.day)
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
    date d1 = {1, 12, 2002};
    date d2 = {7, 11, 2013};
    display(d1, d2);
    int a = datecmp(d1, d2);
    if (a == 1)
    {
        printf("datecmp(d1, d2) returns %d that means Date d1 is greater than d2. \n", a);
    }
    if (a == -1)
    {
        printf("datecmp(d1, d2) returns %d that means Date d2 is greater than d1. \n", a);
    }
    if (a == 0)
    {
        printf("datecmp(d1, d2) returns %d that means dates d1 & d2 are equal. \n", a);
    }
    return 0;
}