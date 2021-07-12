#include<stdio.h>
#include <math.h>
#define pi 2*acos(0.0)

int main()
{
    double r,result=0,a,b;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf",&r);
        a = 2*r ;
        b = a*a;
        result = pi*r*r ;
        printf("Case %d: %.2lf\n",i,b-result);
        result = 0;
    }
    return 0;
}
