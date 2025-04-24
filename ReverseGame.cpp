#include <iostream>
#include <vector>
using namespace std; 
void printVector(vector <int>&vec ){
    for(int i =0; i<vec.size(); i ++){
        cout<<vec[i]<<" "; 
    }
}; 
int searchValue(vector <int>& vec, int num){
    int x=0; 
    for(int i =0; i <vec.size(); i++){
        if(vec[i]==num){
            x=i; 
        }
    }
    return x; 
    
}

int Pivot(int n, int x){
    int ini=0, fin=0; 
    vector <int>trash; 
    vector <int>vec;
    for(int i =0; i<n; i ++)
    {
        vec.push_back(i);   
    }
    fin=vec.size()-1; 
    while(ini<n){
        if (ini<fin){
            
            trash.push_back(vec[fin]);     
            trash.push_back(vec[ini]);
        }
        else if (ini==fin){
            
            trash.push_back(vec[fin]);
            break;
        }
        fin--; 
        ini++;  
    }

  return searchValue(trash,x); 
}
int main (){
    int a=0, b=0, n=5, ini=0, fin=0; 
    vector<int > vec; 
    vector<int > trash; 
    
    cin>>n; 
    for(int i =0; i<n; i++){
        cin>>a>>b; 
        vec.push_back(Pivot(a,b)); 
    }
    for (int a : vec){
        cout<<a<<endl; 
    }
}                                                                                                   