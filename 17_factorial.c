#include <stdio.h>
int main()
//refer https://www.mathsisfun.com/numbers/factorial.html
    //solved using a better way using recursions below
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
// #include <stdio.h>
// int fact(int n1)
// {
//     if (n1 <= 1)
//     {
//         return 1;
//     }
//     return n1 * fact(n1 - 1); //factorial of a number is basically n*(n-1)!
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d", fact(num));
//     return 0;
// }
