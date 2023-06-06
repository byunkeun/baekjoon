//두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

//수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.


#include <stdio.h>
int main()
{
    int num[10];
    int input;

    for( int n = 0 ; n < 10 ; n++ ){
        scanf("%d", &input);
        num[n] = input % 42;
    }

    int result = 0;
    int stack;
    for( int n = 0 ; n < 10 ; n++ ){
        stack = 0;
        for( int k = n + 1 ; k < 10 ; k++ ){
            if(num[n] == num[k]){
                stack++;
            }
        }
        if(stack == 0){
            result++;
        }
    }
    printf("%d\n", result);




    return 0;
}
