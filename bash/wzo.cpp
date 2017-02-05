#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long LL;
typedef pair<LL,int> PI;

const LL infty = 1e18;

int main()
{
    int TT;
    cin >> TT;
    while(TT--)
    {
        int n, k;
        priority_queue<PI,vector<PI>,greater<PI>> Q;
        cin >> n >> k;
        vector<LL> sum(n+1,0),best(n+1,0);
        LL ans = -infty;
        Q.push(PI(0,0));
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            sum[i] = sum[i-1]+x;
            while(Q.top().second <= i-k)
                Q.pop();
            best[i] = sum[i]-Q.top().first;
            if (i>=k)
                best[i] = max(best[i],sum[i]-sum[i-k]+best[i-k]);
            ans = max(ans,best[i]);
            Q.push(PI(sum[i],i));
        }
        cout << ans << endl;
    }
    
}
