// a round 922 div 2 a

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = n * (m / 2);
        cout << ans << endl;
    }
    return 0;
}