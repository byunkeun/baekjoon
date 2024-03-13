#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    for( int i = 0 ; i < num ; i++ ){
        char * str;
        char buf[20];
        int alp;
        scanf("%d", &alp);
        scanf("%s", buf);
        str = strdup(buf);
        for( int j = 0 ; j < strlen(buf) ; j++ ){
            for(int k = 0 ; k < alp ; k++ ){
                printf("%c", str[j]);
            }
        }
        putchar('\n');
    }
    return 0;
}
