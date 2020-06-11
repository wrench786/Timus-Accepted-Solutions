#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=1;
    scanf("%d",&n);
    if(n>=1){
        for(int i=2;i<=n;i++){
            sum+=i;
        }
    }
    else{
        for(int i=0;i>=n;i--){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
