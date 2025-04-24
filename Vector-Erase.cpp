#include <iostream>
#include <vector>
using namespace std; 
int main (){
    vector <int> vec; 
    int n=0,x=0, a=0,b =0,flag=0; 
    int res=0; 
    cin>>n; 
    for(int i =0; i<n; i++){
        cin>>flag; 
        vec.push_back(flag);
    
    
    } 
    cin>>x; 
    vec.erase(vec.begin()+x-1);
    cin>>a>>b;  
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    res=b-a;     
    int len=vec.size(); 
    cout<<len<<endl; 
    for(int  i =0; i<n-res-1; i++){
        cout<<vec[i]<<" "; 
    
    }
    
}
