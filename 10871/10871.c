#include<stdio.h>
int main()
{
    int N;
    int X;
  

    scanf("%d %d", &N, &X);
    int A[N];

    for( int n = 0 ; n < N ; n++ )
    {
        scanf("%d", &A[n]);
    }
    for( int k = 0 ; k < N ; k++ )
    {
        if( A[k] < X )
        {
            printf("%d ", A[k]);
        }
    }

    printf("\n");


    return 0;
}

