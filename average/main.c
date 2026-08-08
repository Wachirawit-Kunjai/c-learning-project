#include <stdio.h>
int main()
{
    printf("=== Program to Calculate Average ===\n");
    int n, aver = 0, k = 0;
    printf("Enter -1 to stop\n");
    do
    {
        printf("Enter number:");
        scanf("%d", &n);
        if (n != -1)
        {
            aver += n;
            k++;
        }

    } while (n != -1);
    aver /= k;
    printf("Average = %d", aver);
    return 0;
}