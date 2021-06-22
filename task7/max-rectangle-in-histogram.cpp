// max rectangle in a histogram 

int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int ans=0,i=0,t;
        while(i<heights.size())
        {
            if(s.empty() || heights[s.top()]<=heights[i])
                s.push(i++);
            else
            {
                t=s.top();
                s.pop();
                ans=max(ans,heights[t]*(s.empty()?i:i-s.top()-1));
               
                
            }
        }
        while(!s.empty())
        {
                t=s.top();
                s.pop();
                ans=max(ans,heights[t]*(s.empty()?i:i-s.top()-1));
        }
        
        return ans;
    }