#include<bits/stdc++.h>
using namespace std;
namespace she{
    int val=50;
    int getVal(){
        return val*10;
    }
}
int main()
{
 /* int val =50;
  double val=10.0;
  cout<<val<<endl;  ----->error  */ 
  //same variable is declared using diff.data type
  
  
  double val=10.0;
  cout<<val<<endl;     // prints 10.0
  cout<<she::getVal() <<endl;       //  prints 500
  cout<<she::val<<endl;         //prints 50
}