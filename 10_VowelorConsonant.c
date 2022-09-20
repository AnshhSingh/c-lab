#include <stdio.h>
int main()
{
    // refer https://www.collinsdictionary.com/dictionary/english/vowel#:~:text=A%20vowel%20is%20a%20sound,Compare%20consonant.
    char ch;
    printf("enter the character to check");
    scanf("%c", &ch);
    // check if the char is a,e,i,o,u
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == "u")
    {
        printf("the entred character is a vowel");
    }
    else
    {
        printf("the entered character is a consonant");
    }
    return 0;
}
