#include<stdio.h>
int main()
{
    int num;
    int repeat;

    scanf("%d", &num);

    repeat = num / 4;

    for( int n = 0 ; n < repeat ; n++ )
    {
        printf("long ");
    }
    printf("int\n");

    return 0;
}
