#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
using namespace std;

int main()
{
    wrench786

    long long int n,i,j;
    cin>>n;
    if(n==0){
        cout<<1<<0<<endl;
    }
    else if(n>0 && n<10){
        cout<<n<<endl;
    }
    else{
        bool ans = true;
        vector<ll int>vec;
        for(j=9;j>=2;j--){
            if(n%j==0){
                vec.push_back(j);
                n/=j;
                j++;
                if(n>0 && n<10){
                    if(n>1 && n<10){
                        vec.push_back(n);
                    }
                    break;
                }
            }
            else if(j==2){
                ans = false;
            }
        }
        if(ans){
            sort(vec.begin(),vec.end());
            for(i=0;i<vec.size();i++){
                cout<<vec[i];
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
