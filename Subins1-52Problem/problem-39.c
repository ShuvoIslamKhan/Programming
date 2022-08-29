#include<stdio.h>
int main()
{
    int t, temp, i, j;
    char ara1[1001], ara2[1001];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", ara1);
        for( i = 0, j = 0; i < ara1; i++)
        temp = ara1[i];
        ara1[i] = ara2[j];
        ara2[j] = temp;
        if(strcmp(ara1, ara2) == 0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not Palindrome!");
        }
    }
    return 0;
}
