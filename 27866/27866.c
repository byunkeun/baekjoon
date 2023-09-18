#include <stdio.h>
int main(int argc, char const *argv[])
{
    char word[1000];
    int num;
    scanf("%s %d", word, &num);
    printf("%c", word[num-1]);
    return 0;
}