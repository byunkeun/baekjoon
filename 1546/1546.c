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

    float upscore[1000];

    for(int n = 0 ; n < num ; n++){
        upscore[n] = score[n] / (float)max * 100;
    }
    float all = 0;
    float average = 0;

    for(int n = 0 ; n < num ; n++){
        all += upscore[n];
    }

    average = all / (float)num;

    printf("%f ", average);
    return 0;
}
