#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string str = "";

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
        int product = 1;
        for (int i = 0; i < n; i++)
        {

            product = product * (arr[i] );
        }
        cout<<product/m;
        if(str[i]=='')
    }
    return 0;
}