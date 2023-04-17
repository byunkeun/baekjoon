#include <stdio.h>
int main()
{
    int num;
    int blank;

    scanf("%d", &num);
    for (int j = 1; j <= num; j++)
    {
        blank = num - j;
        for (int n = 1; n <= blank; n++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (num - blank); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
