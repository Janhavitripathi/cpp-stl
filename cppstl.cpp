#include<bits/stdc++.h>
using namespace std;
int main()
{   //arrays
    
    array<int,5>arr;  //means array of int type of size 5 .
    arr.fill(2);       // fill the whole array with 2 .
    arr.at(2);          // value at the index 2 .
     
     for( int i=0;i<5;i++)
     {
         cout<<arr.at(i)<<endl;     // prins all elements in array .
     }
    

    //iterators
    //begin() --> (starting point) , end() --->(right after the last element), rbegin() -->(last element) , rend()-->(just before the start index)
    array<int, 5>ar={1,4,5,2,3};
    for(auto it =arr.begin();it!=ar.end();it++)    //it is pointer pointing to index of element .
    {
      cout<<*it<<"  ";
    }
    //another metod to print array elements (for each loop).
    for(auto it:ar)
    {
        cout<<it<<endl;  
    }
    string s="adsdssdgnh";
    for(auto it:s)
    {
        cout<<s<<"  ";
    }

    //for size arrayname.size()
    // to print first element arrayname.front()
    //to print last element arrayname.back()

    // vectors

    vector<int>v;     //vector<int>v(no of elements,element(optional))
    cout<<v.size();   //0
    v.push_back(1);  //{1}
    v.emplace_back(2);  //{1,2}
    cout<<v.size(); //2
    v.pop_back();
    cout<<v.size();   // 1 element{1}
    v.clear();        //erase all elements at once .
    vector<int>v(4,0);   //{0,0,0,0}
    v.push_back(4);
    v.push_back(4);      //{ 0,0,0,0,4,4}
    //creat a copy in other vector
    vector<int>vec1(1,2);
    vector<int>vec2(8,5);
    vector<int>vec3(vec2.begin(),vec2.end());  //[) 
 // alternative   vector<int>vec3(vec2);
    vector<int>raj;
    raj.push_back(1);
    raj.push_back(2);
    raj.push_back(3);
    raj.push_back(4); //{1,2,3,4}
    vector<int>raj1(raj.begin(),raj.begin()+2);          //{1,2}
    //lower bound,upper bound,swap sap(v1,v2)


    //to define 2d vectors
   
    vector<vector<int>>vec;
    vector<int>raj1;
    raj1.push_back(1);
    raj1.push_back(2);
    vector<int>raj2;
    raj2.push_back(1);
    raj2.push_back(2);
    vector<int>raj3;
    raj3.push_back(19);
    raj3.push_back(20);
     

     vec.push_back(raj1);
     vec.push_back(raj2);
     vec.push_back(raj3);

     for(auto vctr:vec)
     {   for (auto it:vctr){
      cout<<it<<endl;
     }
     }
      //defin 10*20
      vector<vector<int>>vec(10,vector<int>(20,0));

      vector<int>arr[4];   //array of vectors
      

      //3D  vectors 10*20*30
      vector<vector<vector<int>>>vect(10, vector<vector<int>>(20,vector<int>(30,0)));
    return 0;
}