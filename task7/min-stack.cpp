// Min Stack

class MinStack {
public:
    /** initialize your data structure here. */
    stack<long long int> s;
    long long int minele;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            minele=val;
        }
        else
        {
            if(val>=minele)     // if val > minele push it directly
                s.push(val);
            else
            {
                /*if val < minele then push 2*val-minele into stack and update minele=val*/
               s.push((long long)2*val-minele); 
               minele=val;
            }
        }
        
    return;
    }
    
    void pop() {
            if(s.top()>=minele) //  if s.top > minele theen pop it directly
                s.pop();
            else
            {
                /*if s.top < minele then update minele=2*minele-s.top and s.pop*/
                minele=(long long)2*minele-s.top(); 
                s.pop();
            }
    return;
    }
    
    int top() {
        return (s.top()<minele?minele:s.top());
    }
    
    int getMin() {
        return minele;
    }
};