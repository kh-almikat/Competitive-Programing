/*problem link: https://leetcode.com/problems/baseball-game/description/ */


class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        for(auto s : operations)
        {
            if(s == "+")
            {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);

                st.push(first + second);
            }
            else if(s == "D")
            {
                st.push(st.top()*2);
            }
            else if(s == "C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(s)); // stoi-convert string into int
            }
        }

        int sum = 0;
        while(!st.empty())
        {
            sum = sum + st.top();
            st.pop();
        }

        return sum;
        
    }
};