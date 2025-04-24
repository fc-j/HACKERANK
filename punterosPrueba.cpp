#include<iostream>
using namespace std;
bool sumArrayPar(int arr[], int tam, int target){
    int *iz=arr, *der=arr+tam-1 ;
    
    while (iz<der)
    {
        int sum=*iz+*der; 
        if(sum==target ){
            return true;            
        }
        else if (sum>target)    
            der--; 
        else
            iz++;
    }
    return false; 
} 

int main(){
    int target=0, arr[5]={1, 2,4 ,5 ,6},  t=sizeof(arr)/sizeof(arr[0]); 
    cout<<"ingrese numero a sumar: "; cin>>target; 
    cout<<sumArrayPar(arr, t, target); 


}