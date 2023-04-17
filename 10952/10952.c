#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    int b ;
    int num = 1;

    for( int n = 0 ; n < num ; n++ )
    {
        scanf("%d %d", &a, &b);
        if(a + b != 0)
        {
            num++;
            printf("%d\n", a + b );
        }else{
            num = n;
        }
    }

    return 0;
}
