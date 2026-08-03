/*problem link: https://leetcode.com/problems/backspace-string-compare/description/ */


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st;
        stack<char> stt;

        for(auto c : s)
        {
            if(c == '#')
            {
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(c);
        }

        for(auto c : t)
        {
            if(c == '#')
            {
                if(!stt.empty())
                    stt.pop();
            }
            else
                stt.push(c);
        }

        if(st == stt)
            return true;
        else 
            return false;
    }
};