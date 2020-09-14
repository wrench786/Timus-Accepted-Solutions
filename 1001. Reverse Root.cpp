#include<iostream>
#include<vector>
#include<iomanip>
#include<math.h>

int main()
{
    std::vector<long long int>vec;
    long long int x,i=0;
    while(std::cin>>x){
        vec.push_back(x);
    }
    for(i=vec.size()-1;i>=0;i--){
        std::cout<<std::fixed<<std::setprecision(4)<<std::sqrt(vec[i])<<std::endl;
    }
}
