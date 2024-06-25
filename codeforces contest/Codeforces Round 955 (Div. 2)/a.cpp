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
        int i, j, ip, jp;
        cin >> ip >> jp;
        cin >> i >> j;
        if (ip > jp && i > j && i>=ip && j>=jp)
        {

            cout << "YES" << endl;
        }
        else if (jp > ip && j > i&& j>=jp && i>=ip)
        {

            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}