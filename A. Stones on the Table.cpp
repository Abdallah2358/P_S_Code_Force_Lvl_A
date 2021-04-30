#include <iostream>
using namespace std;
int main()
{
    //input
    // number n
  int n  ; cin >> n ;
  // strings arry 
  string s ;
  cin >>s ;
  int counte= 0; 
  for (int i = 1; i < n; i++)
  {
            if ( s[i] ==s[i-1])
            {
                counte++;
            }
  }  
  cout<<counte<<endl;
    return 0;
}
