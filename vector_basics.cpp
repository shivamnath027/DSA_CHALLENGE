#include <iostream>
#include <vector>
using namespace std;
int main(){
    // DECLARATION:
    //1
    //WITHOUT DECLARING SIZE
    vector<int> v;
    //2
    //vector<int> v(sizeofvector);
    vector<int> v(4);
    //3
    //INITIALIZING ALL THE 4 ELEMENTS with value 2
    vector<int> v(4,2);
    //INSERTING VALUES------>
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);
}