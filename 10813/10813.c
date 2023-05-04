#include<stdio.h>
int main()
{
    int N;
    int M;

    int i, j;
    int data;

    scanf("%d %d", &N, &M);

    int basket[N];

    for( int n = 1 ; n <= N ; n++ ){
        basket[n] = n;
    }

    for( int n = 1 ; n <= M ; n++ ){
        scanf("%d %d", &i, &j);
        data = basket[i];
        basket[i] = basket[j];
        basket[j] = data;
    }

    for ( int i = 1 ; i <= N ; i++ ){
        printf("%d ", basket[i]);
    }
    
    printf("\n");
    
    return 0;
}
