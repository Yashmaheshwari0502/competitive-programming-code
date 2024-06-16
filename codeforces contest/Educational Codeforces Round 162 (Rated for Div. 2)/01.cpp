#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                count1++;
            }
        }
        if (count1 == 1 || count1 == n)
        {
            cout << 0 << endl;
        }
        else
        {
            while()
        }
    }
    // cout<<<<endl;

    return 0;
}
