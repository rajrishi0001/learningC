#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter a number");
    int a, d = 0, sum = 0;
    scanf("%d", &a);
    for (int i = a; i > 0; i /= 10)
    {
        d++;
    }
    printf("%d", d);
    for (int j = a; j > 0; j /= 10)
    {
        int m = j % 10;
        sum = sum + pow(m, d);
        printf("\n%d", sum);
    }
    printf("%d\n", sum);
    printf("%d", a);
    if (a == sum)
        printf("armstrong");
    else
        printf("not");
    return 0;
}