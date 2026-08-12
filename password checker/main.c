#include <stdio.h>
int main()
{
    int password;
    do
    {
        scanf("%d", &password);
        if (password == 1234)
        {
            printf("Correct\n");
        }
        else
        {
            printf("Wrong\n");
        }

    } while (password != 1234);
    return 0;
}