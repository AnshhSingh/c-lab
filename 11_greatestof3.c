#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("enter 3 numbers to compare\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    // "||" is an operator which means "or"
    if (n1 == n2 || n2 == n3 || n1 == n3)
    {
        printf("one or more values are equal");
    }
    //"&&" is an operator which means "and"
    if (n1 > n2 && n1 > n3)
    {
        printf("number %d is the greatest", n1);
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("number %d is the greatest", n2);
    }
    if (n3 > n1 && n3 > n2)
    {
        printf("number %d is the greatest", n3);
    }
    return 0;
}
