#include <stdio.h>

int main()
{

    int n, i;

    printf("Enter Array size : ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("\nEnter Array A : \n");
    for (i = 0; i < n; i++)
    {
        printf("A [%d]", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter Array B : \n");
    for (i = 0; i < n; i++)
    {
        printf("B [%d]", i);
        scanf("%d", &b[i]);
    }

    printf("\nArray C is : ");
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d, ", c[i]);
    }
}