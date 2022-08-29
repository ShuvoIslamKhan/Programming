#include <stdio.h>
int sorted(int ara[i], int n)
{
    int current, previous, i;
    previous = ara[0];
    for(i = 1; i < n; i++)
    {
        current = ara[i];
        if(current >= previous)
        {
            previous = current;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n, i, ara[n];
    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        if(1 == (ara, n)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
