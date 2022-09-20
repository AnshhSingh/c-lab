#include <stdio.h>
int main()
//refer https://www.mathsisfun.com/numbers/factorial.html
{
    int i, factorial = 1, num;
    scanf("%d", &num);
    //loop runs till it int i reaches from 1 to the given number  
    for (i = 1; i <= num; i++)
    {// multiplies  the the all the number from 1 to <the given number>  and store it in the int "fact"
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}
