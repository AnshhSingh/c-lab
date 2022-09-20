#include <stdio.h>
int main()
// refer https://stevenpcurtis.medium.com/what-is-a-floating-point-number-6991f2f85a28
{
    float n1, n2;
    printf("enter 2 number to multiply ");
    scanf("%f%f", &n1, &n2);
    printf("product = %.2f", n1 * n2); //%.2f will round off the answer to 2 decimal places
    return 0;
}
