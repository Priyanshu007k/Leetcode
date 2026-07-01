class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      /*  sort(nums.begin(),nums.end());
        int n = nums.size();
         return nums[n-k];
         */
        priority_queue<int>pq;
        int n = nums.size();

        for (int i=0 ; i<n ; i++){
            pq.push(nums[i]);
        }
        while (k-->1){
            pq.pop();
        }

        return pq.top();
        
    }
};