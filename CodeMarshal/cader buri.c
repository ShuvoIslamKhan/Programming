#include<stdio.h>
int main()
{
    int t;
    scanf("%d" &t);
    while(t--)
    {
        int n, pow=1;
        scanf("%d",&n);
        if(n==0)
            printf("%d\n");
        else
        {
            for(int i =1;i<=n;i++)
            {
                pow = pow * 3;
            }
            printf("%d\n",pow);
        }
        return 0;
    }
}
