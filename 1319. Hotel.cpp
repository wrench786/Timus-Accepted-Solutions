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
    int x=1;
    for(i=0;i<n;i++){
    	if(!i){
    		for(j=n-1;j>=0;j--){
    			for(k=i,l=j;;k++,l++){
    				vec[k][l]=x;
    				x++;
    				if(k==n-1 || l==n-1)break;
    			}
    		}
    	}
    	else{
    		for(k=i,l=j+1;;k++,l++){
    				vec[k][l]=x;
    				x++;
    				if(k==n-1 || l==n-1)break;
    		}
    	}
    }
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		cout<<vec[i][j]<<" ";
    	}
    	cout<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
