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

    int t;
    cin>>t;
    while(t--){
    	string str;
    	cin>>str;
    	int row,col,i,ans=0;
    	row = str[0]-97 +1 ;
    	col = str[1]-48;
    	if(row+2>0 && row+2<9 && col+1>0 && col+1<9) ans++;
    	if(row+2>0 && row+2<9 && col-1>0 && col-1<9) ans++;
    	if(row+1>0 && row+1<9 && col+2>0 && col+2<9) ans++;
    	if(row+1>0 && row+1<9 && col-2>0 && col-2<9) ans++;
    	if(row-1>0 && row-1<9 && col+2>0 && col+2<9) ans++;
    	if(row-1>0 && row-1<9 && col-2>0 && col-2<9) ans++;
    	if(row-2>0 && row-2<9 && col+1>0 && col+1<9) ans++;
    	if(row-2>0 && row-2<9 && col-1>0 && col-1<9) ans++;
    	cout<<ans<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
