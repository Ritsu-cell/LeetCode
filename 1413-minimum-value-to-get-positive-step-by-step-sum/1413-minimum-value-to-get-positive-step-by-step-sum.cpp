class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini=0;
        int val=0;
        for(int i=0; i<nums.size(); i++){
            val+=nums[i];
            mini=min(mini,val);
          
        }
        return 1-mini;
        
    }
};