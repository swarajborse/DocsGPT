class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return n;

        int longest = 2;  

        for(int i = 0; i < n - 2; i++){
            int j = i + 1;
            int k = j + 1;
            int cnt = 2;

            while(k < n && nums[k] == nums[i] + nums[j]){
                cnt++;
                i = j;
                j = k;
                k++;
            }

            longest = max(longest, cnt);
        }

        return longest;
    }
};
