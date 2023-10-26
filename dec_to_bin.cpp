#include <iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"N: ";
    cin>>num;
    int rem=0,mul=1,ans=0;
    while(num>0){
        rem = num % 2;
        num = num/2;
        ans = mul*rem+ans;
        mul=mul*10;
    }
    cout<<"\nBinary: "<<ans<<endl;
    return 0;

}