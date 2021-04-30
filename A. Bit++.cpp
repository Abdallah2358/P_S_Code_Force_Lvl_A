#include <iostream>
using namespace std;
int main()
{
    //input
    // number n
  int n  ; cin >> n ;
  // strings arry 
  string s [n];
  int count = 0 ;
  for (int i = 0; i < n; i++)
  {
      cin>>s[i];
      if (s[i][1]=='+')
      {
        count++;
      }else
      {
          count--;
      }
      
    
  }
  cout<<count<<endl;

  

  
    return 0;
}
