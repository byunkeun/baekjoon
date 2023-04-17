#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for( int n ; n <= T ; n++ )
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+ b);

    }

    return 0;
}
