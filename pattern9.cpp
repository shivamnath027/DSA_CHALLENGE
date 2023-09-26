#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>n-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}