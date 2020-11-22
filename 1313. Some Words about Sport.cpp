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

    int n,i,j,k,l;
    cin>>n;
    vector<vector<int>>vec(n,vector<int>(n,0));
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		cin>>vec[i][j];
    	}
    }
    for(i=0,j=0;i<n;i++){
    	for(k=i,l=j;k>=j;k--,l++){
    		cout<<vec[k][l]<<" ";
    	}
    	if(i==n-1){
    		for(j=1;j<=n;j++){
    			for(k=i,l=j;k>=j;k--,l++){
    				cout<<vec[k][l]<<" ";
    			}
    		}
    	}
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
