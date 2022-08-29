#include <stdio.h>

int main()
{
    int i;
    char ch[i];
    scanf("%s", &ch);
    for (i = 0; i <= ch[i] != 0; i++)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            printf("%s", ch[i]-64);
        }
    }
    return 0;
}
