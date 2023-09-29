#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array";
    cin>>n;
    int a[n];
    for(int i =0; i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i =0; i<n; i++){
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest<<endl;



return 0;
}

