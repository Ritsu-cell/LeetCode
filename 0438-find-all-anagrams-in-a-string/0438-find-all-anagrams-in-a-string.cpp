class Solution {
public:
vector<int> findAnagrams(string s, string p) {
int n = p.length();
int y = s.length();


    vector<int> ans;

    if (y < n) {
        return ans;
    }

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for (int i = 0; i < n; i++) {
        freq1[p[i] - 'a']++;
        freq2[s[i] - 'a']++;
    }

    if (freq1 == freq2) {
        ans.push_back(0);
    }

    for (int i = n; i < y; i++) {
        freq2[s[i] - 'a']++;
        freq2[s[i - n] - 'a']--;

        if (freq1 == freq2) {
            ans.push_back(i - n + 1);
        }
    }

    return ans;
}


};
