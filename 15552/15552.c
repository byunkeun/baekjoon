#include<stdio.h>
int main()
{
    int num;
    int result;

    scanf("%d", &num);

    for( int n = 1 ; n <= num ; n++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        result = a + b;
        printf("%d\n", result);
    }
    
    return 0;
}
