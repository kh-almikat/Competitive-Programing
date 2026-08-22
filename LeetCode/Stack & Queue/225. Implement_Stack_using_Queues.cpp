/*problem link: https://leetcode.com/problems/implement-stack-using-queues/description/ */


class MyStack {
public:

    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        
        q.push(x);
    }
    
    int pop() {
        
        int val;
        queue<int> q2;

        while(!q.empty())
        {
            val = q.front();
            q.pop();

            if(empty() == true)
            {
                break;
            }
            q2.push(val);
        }
        q = q2;

        return val;
    }
    
    int top() {
        
        return q.back();
    }
    
    bool empty() {

        return q.empty();
        
    }
};