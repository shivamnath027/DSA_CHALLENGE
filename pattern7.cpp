#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    char a='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }
    return 0;
}