class Solution
{
public:
    int earliestSecondToMarkIndices(vector<int> &nums, vector<int> &changeIndices)
    {
        int second = 1;
        int value = nums.size();
        while (value > 0)
        {
            if (find(changeIndices.begin(), changeIndices.end(), value) != changeIndices.end())
                ;
            {
                value--;
            }
            else
            {
                return -1;
            }
        }
        return 0;
    }
};