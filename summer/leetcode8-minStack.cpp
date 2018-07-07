/*设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) -- 将元素 x 推入栈中。
pop() -- 删除栈顶的元素。
top() -- 获取栈顶元素。
getMin() -- 检索栈中的最小元素。*/

//2个栈，一个栈操作，另一个栈记录曾经出现过的最小元素，栈顶永远最小或者为null
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty()||x<=s2.top()) {
            s2.push(x);
        }
        
    }
    
    void pop() {
        if(s1.top()==s2.top()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
private:
        stack<int> s1,s2;
    
};
 