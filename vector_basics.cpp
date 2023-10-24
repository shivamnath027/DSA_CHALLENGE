#include <iostream>
#include <vector>
using namespace std;
int main(){
    // DECLARATION:
    //1
    //WITHOUT DECLARING SIZE
    // vector<int> v;
    //2
    //vector<int> v(sizeofvector);
    // vector<int> v(4);
    //3
    //INITIALIZING ALL THE 4 ELEMENTS with value 2
    // vector<int> v(4,2);
    //INSERTING VALUES------------------------------------------------------------.>
    // v.push_back(4);
    // v.push_back(8);
    // v.push_back(5);

    // The Size will be increased by multiplying by 2
    //for ex: if current size if 1, after you try to push elements it will
    // make the size 2, then it will make it 4, then 8 then 16 and so on
    

    vector<int> v = {2,4,6,8,10};
    // ASK THE USER
    // cin>>n;
    // vector<int> v(n);

    // INSERTING THROUGH RAM
    //for(int i=0;i<n;i++)
        //cin>>v[i]
    
    //How to remove value from vector--------------------------------------------------------->>
    //1
    // v.pop_back(element)   TIME COMPLEXITY--> O(1)
    //2 ------> To remove everything
    // v.clear()
    //to be specific with the position
    // v.erase(v.begin()+2); remove element with index 2    TIME COMPLEXITY -> O(n)

    //METHODS------------------------------------------------------>>
    
    // //v : 1,2,3,4
    // cout<< v.front();   // 1
    // cout<< v.back();    // 4
    // cout<< v.empty(); // 1 if empty
    // cout<< v.at(2);  //returns value at index 2


    //ITERATOR IN A VECTOR------------------------------------------------------------------->>
    // v = 4,6,8,10

    // auto IS USED IN THIS FOR LOOP TO SELECT ANY DATA TYPE THAT IS PRESENT IN THE VECTOR

    // for(auto it=v.begin();it!=v.end();it++){
        //cout<< *it << " ";
    //}


    //YE DONO METHOD INDEX PE POINT KRTA H
    // v.rbegin(); reverse Begin     // 10       ka index 3 

    //v.rend(); reverse end      //4 ke pehle point krega yaani ki -1

    //--------------------------------------------SORTING------------------------>>

    // v = 2, 3 , 1 ,7 ,4

    // sort(v.begin(),v.end());    1,2,3,4,7  //SORT IN ASCENDING ORDER

    // sort(v.begin(),v.end(), greater<int>());  //SORT IN DESCENDING NUMBER 7 4 3 2 1 

    
}