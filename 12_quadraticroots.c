//refer https://www.tutorialspoint.com/how-to-write-a-c-program-to-find-the-roots-of-a-quadratic-equation
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2;
    float root_part, denom;

    printf("Enter values of a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        printf("enter a valid quadratic eq");
    }
    else
    {
        root_part = sqrt(b * b - 4 * a * c);
        denom = 2 * a;

        root1 = (-b + root_part) / denom;
        root2 = (-b - root_part) / denom;

        printf("Root1 = %f\nRoot2 = %f", root1, root2);
    }

    return 0;
}
