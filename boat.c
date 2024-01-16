#include <stdio.h>

int i, j, k, l, n = 4;

water()
{
    for (i = 0; i < 12 * n; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (i = 0; i < 8 * n; i++)
    {
        printf(" * ");
    }
    printf("\n");
    for (i = 0; i < 6 * n; i++)
    {
        printf(" *  ");
    }
    printf("\n");
    for (i = 0; i < (4 * n); i++)
    {
        printf("  *   ");
    }
    printf("\n");
    for (i = 0; i < (3 * n); i++)
    {
        printf("   *    ");
    }
}

boat()
{
    for (i = 1; i <= 4 * n; i++)
    {
        printf(" * ");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (k = i; k <= i; k++)
        {
            printf(" * ");
        }
        for (l = 3 * n; l >= i; l--)
        {
            if (i == 1)
            {
                continue;
            }
            printf("    ");
        }
        for(l=1; l<=n; l++){
            if(l==1)
            printf(" * ");
        }
        printf("\n");
    }
}

main()
{
    boat();
    water();
    printf("\n");
}