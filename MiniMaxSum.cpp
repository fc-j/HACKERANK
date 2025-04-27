#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
    vector<int> vec; 
    long long  a =0, maxSum=0, minSum=0; 
    for(int i =0; i <5; i++){
        cin>>a; 
        vec.push_back(a); 
    }   
    sort(vec.begin(),vec.end()); 

    for(int i =0;i<4; i++){
        minSum+=vec[i];
    }

    for(int i =1;i<5; i++){
        maxSum+=vec[i];
    }

    cout<<minSum<<" "<<maxSum; 

    return 0;
}