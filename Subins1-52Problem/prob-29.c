#include <stdio.h>
int main()
{
    int T, val;
    char ch;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &ch);
        val = ch;
        if(val >= 'a' && val <= 'z') printf("Lowercase character\n");
        else if(val >= 'A' && val <= 'Z') printf("Uppercase character\n");
        else if(val >= '0' && val <= '9') printf("Numerical Digit\n");
        else printf("Special character\n");
    }
    return 0;
}
