#include <cstdio>
#include <algorithm>

typedef long long LL;

const LL infty = 1e18;

const int maxn = 1000*1001;

LL sum[maxn];

int main()
{
    int TT;
    scanf("%d",&TT);
    while(TT--)
    {
        sum[0] = 0;
        LL best = -infty;
        int n, k;
        scanf("%d%d",&n,&k);
        for(int i=1; i<=n; i++)
        {
            int x;
            scanf("%d",&x);
            sum[i] = sum[i-1]+x;
            for(int j=0; j<i; j++)
                if ((i-j)%k)
                    best = std::max(best,sum[i]-sum[j]);
        }
        printf("%Ld\n",best);
    }
}