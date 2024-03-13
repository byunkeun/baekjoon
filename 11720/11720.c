#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    char temp[n];
    scanf("%s", temp);
    for( int i = 0 ; i < n ; i++ ){
        sum += temp[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}