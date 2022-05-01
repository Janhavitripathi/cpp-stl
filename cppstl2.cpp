#include<bits/stdc++.h>
using namespace std;
int main()
{  //DAY 3

//STACK AND QUEUE
 stack<int>st;   //LIFO
 //pop,top,size,empty,push/emplace .
 //implementation arrays, linklist.
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(4);
    st.push(1);

    cout<<st.top();   //prints 1.
    st.pop();  //delets last entered element .
 
 
   bool flag =st.empty(); //returns true if stack is empty ,else false .
     //delete all stack .

     while(!st.empty())
     {
         st.pop();
     }
     cout<<st.size(); //no. of elements in stack .
     stack<int>sst;
     if(!st.empty())   ///always check because stack may be empty .
     {
         cout<<st.top()<<endl;
     }

     //QUEUE
    /* 
    FIFO
    push,pop,size,top ,empty .

    */
   queue<int>q;
   q.push(1);
    q.push(2);
     q.push(3);
      q.push(4); 

      cout<<q.front()<<endl;  //1
      q.pop();                 //delets 1
      cout<<q.front();      //2
      while(!q.empty())
      {
          q.pop();
      }


      //PRIORITY   QUEUE 
      //all elements in descending order.
      //push ,pop,empty,size,top
    
        priority_queue<int>pq;
        pq.push(1);
        pq.push(5);
        pq.push(2);
        pq.push(6);
        cout<<pq.top();   // 6
       priority_queue<pair<int,int>>ppq;
     // ppq.push(1,2);
     //for printing this in ascending order.
          pq.push(-1);
        pq.push(-5);
        pq.push(-2);
        pq.push(-6);
        cout<<-1* pq.top()<<endl;

     //MINI   PRIORITY QUEUE .
       priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(2);
        pq.push(3);
        pq.push(1);
        cout<<pq.top()<<endl;  //prints 2 .



        //DeQUEUE
        //push_front(),push_back(),pop_front(),begin,end,everything.....
    


        //LIST
        list<int>ls;
          //every function as vector.
        ls.push_front(1);
        ls.remove(1);
      ///TC -->O(1)

    return 0;
}