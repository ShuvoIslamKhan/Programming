#include<stdio.h>
int main ()
{
    int t, n1, n2, n3, temp1, temp2, temp3, kase;
    scanf("%d", &t);
    for(kase=1; kase<=t; kase++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 > n2)
        {
            temp1 = n1;
            n1 = n2;
            n2 = temp1;
        }
        else if(n2 > n3)
        {
            temp2 = n2;
            n2 = n3;
            n3 = temp2;
        }
        else if(n3 > n2 && n1 > n3)
        {
            temp3 = n3;
            n3 = n2;
            n2 = temp3;
        }
        printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
    }
    return 0;
}
