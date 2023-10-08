#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"N: ";
    cin>>num;
    if(num<=0){
        cout<<"\nNot in power of 2\n";
        exit(0);
    }
    while(num>1){
        if(num%2==1){
            cout<<"\nNot in power of 2\n";
            exit(0);
        }
        
        num=num/2;
    }
    cout<<"\nPower of 2";
    return 0;
}