#include <stdio.h>
#include <math.h>
int main()
{


    int T;
    double i, a, b, c, s, x, root, area;
    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        s = (a + b + c) / 2;
        x = s * (s - a) * (s - b) * (s - c);
        root = sqrt(x);
        if(root < 7){
            printf("%.00lf\n", root);
        }
        else printf("%.10lf\n", root);
    }
    return 0;
}
