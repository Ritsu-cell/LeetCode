class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n<=0){
            return false;
        }
         int k=0;
         while(pow(3,k)<=n){
            if(pow(3,k)==n){
                return true;
            }
            k++;
         }
         return false;
        
        
    }
};