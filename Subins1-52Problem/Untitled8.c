#include <stdio.h>
int character(int val)
{
    if(val >= 'a' && val <= 'z') return 1;
    else if(val >= 'A' && val <= 'Z') return 2;
    else if(val >= '0' && val <= '9') return 3;
    else return 4;
}
int main()
{
    int T;
    char ch;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &ch)
        if(1 == ch) printf("Lowercase character\n");
        else if(2 == ch) printf("Uppercase character\n");
        else if(3 == ch) printf("Numerical Digit\n");
        else printf("Special character\n");
    }
    return 0;
}
