#include <stdio.h>
int main()
{
    float sum;
    int n1, n2, op;

    while (1)
    {

        printf("\n-------------------------\n");
        printf("Enter the first number\n");
        scanf("%d", &n1);
        printf("Enter the operator\n");
        scanf("%d", &op);
        printf("Enter the second number\n");
        scanf("%d", &n2);
        switch (op)
        {
        case 1:
            sum = n1 + n2;
            printf("%d + %d = %.2f\n", n1, n2, sum);
            break;
        case 2:
            sum = n1 - n2;
            printf("%d - %d = %.2f\n", n1, n2, sum);
            break;
        case 3:
            sum = n1 * n2;
            printf("%d × %d = %.2f\n", n1, n2, sum);
            break;
        case 4:
            sum = n1 / n2;
            printf("%d ÷ %d = %.2f\n", n1, n2, sum);
            break;
        default:
            printf("Invalid operator! Please try again.\n");
            break;
        }
    }
}