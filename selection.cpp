#include <iostream>
#include <limits.h>
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
    int j=0,i;
    // while(j<n){
    for(j=0;j<n-1;j++){
        int min= INT_MAX,min_index;
        for(i=j;i<n;i++){
            if(a[i]<min){
                min=a[i];
                min_index = i;
            }
        }
        swap(a[min_index],a[j]);
        
    }
    
    //     j++;
    // }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}