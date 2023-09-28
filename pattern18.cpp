#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int space = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        space++;
        for(int k=2*i-1;k>=1;k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}