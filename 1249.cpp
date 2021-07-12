#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,w,h,op,v,max=0,min=111111111;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&op);
        int arr[op];
        char nam[op][20];
        int nam1,nam2;
        int flag=0;
        max=0,min=111111111;
        for(int j=0;j<op;j++)
        {

            scanf("%s %d %d %d",&nam[j],&l,&w,&h);
            arr[j]= l*w*h;
            if(max<arr[j])
            {
                max= arr[j];
               nam1=j;
            }
            if(arr[j]<min)
            {
                min = arr[j];
                nam2 = j;
            }
        }
        if(max==min)
        {
            printf("Case %d: no thief\n", i);
        }
        else{
            printf("Case %d: %s took chocolate from %s\n",i,nam[nam1],nam[nam2]);
        }

    }
    return 0;
}
