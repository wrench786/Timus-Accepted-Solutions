#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
using namespace std;

char A(int i,int n){
    while(i<=n){
        if(i&1 && i==1){
            cout<<"sin("<<i;
            i++;
            cout<<A(i,n);
        }
        else if(i&1){
            cout<<"+sin("<<i;
            i++;
            cout<<A(i,n);
        }
        else{
            cout<<"-sin("<<i;
            i++;
            cout<<A(i,n);
        }
        return ')';
    }
    return ')';
}

char S(int i,int n){
    int x;
    while(i!=n){
        if(i==1){
            x = i;
            i++;
            if(i!=n)cout<<S(i,n);
            A(1,n-x);
            cout<<"+"<<x;
        }
        else {
            x=i;
            i++;
            cout<<"(";
            if(i!=n)cout<<S(i,n);
            A(1,n-x);
            cout<<"+"<<x;
        }
        return ')';
    }
    return ')';
}
int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    S(1,++n);

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
