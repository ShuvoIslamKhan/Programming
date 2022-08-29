#include <stdio.h>
#include <math.h>
int main()
{
    int num, T, i, sq_root;
    scanf("%d", T);
    for(i = 0; i < T; i++)
    {
        scanf("%d", &num);
        sq_root = sqrt(num);
        if(sq_root * sq_root == num)
        {
            printf("Case %d: Yes\n", i+1);
        }
        else
        {
            printf("Case %d: No\n", i+1);
        }
    }
    return 0;
}
