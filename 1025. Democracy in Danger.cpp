#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif


	int n,i;
	cin>>n;
	vector<int>vec(n);
	for(i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	int ans=0;
	for(i=0;i<(vec.size()/2)+1;i++){
		ans+=(vec[i]/2)+1;
	}
	cout<<ans<<endl;


#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
