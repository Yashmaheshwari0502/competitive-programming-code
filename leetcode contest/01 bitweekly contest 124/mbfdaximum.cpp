class Solution
{
public:
    int maxOperations(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int first = nums[0] + nums[1];
        int value = 1;
        for (int i = 2; i < n; i++)
        {
            if (nums[i] + nums[i + 1] == first)
            {
                value++;
            }
            else
            {
                break;
            }
        }
        return value;
    }

};