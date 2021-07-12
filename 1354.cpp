#include <stdio.h>
#include <string.h>
int main()
{
    int tst, i, j, k, dgt,cnt;
    char dcml[50], bnry[50];
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        int ara1[4], ara2[4];
        for(k=0; k<4; k++)
            ara1[k]=ara2[k]=0;
        scanf("%s", dcml);
        scanf("%s", bnry);
        for(j=0, k=0; dcml[j]; j++)
        {
            if(dcml[j]=='.') k++;
            else
            {
            dgt = dcml[j]-48;
            ara1[k] = ara1[k]*10 + dgt;
            }
        }
        for(j=0, k=0; bnry[j]; j++)
        {
            if(bnry[j]=='.') k++;
            else
            {
            dgt = bnry[j]-48;
            ara2[k] = ara2[k]*2 + dgt;
            }
        }
        for(j=0, cnt=0; j<4; j++)
        {
            if(ara1[j]==ara2[j])
                cnt++;
        }
        if(cnt==4) printf("Case %d: Yes\n", i);
        else printf("Case %d: No\n", i);

    }
    return 0;
}
