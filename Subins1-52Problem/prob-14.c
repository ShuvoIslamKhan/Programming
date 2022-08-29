#include <stdio.h>
#include <string.h>
int main()
{
    int i, T, count = 0;
    char first_line[10001];
    char second_line[2];
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%[^\n", first_line);
        scanf("%d\n", second_line);
        for(i = 0; i < strlen(first_line); i++)
        {
            if (first_line[i] == second_line[0])
            {
                count++;
            }
        }
        printf("Occuance of '%c' in '%s' = %d\n", second_line[0], first_line, count);
    }
    return 0;
}
