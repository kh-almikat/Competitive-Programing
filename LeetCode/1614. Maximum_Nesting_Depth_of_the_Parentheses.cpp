/*problem link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/ */


class Solution {
public:
    int maxDepth(string s) {
        
        int mx = 0, count= 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                count++;
            else if(s[i] == ')')
                count--;

            mx = max(mx, count);
        }

        return mx;
    }
};