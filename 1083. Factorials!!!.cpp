#include<bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main() {
    wrench786

    int n,i,sum=1;
    char ar[21];
    scanf("%d %s",&n,&ar);
    int len = strlen(ar);
    if(n%len==0){
        for(i=0;n-i*len>=len;i++){
            sum *= (n-i*len);
        }
    }
    else{
        int x = n%len;
        for(i=0;n-i*len>=x;i++){
            sum *= (n-i*len);
        }
    }
    printf("%d\n",sum);
}
