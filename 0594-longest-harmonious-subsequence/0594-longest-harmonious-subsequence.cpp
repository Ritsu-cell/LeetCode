class Solution {
public:
    int findLHS(vector<int>& nums) {
        int c=0;
        int maxi=0;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++){
            while(nums[i]-nums[c]>1){
                c++;
            }

            if(nums[i]-nums[c]==1){
                maxi=max(maxi,i-c+1);
            }
       
        }
        return maxi;
    }   
    
};