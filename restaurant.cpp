#include<iostream>
#include<cmath>
#include<vector>
using namespace std; 
int mcd(int a , int b ){
    int res=0;
    bool mod=false; 
    while(!mod){
        res=a%b; 
        if(res!=0){
            a=b; 
            b=res; 
        }
        else{
            mod=true; 
        }
    }

    return b; 
}
int main (){
    vector<int>ans; 
    int a=0, b =0, res=0, cuad=0, aTotal=0; 
    int flg =0; 
    cin>>flg;
    for(int i =0; i<flg; i++){
        cin>>a>>b;
        aTotal=a*b; 
        cuad = mcd(a,b)*mcd(a,b); 
        res=aTotal/cuad; 
        ans.push_back(res); 

    } 
    for(int numeros : ans){
        cout<<numeros<<endl; 
    }
}