//Bottom view of a binary tree



vector <int> bottomView(Node *root)
{
        map<int,int> m;
        vector<int> res;
        if(!root)
        return res;
        
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<Node*,int> p=q.front();
            q.pop();
            
            m[p.second]=p.first->data;
            
            if(p.first->left)
            q.push(make_pair(p.first->left,p.second-1));
            
            if(p.first->right)
            q.push(make_pair(p.first->right,p.second+1));
        }
        
        for(auto x:m)
        res.push_back(x.second);
        
        return res;
}