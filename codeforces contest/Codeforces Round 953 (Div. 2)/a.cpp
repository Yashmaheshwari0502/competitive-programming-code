#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = arr[n - 1];
        int maxI = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            maxI = max(maxI, arr[i]);
        }
        cout << ans + maxI << endl;
    }

    return 0;
}
