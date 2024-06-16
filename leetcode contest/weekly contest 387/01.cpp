#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> resultArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans1;
        vector<int> ans2;
        for (int i = 0; i < 2; i++)
        {
            if (i == 0)
            {
                ans1.push_back(nums[i]);
            }
            if (i == 1)
            {
                ans2.push_back(nums[i]);
            }
        }
        int i = 2;
        int value1 = 0;
        int value2 = 0;
        while (i < n)
        {
            if (ans1[value1] > ans2[value2])
            {
                value1++;
                ans1.push_back(nums[i]);
            }
            else if (ans2[value2] > ans1[value1])
            {
                value2++;
                ans2.push_back(nums[i]);
            }
            i++;
        }

        vector<int> result;
        for (int i = 0; i < ans1.size(); i++)
        {
            result.push_back(ans1[i]);
        }
        for (int i = 0; i < ans2.size(); i++)
        {
            result.push_back(ans2[i]);
        }
        return result;
    }
}

;

int main()
{
    vector<int> v = {5,4,3,8};
    Solution s;
    vector<int> result = s.resultArray(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}