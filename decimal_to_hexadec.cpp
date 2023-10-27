#include <iostream>
#include <string>
using namespace std;
int main(){

    int num;
    cout<<"N: ";
    cin>>num;
    int rem=0;
    string ans="";
    while(num>0){
        rem = num % 16;
        switch(rem){
            case 10: ans +='A';
                    break;
            case 11: ans+= 'B';
                    break;
            case 12: ans+= 'C';
                    break;
            case 13: ans+='D';
                    break;
            case 14: ans+='E';
                    break;
            case 15: ans+='F';
                    break;
            default:
                ans = to_string(rem) + ans ;
                break;
        }
        num = num/16;
    }
    cout<<"\nHexaDecimal: "<<ans<<endl;
    return 0;
    
}