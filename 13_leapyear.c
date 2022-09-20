#include <stdio.h>
int main()
{
    // refer https://learn.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year
    int year;
    printf("enter year ");
    scanf("%d", &year);
    // leap year is divisible by 4 and 400
    if (year % 4 == 0 && year % 400 == 0)
    {
        printf("it is a leap year");
    }
    ///a year divisible by 100 is not a leap
    else if (year % 100 == 0)
    {
        printf("not a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}