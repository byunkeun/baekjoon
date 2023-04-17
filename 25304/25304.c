#include<stdio.h>
int main(){
    int X;
    int N;
    int a;
    int b;
    int price = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for( int n = 0 ; n < N ; n++ )
    {
        scanf("%d %d", &a, &b);
        price = price + a * b;
    }

    if(price == X)
    {
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
