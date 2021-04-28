#include <iostream>
using namespace std;
int main()
{
    //input
    // number n
  int n  ; cin >> n ;
  // strings arry 
  string s [n];
  for (int i = 0; i < n; i++)
  {
      cin>>s[i];
  }

    //logic 
    for (int  i = 0; i < n; i++)
    {
        int len =  s[i].length() ;
        //if the length of the string is larger than 10
       if ( len>10 )
       {
           //then replace  that string with the first letter + (number of leters of string -2)   + last letter
           // two because we removed the first and last letter
         s[i] = s[i][0]+to_string(len-2)+s[i][len-1];
       }
    }
// output   
for (int i = 0; i < n; i++)
{
    cout<< s[i]<<endl;
}


  
    return 0;
}
