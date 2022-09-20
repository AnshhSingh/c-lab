#include <stdio.h>
int main()
{
    /*refer https://www.javatpoint.com/fibonacci-series-in-c
     this problem is better solved using recursion if you know them
    https://www.mathsisfun.com/numbers/fibonacci-sequence.html*/
    int count, first_term = 0, second_term = 1, next_term, i;

    // Ask user to input number of terms to print
    printf("Enter the number of terms:\n");
    scanf("%d", &count);

    printf("First %d terms of Fibonacci series:\n", count);
    for (i = 0; i < count; i++)
    {
        if (i <= 1)
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        printf("%d\n", next_term);
    }

    return 0;
}