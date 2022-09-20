#include <stdio.h>
int main()
{
    int a;
    printf("enter the number to check");
    scanf("%d", &a);
    //% operator outputs remainder of the numbers
    if (a % 2 == 0)
    {
        printf("%d is a even number", a);
    }
    else
    {
        printf("%d is a odd number", a);
    }
    return 0;
}
