#include<iostream>
#include<sstream>
#include<vector>
using namespace std; 
int main (){

    vector<int> enteros;
    stringstream ss("holaa,24,3"); 
    int a=0; 
    while (ss>>a)
    {
        enteros.push_back(a);
         
    }
    



    for(int num : enteros){
        cout<<num<<endl; 
    }









} 