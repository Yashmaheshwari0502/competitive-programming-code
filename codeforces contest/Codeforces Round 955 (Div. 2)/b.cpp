#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <numeric>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        
        while (k)
        {
            x++;
            if (x % y == 0)
            {
                x = x / y;
            }
            
        }
        cout<<x<<endl;
    }
    return 0;
}