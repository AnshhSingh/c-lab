#include <stdio.h>
int main()
//refer https://www.programiz.com/c-programming/examples/sum-natural-numbers
{
    int n, i, sum = 0;
    printf("Enter a natural number ");
    scanf("%d", &n);
    //++i  : https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i
    for (i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
