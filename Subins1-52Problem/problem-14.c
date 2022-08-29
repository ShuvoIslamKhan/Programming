#include<stdio.h>
#include<string.h>
int main()
{
    int i, s, count;
    char f_l[10001];
    char s_l[2];
    gets(s);
    f_l = strlen(s);
    scanf("%s", s_l);

    for(i = 0; i < strlen(f_l); i++)
    {
        if(s_l[0] == f_l[i])
        {
            count++;
        }
        else
        {
            printf("%c is not present\n", s_l[0]);
        }
        printf("Occurance of '%c' in '%s' = %d\n", s_l[0], f_l, count);
    }
    return 0;
}
