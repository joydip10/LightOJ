#include<stdio.h>
#define pi 3.141592653589793238462
int main()
{
    int i;
    double v,nr,t,r1,r2,h,p;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        nr =((((r1-r2)*p)/h)+r2);
        v = ((pi/3)*p*((nr*nr)+(r2*r2)+(nr*r2)));
        printf("Case %d: %lf\n",i,v);
    }
    return 0;
}
