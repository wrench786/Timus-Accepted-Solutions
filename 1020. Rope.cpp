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

    int n,i,j;
    double r,ans=0.0;
    cin>>n>>r;
    vector<vector<double>>vec(n,vector<double>(2));
    for(i = 0; i<n;i++){
    	for(j=0;j<2;j++){
    		cin>>vec[i][j];
    	}
    }
    for(i=0;i<n;i++){
    	if(i==n-1){
    		double x = abs(vec[i][0]-vec[0][0]);
    		double y = abs(vec[i][1]-vec[0][1]);
    		ans+= sqrt(x*x+y*y);
    	}
    	else{
    		double x = abs(vec[i][0]-vec[i+1][0]);
    		double y = abs(vec[i][1]-vec[i+1][1]);
    		ans+= sqrt(x*x+y*y);
    	}
    }
    ans+= 2*PI*r;
    cout<<fixed<<setprecision(2)<<ans<<endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
