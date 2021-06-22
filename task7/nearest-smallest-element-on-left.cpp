// nearest smallest element on left


vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size(),i;
    vector<int> ans(n,-1);
    stack<int> s;
    ans[0]=-1;
    s.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
         if(!s.empty() && A[s.top()]>A[i])
         {
             while(!s.empty() && A[s.top()]>A[i])
             {
                 ans[s.top()]=A[i];
                 s.pop();
             }
         }
         s.push(i);
    }

    return ans;
}
