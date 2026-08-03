/*problem link: https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM */


#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> stt;

    while(!st.empty())
    {
        stt.push(st.top());
        st.pop();
    }   

    st.push(x);

    while(!stt.empty())
    {
        st.push(stt.top());
        stt.pop();
    }

    return st;
}
