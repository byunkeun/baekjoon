#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T;
    int result;

    scanf("%d", &T);
    for( int n = 1 ; n <= T ; n++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        result = a + b;
        printf("Case #%d: %d + %d = %d\n", n, a, b, result);
    }
    return 0;
}
