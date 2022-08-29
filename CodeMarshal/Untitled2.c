#include <stdio.h>
#include <math.h>
int main ()
{
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        double cx,cy,r,px,py;
        double mx,my,mx2,my2,r2;
        double rslt;
        scanf("%lf %lf %lf %lf %lf",&cx,&cy,&r,&px,&py);
        mx = cy - cx;
        my = py - px;
        mx2 = mx * mx;
        my2 = my * my;
        r2 = r / 2;
        rslt = sqrt(my2 - mx2);
        if(rslt<r2)
        {
            printf("Case %d: yes\n",i+1);
        }
        else
        {
            printf("Case %d: no\n",i+1);
        }
    }
    return 0;
}
