#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < k)
            {
                count++;
            }
        }
    }
};


int main()
{
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1};
    int k = 3;
    Solution s;
    cout << s.minOperations(nums, k) << endl;
    return 0;
}