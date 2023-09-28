#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int space = n-1;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space--;
        for(int k=0;k<i;k++){
            cout<<char(a+k);
        }
        cout<<endl;
    }
    return 0;
}