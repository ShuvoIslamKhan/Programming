#include <stdio.h>
#include <string.h>
int main()
{
    int T, i, count = 0;
    char word[10001];
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%[^\n]", word);
        for(i = 0; i < strlen(word) != '\0'; i++)
        {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}
