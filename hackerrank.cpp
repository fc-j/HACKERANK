#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){


    double  a =0;
    cin>>a;  
    cout<<setprecision(2)<<setw(15)<<fixed<<setfill('_')<<a; 


    /*  vector<int>nhexa; 
    int a=0, b=16,c=0, d=0  ; 
    cin>>a; 
    cout<<a<<endl; 
    while(!(a%b==0)){
        nhexa.push_back(a%b); 
        a=a/16;         
    }
    int len=nhexa.size()-1;
    cout<<"0x"; 
    for(int i = len; i>=0; i --){

        cout<<nhexa.at(i); 

    } */


}