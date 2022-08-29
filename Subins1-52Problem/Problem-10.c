#include<stdio.h>
int main()
{
    int t, i, o_r, c_r, b_r, b_p;
    double c_rr,a_rr;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &o_r, &c_r, &b_r);
        b_p = 300 - b_r;
        c_rr = ((c_r * 1.0)/ b_p) * 6;
        a_rr = (((o_r * 1.0) - c_r + 1)/ b_r) * 6;
        printf("%0.2lf %0.2lf\n", c_rr, a_rr);
    }
    return 0;
}
