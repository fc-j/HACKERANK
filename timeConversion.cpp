#include <iostream>
#include <string>
using namespace std; 
int main (){
    string  s, z; 
    getline(cin, s); 

    //10:09:12pm,
    int len=s.length(), hora=0; 
    char flag=s.at(len-2);
    
    
    
    
    int d = stoi(s.substr(0,2)); 
    if(flag=='P'||flag=='p'){   
        if(d<12){
            cout<<12+d<<s.substr(2,len-4);
        }
        else{
            cout<<s.substr(0,len-2); 
        }
    }else{
        if(d==12){
            cout<<"00"<<s.substr(2,len-4); 

        }
        else{
            cout<<s.substr(0,len-2); 
          
        }
    }        


    
}   