/*problem link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/ */


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int> st;
        queue<int> q;

        for(int i=students.size()-1; i>=0; i--)
                st.push(sandwiches[i]);

        for(int i=0; i<sandwiches.size(); i++)
                q.push(students[i]);

        
        int count = 0;
        while(1)
        {
            if(st.empty()) break;

            if(st.top() == q.front())
            {
                st.pop();
                q.pop();
                count = 0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                count++;
            }

            if(count == st.size()) break;
        }

        return st.size();
    }
};