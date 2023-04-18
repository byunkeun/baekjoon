#include <stdio.h>
int main(int argc, char const *argv[])
{
    int T;
    int num[T];
    int same;
    int result = 0;

    scanf("%d", &T);

    for ( int n = 0 ; n < T ; n++ )
    {
        scanf("%d", &num[n]);
    }

    scanf("%d", &same);

    for ( int k = 0 ; k < T ; k++ )
    {
        if (num[k] == same)
        {
            result = result + 1;
        }else{
            result = result;
        }
    }

    printf("%d\n", result);

    return 0;
}
//11
//1 4 1 2 4 2 4 2 3 4 4
//2