#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    for(;;)
    {
        int a, b;
        if( scanf("%d %d", &a, &b) != EOF )
        {
            printf("%d\n", a + b);
        }else{
            break;
        }
        
    }
    return 0;
}