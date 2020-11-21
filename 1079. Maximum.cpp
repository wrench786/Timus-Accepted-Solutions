#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

vector<int>vec(100000);

void call(){
	int i;
	for(i=0;i<100000;i++){
		if(i==0){
			vec[i]=0;
		}
		else if(i==1){
			vec[i]=1;
		}
		else if(i%2==0){
			vec[i]= vec[i/2];
		}
		else if(i%2==1){
			vec[i]= vec[i/2]+vec[(i/2)+1];
		}
	}
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    call();
    int n;
    while(cin>>n && n){
    	int ans = *max_element(vec.begin(),vec.begin()+n+1);
    	cout<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
