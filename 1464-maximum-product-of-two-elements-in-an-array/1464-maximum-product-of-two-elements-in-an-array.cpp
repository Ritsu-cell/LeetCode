class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            

            while(j<nums.size()){
                int p=(nums[i]-1)*(nums[j]-1);
                product=max(product,p);
                j++;
            }
        }
        return product;

 
            
    }
};