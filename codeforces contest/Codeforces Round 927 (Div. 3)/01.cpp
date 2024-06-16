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
        int value = 0;
        char arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '@')
            {
                value++;
            }
            if (arr[i + 1] == '*' && arr[i + 2] == '*')
            {
                break;
            }
            if (arr[i] == '.')
            {
                continue;
            }
        }
        cout << value<<endl;
    }
    return 0;
}