/*problem link: https://leetcode.com/problems/min-stack/description/ */


class MinStack {
public:

    stack<int> st;
    stack<int> min_st;

    MinStack() {
        
    }
    
    void push(int value) {
        
        st.push(value);

        if(min_st.empty())
            min_st.push(value);

        else if(min_st.top() >= value)
            min_st.push(value);
    }
    
    void pop() {
        
        if(st.top() == min_st.top())
            min_st.pop();

        st.pop();
    }
    
    int top() {
        
        return st.top();
    }
    
    int getMin() {
        
        return min_st.top();
    }
};

 