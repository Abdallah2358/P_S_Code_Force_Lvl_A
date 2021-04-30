#include <iostream>
using namespace std;
int main()
{
 
    string s;
    cin >> s;
    int counte = 0;
    for (int i = 0; i < s.length(); i++)
    {
        counte++;
        for (int k = 0; k < i; k++)
        {

            if (s[i] == s[k])
            {
                counte--;
                break;
            }
        }
    }
    if (counte%2==0)
    {cout <<  "CHAT WITH HER!" << endl;
    }else
    {cout <<  "IGNORE HIM!" << endl;
    }
    
    
    
    return 0;
}
