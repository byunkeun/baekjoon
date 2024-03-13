#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int alpha[26];
    for( int i = 0 ; i < 26 ; i++ ){
        alpha[i] = -1;
    }
    scanf("%s", str);
    for( int i = 0 ; i < strlen(str) ; i++ ){
        for( int j = 0 ; j < 26 ; j++ ){
            if( str[i] == j + 'a' ){
                if(alpha[j] != -1){
                }else{
                    alpha[j] = i;
                }
            }
        }
    }
    for( int i = 0 ; i < 26 ; i++ ){
        printf("%d ", alpha[i]);
    }
    return 0;
}
