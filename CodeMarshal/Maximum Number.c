#include <stdio.h>
int main()
{
    int T, i, j, x, max, ara[3];
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        for(x=0; x<3;x++)
        {
            scanf("%d", ara);
            max = ara[0];
            for(j=0; j<3; j++)
            {
                if(max < ara[j])
                {
                    max = ara[j];
                }
            }
        }
        printf("Case %d: %d\n", i+1, max);
    }
    return 0;
}
