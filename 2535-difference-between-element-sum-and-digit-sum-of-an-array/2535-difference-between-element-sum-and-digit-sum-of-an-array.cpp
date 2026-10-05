class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        int rem;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];

            if(nums[i]>=10){
                  int n=nums[i];

            while(n!=0){
                rem=n%10;
                n=n/10;
                sum2 += rem;

            }
            }
              else{
                sum2+=nums[i];
            }

          
        }
        return abs(sum-sum2);
        
        

    }
};