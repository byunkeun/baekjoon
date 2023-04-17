#include<stdio.h>
int main()
{
    int T;
    int result;

    scanf("%d", &T);

    for( int n = 1 ; n <= T ; n++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        result = a + b;
        printf("Case #%d: %d\n", n, result);
    }
    return 0;
}
