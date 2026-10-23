class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
       
      
        int c=0;
        for(int i=0; i<nums.size()-2; i++){
            int diff= nums[i+1]-nums[i];
            int j=i+2;
            while(j<nums.size() && nums[j]-nums[j-1]==diff){
                c++;
                j++;
          
            }
        
        }

        return c;
    }
};