#include <stdio.h>
void sortbasket(int N, int M, int basket[])
{
    int first;
    int last;
    int gap;
    for (int n = 0; n < M; n++)
    {
        scanf("%d %d", &first, &last);

        last--;\
        first--;
        for (int i = 0; i < last - first; )
        {
            for (int k = first; k < last - i; k++)
            {
                int temp;
                temp = basket[k];
                basket[k] = basket[k + 1];
                basket[k + 1] = temp;
            }
        }
    }
    for (int n = 0; n < N; n++)
    {
        printf("%d ", basket[n]);
    }
}
int main(int argc, char const *argv[])
{
    int N;
    int M;
    scanf("%d %d", &N, &M);
    int basket[N];
    for (int n = 0; n < N; n++)
    {
        basket[n] = N - n;
    }
    sortbasket(N, M, basket);
    return 0;
}
