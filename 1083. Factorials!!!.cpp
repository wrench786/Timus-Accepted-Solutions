#include<bits/stdc++.h>

using namespace std;

int main()
{
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
        for(i=0;n-i*len>=1;i++){
            sum *= (n-i*len);
        }
    }
    printf("%d\n",sum);
    return 0;
}
