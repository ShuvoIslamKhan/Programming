#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2, T, r, m, n, a, sqr_root;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d %d %d", &x1, &x2, &r, &y1, &y2);
        m = x2 - x1;
        n = y2 - y1;
        a = (n * n) - (m * m);
        sqr_root = sqrt(a);
        if(sqr_root > r) printf("The point is not inside the circle");
        else printf("The point is inside the circle");
    }
    return 0;
}
