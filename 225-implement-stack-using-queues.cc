// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/implement-stack-using-queues/submissions/

class MyStack {
public:
    queue<int> stack;
    queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while (stack.empty() == false)
        {
            temp.push(stack.front());
            stack.pop();
        }
        stack.swap(temp);
    }
    
    int pop() {
        int top = stack.front();
        stack.pop();
        return top;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */