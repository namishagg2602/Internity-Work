//stock span problem


vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans(n,1);
       stack<int> s;
      
       s.push(n-1);
       
       for(int i=n-2;i>=0;i--)
       {
               while(!s.empty() && price[i]>price[s.top()])
               {
                   ans[s.top()]=s.top()-i;
                   s.pop();
               }
           
           s.push(i);
       }
       
       while(!s.empty())
       {
           ans[s.top()]=s.top()+1;
           s.pop();
       }
       
       
      return ans;
    }