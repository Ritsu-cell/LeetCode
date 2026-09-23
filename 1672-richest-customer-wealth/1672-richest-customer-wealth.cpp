class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int mw=0;

      for(const auto& customer:accounts){
        int curr=0;

        for(int m:customer){
            curr+=m;
        }
        mw=max(mw,curr);
      }
      return mw;
        
        
    }
};