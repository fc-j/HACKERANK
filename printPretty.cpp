#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
/*
    https://www.hackerrank.com/challenges/prettyprint/problem

*/

int main(){

    int d=0 , a=0; 
    double  b=0,c =0;
    cin>>d; 
    
    for(int i =0; i <d; i++){
        cin>>a>>b>>c; 
        
        cout<<"0x"<<hex <<a<<endl;    
        cout<<setw(15)<<setfill('_')<<fixed<<setprecision(2)<<showpos<<b<<endl; 
        cout<<scientific<<setprecision(9)<<uppercase<<c<<endl; 
        
    } 
    


}