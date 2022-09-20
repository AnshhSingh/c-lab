/*ascii value is a int value given to every symbol letter number etc it helps
computers to identify them an communicate using a universal standard*/
#include <stdio.h>

int main()
{
    // refer https://www.rapidtables.com/code/text/ascii-table.html
    char ch;
    printf("enter the character");
    scanf("%c", &ch);
    // using %d prints the ASCII value
    printf("%d", ch);
    return 0;
}
