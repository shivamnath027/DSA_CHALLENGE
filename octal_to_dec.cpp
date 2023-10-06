#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"N: ";
    cin>>num;
    int rem=0,mul=1,ans=0;
    while(num>0){
        rem = num % 10;
        num = num/10;
        ans = mul*rem+ans;
        mul =mul*8;
    }
    cout<<"\nDecimal: "<<ans<<endl;
    return 0;
}