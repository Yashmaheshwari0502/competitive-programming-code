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
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n=nums.size();
        if(n%3!=0){
            return -1;
        }
        int count =0;
        int i=0;
        while(i<n){
            if(nums[i]==1)continue;
            if(nums[i]==0 && n%3==0){
                return -1 ;
            }
            count++;
            i++;
        }
        return count;
    }
};
int main()
{
    vector<int> nums = {0,1,1,1,0,0};
    Solution s;
    int value = s.minOperations(nums);
    cout << value;
    return 0;
}