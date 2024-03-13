#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char buf[1000];
    int num;
    scanf("%d", &num);
    for( int i = 0 ; i < num ; i++ ){
        scanf("%s", buf);
        int n = strlen(buf);
        printf("%c%c\n", buf[0], buf[n - 1]);
    }
    return 0;
}
