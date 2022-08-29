#include <stdio.h>
#include <stdlib.h>
int main()
{
    char line[100000];
    char *p, *e;
    long input;
    int count = 0, T, i;
    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%s", line);
        for(p = line; ; p = e)
        {
            input = strtol(p, &e, 10);
            if(p == e)
            {
                break;
            }
            count++;
        }
        printf("%d", count);
    }
    return 0;
}
