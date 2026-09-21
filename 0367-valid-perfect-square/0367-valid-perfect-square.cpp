class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num<0){
            return false;
        }
        long long int k=0;
        while(k*k <= num){
            if(k*k==num){
                return true;
            }
            k++;
        }
        return false;
        
    }
};