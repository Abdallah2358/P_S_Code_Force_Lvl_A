#include <iostream>
using namespace std;
int main()
{
    //input
    // number n
    int n;
    cin >> n;
    int canAnse = 0 ; 
   for (int  i = 0; i < n; i++)
   {
       int counter = 0 ;
       int input ;
      for (int j = 0; j < 3; j++)
      {
        cin >> input ;
        counter+=input;
      }
      if ( counter >= 2)
      {
         canAnse++;
      }
      
   }
   cout << canAnse <<endl;
    return 0;
}

