#include<bits/stdc++.h>
using namespace std;
int main()
{      
    //DAY 2 sets ,map 
    //given n element, tell me the number of unique elements.
    // set will take elements in ascending order and unique elements.
    int arr[] ={2,5,4,2,5,6,6};
    set<int>st;
    int n ;
    cin>>n;
    for(int i=0;i<7;i++)
    {
       int x;
       cin>>x;
       st.insert(x);  //log(n) N is size of set <--TC  { 2,4,5,6}
    }

    //erase functionality
      //st.erase(iterator);
      //st.erase(st.begin(),another itertor)
      st.erase(st.begin(),st.end());//erase all elements of set .
      //TC -->log(n)   

      st.erase(5)  ;   //delets element 5 .
      set<int>st ={1,2,3};  //delaration of set
      auto it=st.find(6);  //returns iterator pointing to 6 .
      //TC-->log n
      //st.find(10) --->not found so returns iterator st.end() .



      

    return 0;
}

