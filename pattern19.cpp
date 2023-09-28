#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int space=0;
    for(int i=n;i>=1;i--){
        for(int k=i;k>=1;k--){
            cout<<"* ";
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        space+=2;
        for(int k=i;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    space = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        for(int j=space;j>0;j--){
            cout<<"  ";
        }
        space-=2;
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}