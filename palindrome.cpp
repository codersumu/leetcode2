class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int s=str.size();
        for(int i=0;i<s;i++){
            if (str[i] != str[s - i - 1]) {
            return false;
            }
        }
        return true;
    }
};
