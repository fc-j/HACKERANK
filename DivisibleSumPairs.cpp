#include <iostream>
#include <vector>
using namespace std; 
int main() {
    vector <int> vec, vec1; 
    int n=0 ,x=0, k=0, t=0;
    cin>>n>>k;
    for(int i=0; i<n;i++){
        cin >>x; 
        vec.push_back(x); 

   }    
    for(int i =0; i<vec.size();i++){
        for(int j=i+1;j<vec.size(); j++){
            if((vec[i]+vec[j])%k==0){
                t++; 
            }
        }
    }    
    cout<<t;             
    return 0;
}