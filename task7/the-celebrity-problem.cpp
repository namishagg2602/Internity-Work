//  The Celebrity Problem



int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        for(int i=0;i<n;i++)
        s.push(i);
        
        
        
        while(s.size()>1)
        {
            int a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            if(M[a][b]==1 && M[b][a]==0)
            s.push(b);
            else
            if(M[a][b]==0 && M[b][a]==1)
            s.push(a);
        }
        
        if(s.empty())
        return -1;
        
        int t=s.top();
        s.pop();
        
        for(int i=0;i<n;i++)
            if(t!=i && (M[i][t]==0 || M[t][i]==1))
                return -1;
        
        return t;
        
        
        
    return -1;         
    }