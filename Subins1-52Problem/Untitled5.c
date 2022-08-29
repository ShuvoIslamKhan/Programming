#include <stdio.h>
#include <math.h>
int main()
{
    int T, res = 0, i, temp;
    int num[3];
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%s", num);
        for(i = 0; i < 3; i++)
        {
            res = res + pow(num[i], 3);
        }
        if(num[3] == res)
        {
            printf("%d is an amstrong number!\n", num);
        }
        else
        {
            printf("%d is not an amstrong number!\n", num);
        }
    }
    return 0;
}
