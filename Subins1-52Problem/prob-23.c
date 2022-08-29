#include <stdio.h>
int main()
{
    int T, i;
    char ch[10001];
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%s", ch);
        for(i=0; i<ch[i]!=0; i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                printf("%d", ch[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}
