/*problem link: https://leetcode.com/problems/implement-queue-using-stacks/description/ */


class MyQueue {
public:

    stack<int> s;

    MyQueue() {
        
    }
    
    void push(int x) {
        
        s.push(x);
    }
    
    int pop() {
        
        stack<int> ss;
        int val;

        while(!s.empty())
        {
            val = s.top();
            s.pop();

            if(s.empty() == true)
            {
                break;
            }
            ss.push(val);
        }
        
        while(!ss.empty())
        {
            s.push(ss.top());
            ss.pop();
        }

        return val;
    }
    
    int peek() {
        
        stack<int> ss;
        int val;

        while(!s.empty())
        {
            val = s.top();
            s.pop();
            ss.push(val);
        }
        
        while(!ss.empty())
        {
            s.push(ss.top());
            ss.pop();
        }

        return val;
    }
    
    bool empty() {
        return s.empty();
    }
};
