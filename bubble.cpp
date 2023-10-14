#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
}