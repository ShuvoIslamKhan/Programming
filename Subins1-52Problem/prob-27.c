#include <stdio.h>
int ams(int num)
{
    int res = 0, rem;
    while(num!=0)
    {
        rem = num%10;
        res += (rem*rem*rem);
        num /= 10;
    }
    return res;
}
int main()
{
    int T, res, num;
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%d", &num);
        res = ams(num);
        if(num == res)
        {
            printf("%d is an amstrong number!\n", num);
        }
        else
        {
            printf("%d is not an amstrong number!\n", num);
        }
    }
    return 0;
}
