#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    for (int k = 1; k <= num ; k++)
    {
        for (int n = 0 ; n < k ; n++)
        {
            printf("*");
        }
        printf("\n");
    }
}