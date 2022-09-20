#include <stdio.h>
int main()
{
    int dividend, divisor;
    printf("enter dividend and divisor");
    scanf("%d%d", &dividend, &divisor);
    printf("quotient=%d\n", dividend / divisor);
    printf("remainder=%d\n", dividend % divisor);
    return 0;
}
