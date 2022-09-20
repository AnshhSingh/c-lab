#include <stdio.h>
int main()
// refer https://www.javatpoint.com/c-program-to-reverse-number
{
    int n, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;                 // this will always give last digit as remainder
        reverse = reverse * 10 + remainder; // store the reverse
        n = n / 10;
    }
    printf("Reversed number = %d", reverse);
    return 0;
}