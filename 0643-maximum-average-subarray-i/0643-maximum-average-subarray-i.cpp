class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int current =0;
        for(int i=0; i<k; i++){
            current+=nums[i];
            
        }
        int maxa=current;
        for(int i=1; i<=n-k; i++){
            current = current - nums[i-1] + nums[i+k-1];
           maxa = max(maxa, current);

        }
        return (double)maxa/k;

    }
};