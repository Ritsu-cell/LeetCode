class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
       int i=0,j=0;
       long long ans=0;
    
      for(int i=0; i<nums.size(); i++){
        int mn = nums[i];
            int mx = nums[i];
       for(int j=i; j<nums.size(); j++){
           mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);
                ans += (long long)(mx - mn);

       
        }
        
      }
      


        return ans;


       
        
    }
};