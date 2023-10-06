#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cout<<"N: ";
    cin>>num;
    int rem=0,mul=1;
    string ans="";
    while(num>0){
        rem = num % 16;
        switch(rem){
            case 10: ans +='A';
                    num = num/16;
                    break;
            case 11: ans+= 'B';
                    num = num/16;
                    break;
            case 12: ans+= 'C';
                    num = num/16;
                    break;
            case 13: ans+='D';
                    num = num/16;
                    break;
            case 14: ans+='E';
                    num = num/16;
                    break;
            case 15: ans+='F';
                    num = num/16;
                    break;
            default:
                num = num/16;
                ans = to_string(rem) + ans ;
                break;
        }
    }
    cout<<"\nBinary: "<<ans<<endl;
    return 0;
}