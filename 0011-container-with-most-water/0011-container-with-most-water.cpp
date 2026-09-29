class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int a=0;

        while(i<j){
            int p= min(height[i],height[j]);
            int r= j-i;
            int area=r*p;
            a=max(a,area);

            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
           
        }
        return a;

                     
    }
};