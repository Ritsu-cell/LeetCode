class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(),nums1.end());
        set<int>st;
        for(int i=0; i<nums2.size(); i++){
            int target=nums2[i];
            int low=0;
            int high=nums1.size()-1;
            while(low<=high){
            int mid=(low+high)/2;
            if(nums1[mid]==target){
                st.insert(nums1[mid]);
                  break;
            }
            
            else if(target > nums1[mid]){
                low=mid+1;
            }
            else {
                high=mid-1;
            }

            }
           

        }
        vector<int>ans(st.begin(), st.end());
        return ans;

        
        
    }
};