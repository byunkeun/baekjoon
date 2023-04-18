#include <stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int T;

    scanf("%d", &T);

    long num[T];

    for (int n = 0; n < T; n++)
    {
        scanf("%ld", &num[n]);
    }
    long max = num[0];
    long min = num[0];

    for (int k = 0; k < T; k++)
    {
        if (max < num[k])
        {
            max = num[k];
        }
      
        if (min > num[k])
        {
            min = num[k];
        }
        
    }

    printf("%ld %ld\n", min, max);

    return 0;
}
