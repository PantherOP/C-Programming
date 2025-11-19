#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, r1, r2;
    printf("Enter the a, b and c of the roots: ");
    scanf("%d %d %d", &a, &b, &c);
    int d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        r1 = ((-b) + sqrt(d)) / 2 * a;
        r2 = ((-b) - sqrt(d)) / 2 * a;
        +printf("The roots are: %d and %d", r1, r2);
    }
    else if (d == 0)
    {
        r1 = (-b) / 2 * a;

        printf("Both roots are equal.\nThe root is: %d", r1);
    }
    else
    {
        printf("The roots are imaginary.");
    }
}