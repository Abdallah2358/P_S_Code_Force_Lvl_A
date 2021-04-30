#include <iostream>
using namespace std;
int main()
{
    //input
    // number n
    int n;
    cin >> n;
    //number k
    int k;
    cin >> k;
    //arry a
    int a[n];
    int advnced = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            if (i < (k - 1))
            {
                advnced++;
            }
            else if (a[k - 1] == a[i])
            {
                advnced++;
            }
        }
    }
    cout << advnced << endl;

    return 0;
}
