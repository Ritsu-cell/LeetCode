class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";

        // Keep only letters and digits, convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }

        string rev = "";
        for(int i=temp.length()-1; i>=0; i--){
             rev += temp[i];


        }
        return rev == temp;
        
    }
};