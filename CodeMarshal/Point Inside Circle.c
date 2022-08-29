#include <stdio.h>
#include <math.h>
int main ()
{
    int i,t,d;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        double cx,cy,r,px,py;
        double mx,my;
        double rslt;
        scanf("%lf %lf %lf %lf %lf",&cx,&cy,&r,&px,&py);
        mx = cx - px;
        my = cy - py;
        rslt = pow(mx,2) + pow(my,2);
        d = sqrt(rslt);
        if(d < r)
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
