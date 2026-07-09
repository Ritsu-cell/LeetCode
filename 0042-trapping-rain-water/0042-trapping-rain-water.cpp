class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
    int water = 0;
        int lmax = 0, rimax = 0;
        int l=0,r=n-1;
        while(l<r){
            if(height[l]<height[r]){
                if(lmax>height[l]){
                    water= water+ lmax-height[l];
                }
                else {
                    lmax=height[l];
                }
                l++;
            }
            else {
                if(rimax>height[r]){
                    water=water+ rimax-height[r];
                }
                else {
                    rimax=height[r];
                }
                r--;

            }
        }
        return water;
       
    }
};
