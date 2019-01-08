#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    unsigned M;
    size_t N;
    std::vector<unsigned> T;
    
    T.reserve(N);

    std::cin>>M>>N;
    unsigned value;

    if (N==0){
        std::cout<<0;
        return 0;
    }

    while(N--){
        std::cin>>value;
        T.push_back(value);
    }
   
    std::sort(T.begin(), T.end(), std::greater<unsigned>());
    

    auto i = T.begin();
    auto j = T.end();
    --j;

    unsigned result= 0;
    
    while(i<j){
        result+=1;
        unsigned sum = *i + *j;
        i++;
        if(sum <= M)
            j--;
    }
    
    if (i==j)
        std::cout<<result+1;
    else
        std::cout<<result;
    return 0;
}
