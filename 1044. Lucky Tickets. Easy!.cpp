#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
using namespace std;

vector<int>vec;

void solve(int x){
    int i,j,k,l,m,n,o,p,ans;
    ans=0;
    if(x==2){
        for(i=0;i<=9;i++){
            for(j=0;j<=9;j++){
                if(i==j)ans++;
            }
        }
        cout<<ans<<endl;
    }
    else if(x==4){
        for(i=0;i<=9;i++){
            for(j=0;j<=9;j++){
                for(k=0;k<=9;k++){
                    for(l=0;l<=9;l++){
                        if(i+j==k+l)ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    else if(x==6){
        for(i=0;i<=9;i++){
            for(j=0;j<=9;j++){
                for(k=0;k<=9;k++){
                    for(l=0;l<=9;l++){
                        for(m=0;m<=9;m++){
                            for(n=0;n<=9;n++){
                                if(i+j+k==l+m+n)ans++;
                            }
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    else{
        for(i=0;i<=9;i++){
            for(j=0;j<=9;j++){
                for(k=0;k<=9;k++){
                    for(l=0;l<=9;l++){
                        for(m=0;m<=9;m++){
                            for(n=0;n<=9;n++){
                                for(o=0;o<=9;o++){
                                    for(p=0;p<=9;p++){
                                        if(i+j+k+l==m+n+o+p)ans++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    solve(n);

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
