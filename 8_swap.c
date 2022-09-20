#include <stdio.h>

int main()
{
    int num1, num2, temp = 0;
    printf("enter a and b");
    scanf("%d%d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;

    /*better way with temp
    x=x+y;
    y=x-y;
    x=x-y;
    */
    printf("a=%d b=%d", num1, num2);
    return 0;
}
