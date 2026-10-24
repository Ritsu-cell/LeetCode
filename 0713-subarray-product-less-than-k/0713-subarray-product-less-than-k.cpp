class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int c=0;
         int p=1; 
         int i=0;
         for(int j=0; j<nums.size(); j++){
            p=p*nums[j];
           while(p>=k && i <= j){
            p=p/nums[i];
            i++;
           }
           c+=j-i+1;
         }
      
        return c;

        
    }
};