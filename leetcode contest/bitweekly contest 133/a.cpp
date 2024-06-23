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
    int minimumOperations(vector<int> &nums)
    {
        int count =0;
        int n =nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            if(nums[i]%3==0)continue;
            while(nums[i]%3!=0){
                if((nums[i]+1)%3==0){
                    count++;
                    break;
                }
                else if((nums[i]+2)%3==0){
                    count++;
                    break;
                }
                else if((nums[i]-1)%3==0){
                    count++;
                    break;
                }
                
            }
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {3,5,1};
    Solution s;
    int value = s.minimumOperations(nums);
cout<<value;
    return 0;
}