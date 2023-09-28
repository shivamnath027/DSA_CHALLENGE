#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=space;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
        space--;
        
    }
    space = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
        space++;
    }
    return 0;
}