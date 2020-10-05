#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT (pow(2,31))
using namespace std;

int main()
{
    wrench786

    int t,i,x;
    double a,b;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x;
        a = (sqrt((double)8*x-7)-1)/2;
        b = floor(a);
        if(a==b){
            (i==t-1)?
            cout<<1<<endl:
            cout<<1<<" ";
        }
        else{
            (i==t-1)?
            cout<<0<<endl:
            cout<<0<<" ";
        }
    }
}
