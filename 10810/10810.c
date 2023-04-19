#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N;
    int M;
    int num;

    scanf("%d %d", &N, &M);

    int bas[N];
    for (int n = 1 ; n <= N; n++)
    {
        bas[n] = 0;
    }
    int a, b;

    for (int m = 1 ; m <= M ; m++ )
    {
        scanf("%d %d %d", &a, &b, &num);

        int i = a;

        while (i <= b)
        {
            bas[i] = num;
            i++;
        }

    }

    for( int h = 1 ; h <= N ; h++ )
    {
        printf("%d ", bas[h]);
    }

    return 0;
}
