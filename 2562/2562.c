#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[9];
    int max;
    int m = 1;

    for( int n  = 1 ; n <= 9 ; n++ )
    {
        scanf("%d", &num[n]);
    }

    max = num[1];

    for( int k = 1 ; k <= 9 ; k++ )
    {
        if( max < num[k] )
        {
            max = num[k];
            m = k;
        }
    }

    printf("%d\n%d\n", max, m);


    return 0;
}
