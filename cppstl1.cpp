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
     
      unordered_set<int>ust;
      ust.insert(2);
      ust.insert(1);
      ust.insert(6);
       


       //TC is always a constant .
       //average TC is O(1) but worst case it is linear in nature ,O(size) .

      //if TLE -->switch to set otherwise prefer unordered set.


      multiset<int>ms;
      ms.insert(1);
       ms.insert(1);
        ms.insert(2);
         ms.insert(2);
          ms.insert(3);

//st-->{1,1,2,2,3}
         ms.erase(2);  //erase all instances of 2 .

        auto it =ms.find(2);  //returns the first iterator .
        ms.clear();  // delets entire set .
           ms.erase(ms.begin(),ms.end());

           for(auto it =ms.begin();it!=ms.end();it++)
           {
             cout<<*it<<" ";
           }
           //or

           for(auto it:ms)
           {
             cout<<it<<"  ";
           }
             //find how many times instances occur
             ms.count(2);



           //KEY VALUE
           //MAP -->stores corresponding .
           /*e.g.
           raj -->27
           heema -->31
           abcb -->24
           */

          // it stors in sorted order .
            //map stores unique keys .
          map<string,int>mpp;
          mpp["raj"]= 27;
           mpp["heema"] =31;
            mpp["abcb"] =24;
            /*
            abcb
            heema 
            raj*/
           mpp["raj"] = 29;

           //in this case  it overwrits 27as 29--->29 .
           mpp.emplace("raj",45);
           mpp.erase("raj") ;  //give key only .
           //mpp.erase(mpp.begin(),mpp.begin()+2);
            auto it=mpp.find("raj");  //points to where raj lies .
            if(mpp.empty())
            {
              cout<<"yes it is empty";
            }
            mpp.count("raj"); //always returns 1 .
           pair<int,int>pr;  
           pr.first=1;
           pr.second=10;


           //printing map
            for(auto it:mpp){
              cout<<it.first<<"  "<<it.second<<endl;
            }
            //OR 

          for(auto it=mpp.begin();it!=mpp.end();it++)
          {
            cout<<it->first<<"  "<<it->second<<endl;
          } 

          //UNORDERED  MAP
          unordered_map<int,int>umpp;
          //O(1) in almost all cases .
          //O(n) in worst case .
          // unordered_map<pair<int,int>,int>umpp;--->WRONG Pair cannot work with unordered map .



          //PAIR  CLASS
          pair<int,int>pr ={1,2};
          pair<pair<int,int>,int>prr;  ///-->prr={ {1,2},3}
          cout<<prr.first .second<<endl;
            //2
            cout<<prr.first .first<<endl;  //1
           multimap<string,int>mmpp;
           mpp.emplace("raj",25);

    return 0;
}

