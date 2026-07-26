#include <stdio.h>
int main()
{
    int n1, n2, i, j;

    printf("Please insert the desired shape\n");
    scanf("%d", &n2);
    printf("Please enter the dimensions of the shape\n");
    scanf("%d", &n1);

    switch (n2)
    {
    case 1:
        for (i = 1; i <= n1; i++)
        {
            for (j = 1; j <= n1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        break;
    case 2:
        for (i = 1; i <= n1; i++)
        {
            for (j = 1; j <= n1; j++)
            {
                if (j == 1 || j == n1 || i == 1 || i == n1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 3:
        for (i = 1; i <= n1; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        break;
    case 4:
        for (i = 1; i <= n1; i++)
        {
            for (j = 1; j <= n1 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    default:
        printf("Invalid shape");
        break;
    }
}