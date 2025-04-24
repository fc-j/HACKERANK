#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





int main (){

    vector <int> m; 
    int a=0, flag =0; 
    cin>>a; 
    for(int i =0; i<a; i++){
        cin>>flag; 
        m.push_back(flag);
    }
    sort(m.begin(),m.end()); 
    for(int i =0; i<a; i++){

        cout<<m[i]<<" "; 
    }

}

