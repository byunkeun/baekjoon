#include<stdio.h>
#include<stdlib.h>
void swap(int *basket, int first, int last){
    first--;
    last--;
    for(int i = first ; i < last ; i++){
        for(int j = first ; j < last - i ; j++){
            int temp;
            temp = basket[j];
            basket[j] = basket[j + 1];
            basket[j + 1] = temp;
        }
    }
}
void get_change(int *basket, int m){
    int first;
    int last;
    for(int i = 0 ; i < m ; i++){
        scanf("%d %d", &first, &last);
        swap(basket, first, last);
    }

}
int main(int argc, char const *argv[])
{
    int n, m;
    int *basket;
    scanf("%d %d", &n, &m);
    basket = (int*)malloc(sizeof(int) * n); //basket 1차원 배열 생성
    for(int i = 0 ; i < n ; i++){
        basket[i] = i + 1; //basket에 숫자 할당
    }
    get_change(basket, m);
    for (int i = 0; i < n; i++)
    {
        printf("%d", basket[i]);
    }

    
    free(basket);
    return 0;
}