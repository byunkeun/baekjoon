#include <stdio.h>
int main(int argc, char const *argv[])
{
    int score[1000] = {0};
    int num = 0;

    scanf("%d", &num);
    for(int n = 0 ; n < num ; n++){
        scanf("%d", &score[n]);
    }
    int max = 0;

    for(int n = 0 ; n < num - 1 ; n++){
        for(int i = 0 ; i < num - 1 - n ; i++){
            if(score[i] < score[i + 1]){
                int temp;
                temp = score[i];
                score[i] = score[i + 1];
                score[i + 1] = temp;
            }
        }
    }

    max = score[0];

    for(int n = 0 ; n < num ; n++){
        printf("%d ", score[n]);
    }
    return 0;
}
