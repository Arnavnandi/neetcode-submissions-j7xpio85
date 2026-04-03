class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
            while(left<right && !((s[left]>='a'&& s[left]<='z')||(s[left]>='A'&&s[left]<='Z')||(s[left]>='0'&&s[left]<='9'))){
                left++;
            }
            while(left<right && !((s[right]>='a'&& s[right]<='z')||(s[right]>='A'&&s[right]<='Z')||(s[right]>='0'&&s[right]<='9'))){
                right--;
            }
            char l=s[left];
            char r=s[right];
            if (l >= 'A' && l <= 'Z') l = l + 32;
            if (r >= 'A' && r <= 'Z') r = r + 32;
            if(l!=r)
            return false;
            left++;
            right--;
        }
        return true;
    }
};
