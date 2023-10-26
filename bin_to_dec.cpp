#include <iostream>
// #include <math.h>
using namespace std;
int main(){
    int num;
    cout<<"N: ";
    cin>>num;
    int ans=0,rem=1,mul=1; //In comment , take mul=0 to get ans
    while(num>0){
        rem = num%10;
        num=num/10;
        // ans = rem*pow(2,mul)+ans;
        ans = rem*mul+ans;
        // mul++;
        mul = mul*2;
    }
    cout<<endl<<ans;
    return 0;
    
}