#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int tc,i,total=0;
    cin>>tc;
    vector<int>vec(tc,0);
    for(i=0;i<tc;i++){
        cin>>vec[i];
        total+=vec[i];
    }
    int bit_mask,sum1,sum2,ans=total;
    for(bit_mask=1;bit_mask<(1<<tc);bit_mask++){
        sum1=0;
        for(i=0;i<tc;i++){
            if(bit_mask & (1<<i)){
                sum1+=vec[i];
            }
        }
        sum2 = total - sum1 ;
        ans = min(ans, abs(sum2-sum1));
    }
    cout<<ans<<endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
