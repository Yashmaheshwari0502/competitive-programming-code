#include <iostream>
#include <vector>
using namespace std;

int sumarr(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int sum = sumarr(arr, n);
        if (sum % 3 == 0)
        {
            
        }
        else if (sum % 3 == 2)
        {
            count++;
        }
        else if (sum % 3 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if ((sum - arr[i]) % 3 == 0)
                {
                    arr[i] = 0;
                    break;
                }
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}