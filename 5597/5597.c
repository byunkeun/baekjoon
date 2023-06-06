#include<stdio.h>
int atnd(int attend){
    if( attend >= 1 && attend <= 30)
    return 1;
}

int main(int argc, char const *argv[])
{
    int attend[31];
    attend[0] = 0;
    int stu;
    for( int n = 1 ; n <= 30 ; n++ ){
        attend[n] = 0;
    }
    for( int n = 1 ; n <= 28 ; n++ ){
        scanf("%d", &stu);
        attend[stu] = atnd(stu);
    }

    for (int i = 1; i <= 30; i++)
    {
        if( attend[i] == 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}
