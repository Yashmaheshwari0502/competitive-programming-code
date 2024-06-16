#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        priority_queue <long long, vector<long long>, greater<long long>> pq; 
        
        for(int i = 0 ; i < n ; i++){
            pq.push(nums[i]);
        }
        
        while(!pq.empty()){
            if(pq.top() >= k) break;
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            if(x < k && y >= k){
                count++;
                break;
            }else{
                pq.pop();
                pq.push((min(x , y)*2) + max(x , y));
            }
            count++;

        }
        return count;
    }
};

int main()
{
    vector<int> nums = {2, 11, 10, 1, 3};
    int k = 10;
    Solution s;
    cout << s.minOperations(nums, k) << endl;
    return 0;
}